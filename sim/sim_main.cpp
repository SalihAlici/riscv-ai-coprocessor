// sim/sim_main.cpp - NEGATIF SAYI GOSTEREN SURUM
#include "Vtop.h"
#include "verilated.h"
#include <iostream>
#include <iomanip> // std::setw için

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtop* top = new Vtop;

    top->clk = 0;
    top->resetn = 0;

    // 200.000 Cycle çalıştır
    for (int i = 0; i < 200000; i++) {
        top->clk = !top->clk;
        if (i > 50) top->resetn = 1;
        top->eval();

        // Çıktı yakalama
        if (top->clk == 1 && top->out_valid == 1) {
            
            // --- KRİTİK NOKTA BURASI ---
            // Verilator çıktıyı 'unsigned' (işaretsiz) verir.
            // Biz onu zorla 'int32_t' (işaretli) yapıyoruz.
            int32_t val = (int32_t)top->out_data; 

            // Özel sinyalleri ayırt et
            if (val == 9999) {
                std::cout << "--- TEST BASLIYOR ---" << std::endl;
            } 
            else if (val == 7777) {
                std::cout << "--- TEST BITTI ---" << std::endl;
            }
            else {
                // Sayıyı hem normal hem de yanına açıklama ile basalım
                std::cout << "OUTPUT: " << val << std::endl;
            }
        }
    }

    delete top;
    return 0;
}