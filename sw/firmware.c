#include <stdint.h>

#define OUTPORT 0x10000000
#define ARRAY_SIZE 128 // 128 Elemanlı Dev Dizi

// --- BÜYÜK VERİ SETİ ---
// CPU için tek tek tanımlamamıza gerek yok, döngüde varmış gibi davranacağız.
// Piksel Değeri: 1
// Ağırlık Değeri: 2
// BEKLENEN SONUÇ: 128 * (1 * 2) = 256

void print_val(int32_t val) {
    *(volatile int32_t*)OUTPORT = val;
}

static inline uint32_t get_cycles() {
    uint32_t cycles;
    asm volatile ("rdcycle %0" : "=r" (cycles));
    return cycles;
}

// 1. YAZILIM (CPU) - Amele Yöntemi
// 128 kere dönüp tek tek çarpacak
int32_t software_test() {
    int32_t sum = 0;
    int32_t p = 1; // Piksel hep 1
    int32_t w = 2; // Ağırlık hep 2
    
    for(int i=0; i < ARRAY_SIZE; i++) {
        sum += p * w; 
    }
    return sum;
}

// 2. DONANIM (HIZLANDIRICI) - Patron Yöntemi
// 128 veriyi 8'erli paketleyip 16 kerede bitirecek
int32_t hardware_test() {
    int32_t total_sum = 0;
    int32_t chunk_res;
    
    // Paket Hazırlığı:
    // p_pack: Sekiz tane 1 -> 0x11111111
    // w_pack: Sekiz tane 2 -> 0x22222222
    uint32_t p_pack = 0x11111111; 
    uint32_t w_pack = 0x22222222;

    // 128 elemanı 8'e böl = 16 Tur
    for(int i=0; i < (ARRAY_SIZE / 8); i++) {
        // Donanımı çağır (Bir kerede 8 işlem yapar)
        asm volatile (
            ".insn r 0x0B, 0, 0, %0, %1, %2" 
            : "=r"(chunk_res) : "r"(w_pack), "r"(p_pack)
        );
        total_sum += chunk_res;
    }
    return total_sum;
}

void main() {
    print_val(0x11111111); // BAŞLADI

    // --- TEST 1: YAZILIM (CPU) ---
    uint32_t t1 = get_cycles();
    int32_t soft_res = software_test();
    uint32_t t2 = get_cycles();
    
    print_val(0xAAAAAAAA); // Yazılım Bitti
    print_val(t2 - t1);    // SÜRE
    print_val(soft_res);   // SONUÇ (256 Bekleniyor)

    // --- TEST 2: DONANIM ---
    uint32_t t3 = get_cycles();
    int32_t hard_res = hardware_test(); 
    uint32_t t4 = get_cycles();

    print_val(0xBBBBBBBB); // Donanım Bitti
    print_val(t4 - t3);    // SÜRE
    print_val(hard_res);   // SONUÇ (256 Bekleniyor)

    // --- 3. KARŞILAŞTIRMA ---
    print_val(0xCCCCCCCC); 
    
    // Sonuçlar 256 ise ve Donanım hızlıysa SUCCESS
    if (hard_res == 256 && soft_res == 256 && (t4-t3) < (t2-t1)) { 
        print_val(0x055CCE55); // SUCCESS
    } else {
        print_val(0xFA1L);     // FAIL
    }
    
    print_val(0xFFFFFFFF); // SON
}