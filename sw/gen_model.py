# sw/gen_model.py (Sanal Arkadaş)
import numpy as np
import os

# --- AYARLAR ---
IMG_W, IMG_H = 8, 8   # 8x8 Piksel Test Resmi
KERNEL_SIZE = 3       # 3x3 Filtre
CHANNELS = 8          # 8 Kanal (Senin donanımın tek seferde 8 kanal çarpıyor!)

# --- FP4 (E2M1) TABLOSU ---
fp4_map = {
    0.0: 0, 0.0625: 1, 0.125: 2, 0.25: 3, 0.5: 4, 0.75: 5, 1.0: 6, 1.5: 7,
    -0.0: 8, -0.0625: 9, -0.125: 10, -0.25: 11, -0.5: 12, -0.75: 13, -1.0: 14, -1.5: 15
}

def float_to_fp4_hex(val):
    # En yakın FP4 değerini bul
    return fp4_map[min(fp4_map.keys(), key=lambda x: abs(x - val))]

# --- RASTGELE VERİ OLUŞTUR ---
np.random.seed(42) # Her seferinde aynı sayıları üretmesi için
# Resim ve Ağırlıklar (Değerler tablodaki sayılardan seçiliyor)
input_img = np.random.choice(list(fp4_map.keys()), (IMG_H, IMG_W, CHANNELS))
weights = np.random.choice(list(fp4_map.keys()), (KERNEL_SIZE, KERNEL_SIZE, CHANNELS))

# --- PYTHON İLE HESAPLA (REFERANS SONUÇ) ---
print("-" * 40)
print("PYTHON REFERANS SONUÇLARI (Beklenen)")
print("-" * 40)

# Sadece ilk 3 pikseli hesaplayıp ekrana yazalım
for y in range(3): 
    for x in range(3):
        # 3x3x8'lik alanı kesip al
        patch = input_img[y:y+3, x:x+3, :]
        # Çarp ve Topla (Konvolüsyon)
        res = np.sum(patch * weights)
        
        # Donanım 256 ile ölçeklediği için (16*16) sonucu 256 ile çarpıp gösteriyoruz
        hw_val = int(res * 256)
        print(f"Piksel[{y},{x}] Sonucu: {res:.4f} -> Donanım Beklentisi: {hw_val}")

# --- C DOSYASI OLUŞTUR (model_data.h) ---
def pack_8(vals):
    packed = 0
    for i in range(8):
        code = float_to_fp4_hex(vals[i])
        packed |= (code << (i*4)) # 4'er bit kaydırarak paketle
    return packed

header_path = "sw/model_data.h"
# Eğer sw klasöründe değilsek yolu düzelt
if not os.path.exists("sw"): header_path = "model_data.h"

with open(header_path, "w") as f:
    f.write(f"#define IMG_W {IMG_W}\n#define IMG_H {IMG_H}\n")
    f.write(f"#define OUT_W {IMG_H-2}\n#define OUT_H {IMG_W-2}\n\n")
    
    # Resmi Paketle
    f.write("const uint32_t img_data[] = {\n")
    for y in range(IMG_H):
        for x in range(IMG_W):
            packed = pack_8(input_img[y,x,:])
            f.write(f"0x{packed:08X}, ")
        f.write("\n")
    f.write("};\n\n")

    # Ağırlıkları Paketle
    f.write("const uint32_t weight_data[] = {\n")
    for ky in range(3):
        for kx in range(3):
            packed = pack_8(weights[ky,kx,:])
            f.write(f"0x{packed:08X}, ")
    f.write("};\n")

print("-" * 40)
print(f"'{header_path}' dosyası başarıyla oluşturuldu!")