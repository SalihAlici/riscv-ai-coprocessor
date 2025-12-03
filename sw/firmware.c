// sw/firmware.c - FINAL SURUM (CNN + HIZ TESTI)
#include <stdint.h>
#include "model_data.h" 

#define OUTPORT 0x10000000

// Kronometre Fonksiyonu
static inline uint32_t get_cycles() {
    uint32_t cycles;
    asm volatile ("rdcycle %0" : "=r" (cycles));
    return cycles;
}

// Negatif sayıları düzgün basmak için
void print_val(int32_t val) {
    *(volatile int32_t*)OUTPORT = val;
}

void main() {
    print_val(9999); // Başlangıç Sinyali

    uint32_t start_time, end_time, total_time;
    
    // --- KRONOMETREYİ BAŞLAT ---
    start_time = get_cycles();

    // --- CONV2D İŞLEMİ (AĞIR YÜK) ---
    // Resmin üzerinde geziyoruz (3x3'lük kısım)
    for (int y = 0; y < 3; y++) { 
        for (int x = 0; x < 3; x++) { 
            
            int32_t acc = 0;
            int w_idx = 0;

            // Çekirdek (Kernel) Döngüsü
            for (int ky = 0; ky < 3; ky++) {
                for (int kx = 0; kx < 3; kx++) {
                    uint32_t p = img_data[(y + ky) * IMG_W + (x + kx)];
                    uint32_t w = weight_data[w_idx++];
                    
                    int32_t res;
                    
                    // DONANIMI ÇAĞIR
                    asm volatile (
                        ".insn r 0x0B, 0, 0, %0, %1, %2" 
                        : "=r"(res) : "r"(w), "r"(p)
                    );
                    
                    acc += res;
                }
            }
            // Her pikselin sonucunu bas (Doğruluk için)
            print_val(acc);
        }
    }

    // --- KRONOMETREYİ DURDUR ---
    end_time = get_cycles();
    total_time = end_time - start_time;

    // --- SONUÇLARI RAPORLA ---
    print_val(7777);       // Bitiş Ayracı
    print_val(total_time); // TOPLAM SÜRE (Cycle)
}