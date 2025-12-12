#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true); 

    Vtop* top = new Vtop;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    top->trace(tfp, 99);
    tfp->open("waveform_final.vcd"); // Dosya adı

    top->clk = 0;
    top->resetn = 0;

    int main_time = 0;

    // 100.000 cycle çalıştır (Yeterince uzun)
    while (main_time < 100000) { 
        top->clk = !top->clk;
        if (main_time > 50) top->resetn = 1;
        
        top->eval();
        tfp->dump(main_time); // Kayıt
        
        // İş biterse erken çık (7777'yi görünce)
        if (top->clk == 1 && top->out_valid == 1 && top->out_data == 7777) {
            break; 
        }

        main_time++;
    }

    tfp->close();
    delete top;
    printf("Kayit bitti: waveform_final.vcd olustu.\n");
    return 0;
}