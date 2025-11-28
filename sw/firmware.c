// sw/firmware.c
#include <stdint.h>

// İşlemcinin dışarıya (Testbench'e) mesaj göndereceği adres
// Simülasyonda bu adrese yazılan veriyi ekrana bastıracağız.
#define OUTPORT 0x10000000

void main() {
    // 0'dan 5'e kadar say ve dışarı gönder
    for (int i = 0; i <= 5; i++) {
        *(volatile uint32_t*)OUTPORT = i;
    }
}
