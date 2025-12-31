#include <stdint.h>

#define OUTPORT 0x10000000
#define N 8 // 8x8 Matris

void print_val(int32_t val) { *(volatile int32_t*)OUTPORT = val; }
static inline uint32_t get_cycles() { uint32_t c; asm volatile ("rdcycle %0" : "=r" (c)); return c; }

// 1. YAZILIM (CPU) - Klasik Matris Carpimi (O^3)
int32_t software_matmul() {
    int32_t total = 0;
    // CPU 3 tane ic ice dongu kurmak zorundadir
    for(int i=0; i<N; i++) {       // Satir
        for(int j=0; j<N; j++) {   // Sutun
            int32_t sum = 0;
            for(int k=0; k<N; k++) { // Ic Carpim (Dot Product)
                // A[i][k]=1, B[k][j]=2 varsayiyoruz
                sum += 1 * 2; 
            }
            total += sum;
        }
    }
    return total;
}

// 2. DONANIM (ACC) - Hizlandirilmis Matris Carpimi (O^2)
int32_t hardware_matmul() {
    int32_t total = 0;
    int32_t dot_res;
    
    // Paketler: 8 adet '1' ve 8 adet '2'
    uint32_t row_pack = 0x11111111; 
    uint32_t col_pack = 0x22222222;

    // Donanim sayesinde en icteki 'k' dongusune gerek kalmaz!
    for(int i=0; i<N; i++) {       // Satir
        for(int j=0; j<N; j++) {   // Sutun
            
            // TEK KOMUTLA 8 CARPIM + 8 TOPLAMA
            asm volatile (
                ".insn r 0x0B, 0, 0, %0, %1, %2" 
                : "=r"(dot_res) : "r"(row_pack), "r"(col_pack)
            );
            
            total += dot_res;
        }
    }
    return total;
}

void main() {
    print_val(0x11111111);
    
    // CPU TESTI
    uint32_t t1 = get_cycles();
    int32_t cpu_res = software_matmul();
    uint32_t t2 = get_cycles();
    print_val(0xAAAAAAAA); print_val(t2-t1); print_val(cpu_res);

    // DONANIM TESTI
    uint32_t t3 = get_cycles();
    int32_t acc_res = hardware_matmul();
    uint32_t t4 = get_cycles();
    print_val(0xBBBBBBBB); print_val(t4-t3); print_val(acc_res);

    // KARSILASTIRMA (Beklenen 1024)
    print_val(0xCCCCCCCC);
    if(acc_res == 1024 && cpu_res == 1024 && (t4-t3) < (t2-t1)) print_val(0x055CCE55);
    else print_val(0xFA1L);
    
    print_val(0xFFFFFFFF);
}