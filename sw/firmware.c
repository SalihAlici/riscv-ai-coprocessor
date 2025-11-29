// sw/firmware.c - PERFORMANS KARSILASTIRMASI
#include <stdint.h>

// Çıktı Portu (Simülasyon ekranına yazan adres)
#define OUTPORT 0x10000000

// Cycle Sayacını Okuyan Fonksiyon (RISC-V Kronometresi)
static inline uint32_t get_cycles() {
    uint32_t cycles;
    asm volatile ("rdcycle %0" : "=r" (cycles));
    return cycles;
}

// Ekrana Yazdırma Yardımcısı
void print_val(uint32_t val) {
    *(volatile uint32_t*)OUTPORT = val;
}

void main() {
    // --- HAZIRLIK ---
    // Test verileri (INT4 için paketlenmiş)
    // A = 1, 1, 1, 1, 1, 1, 1, 1 (Hepsi 1) -> 0x11111111
    // B = 2, 2, 2, 2, 2, 2, 2, 2 (Hepsi 2) -> 0x22222222
    uint32_t regA = 0x11111111;
    uint32_t regB = 0x22222222;
    
    uint32_t baslangic, bitis;
    uint32_t normal_sure, hizli_sure;
    int32_t sonuc_normal = 0;
    int32_t sonuc_hizli = 0;

    // Sinyal: Test Başlıyor (9999)
    print_val(9999);

    // ==========================================
    // TEST 1: NORMAL YÖNTEM (YAZILIMLA)
    // ==========================================
    // Bu işlemcinin INT4 desteği olmadığı için, 
    // 32-bit veriyi parçalayıp (shift/mask) tek tek çarpmalıyız.
    // Bu, normal bir işlemcinin yapmak zorunda olduğu "ameleliktir".
    
    baslangic = get_cycles();
    
    // 8 adet 4-bitlik parçayı çıkar ve çarp
    for (int i = 0; i < 8; i++) {
        // Her seferinde 4 bit kaydır ve 0xF (15) ile maskele
        int8_t valA = (int8_t)((regA >> (i * 4)) & 0xF);
        int8_t valB = (int8_t)((regB >> (i * 4)) & 0xF);
        
        // İşaretli sayı düzeltmesi (Negatif kontrolü)
        if (valA > 7) valA -= 16;
        if (valB > 7) valB -= 16;
        
        sonuc_normal += (valA * valB);
    }
    
    bitis = get_cycles();
    normal_sure = bitis - baslangic;

    // ==========================================
    // TEST 2: SENİN HIZLANDIRICIN (DONANIMLA)
    // ==========================================
    
    baslangic = get_cycles();
    
    // TEK KOMUT! (Sihir burada)
    asm volatile (
        ".insn r 0x0B, 0, 0, %0, %1, %2"
        : "=r"(sonuc_hizli)
        : "r"(regA), "r"(regB)
    );
    
    bitis = get_cycles();
    hizli_sure = bitis - baslangic;

    // ==========================================
    // SONUÇLARI YAZDIR
    // ==========================================
    
    // 1. Normal Sonuç (Doğrulama için) -> 16 olmalı
    print_val(sonuc_normal);
    
    // 2. Normal Süre (Cycle) -> Yüksek çıkacak
    print_val(normal_sure);
    
    // AYRAÇ (7777)
    print_val(7777);
    
    // 3. Hızlı Sonuç (Doğrulama için) -> 16 olmalı
    print_val(sonuc_hizli);
    
    // 4. Hızlı Süre (Cycle) -> Düşük çıkacak
    print_val(hizli_sure);
}