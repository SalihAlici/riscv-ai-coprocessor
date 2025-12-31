#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 
#include <iostream>
#include <iomanip> 

// Renk Kodlari
#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtop* top = new Vtop;
    VerilatedVcdC* tfp = new VerilatedVcdC; // (Opsiyonel: Waveform icin)
    
    // Waveform acmak istersen asagidaki satiri acabilirsin, su an kapali kalsin hizli olsun.
    // Verilated::traceEverOn(true);
    // top->trace(tfp, 99);
    // tfp->open("waveform.vcd");

    top->clk = 0;
    top->resetn = 0;

    int main_time = 0;

    printf(BOLD "\n==========================================================\n" RESET);
    printf(BOLD "   RISC-V IMAGE PROCESSING DEMO (Edge Detection)          \n" RESET);
    printf(BOLD "==========================================================\n" RESET);

    while (main_time < 2000000) { 
        top->clk = !top->clk;
        if (main_time > 50) top->resetn = 1;
        
        top->eval();
        
        if (top->clk == 1 && top->out_valid == 1) {
            uint32_t data = top->out_data;

            // KONTROL KODLARI
            if (data == 0x11111111) {
                printf(CYAN "\n[INFO] Goruntu Yuklendi. Islem Basliyor...\n" RESET);
            }
            else if (data == 0xAAAAAAAA) {
                 printf(YELLOW "\n[INFO] Islem Tamamlandi. Cizim Yapiliyor:\n\n" RESET);
            }
            else if (data == 0xFFFFFFFF) {
                printf(BOLD "\n\n[INFO] Simulasyon Bitti.\n" RESET);
                break;
            }
            // ASCII KARAKTER BASMA MANTIGI
            // Eger veri 256'dan kucukse, bu bir harftir (char).
            else if (data < 256) {
                printf("%c", (char)data);
            }
        }
        main_time++;
    }

    delete top;
    return 0;
}