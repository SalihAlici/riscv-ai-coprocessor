// sim/sim_main.cpp
#include "Vtop.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtop* top = new Vtop;

    top->clk = 0;
    top->resetn = 0;

    // SÜREYİ ARTIRDIK: 2000 -> 100000
    for (int i = 0; i < 200; i++) {
        top->clk = !top->clk;
        
        // Reset'i 50. döngüde bırak (İyice sıfırlansın)
        if (i > 50) top->resetn = 1;

        top->eval();

        // Çıktı yakalama
        if (top->clk == 1 && top->out_valid == 1) {
            std::cout << "ISLEMCI CIKTISI: " << (int)top->out_data << std::endl;
        }
    }

    std::cout << "Simulasyon Tamamlandi." << std::endl;
    delete top;
    return 0;
}
