#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 
#include <iostream>
#include <iomanip> 

#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define CYAN    "\033[36m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RED     "\033[31m"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true); 

    Vtop* top = new Vtop;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    top->trace(tfp, 99);
    tfp->open("waveform_final.vcd");

    top->clk = 0;
    top->resetn = 0;

    int main_time = 0;
    int data_state = 0; 
    
    uint32_t cpu_cycles = 0;
    uint32_t acc_cycles = 0;
    int32_t cpu_result = 0;
    int32_t acc_result = 0;

    // --- YENI BASLIK: MATRIX MULTIPLICATION ---
    printf(BOLD "\n=========================================================================\n" RESET);
    printf(BOLD "   RISC-V AI COPROCESSOR | PERFORMANCE BENCHMARK REPORT v3.0             \n" RESET);
    printf(BOLD "=========================================================================\n" RESET);
    printf("Test Scenario : Matrix Multiplication (8x8 GEMM)\n");
    printf("Complexity    : O(N^3) Software vs O(N^2) Hardware\n");
    printf("Architecture  : PicoRV32 + Custom SIMD Accelerator\n");
    printf("-------------------------------------------------------------------------\n\n");

    while (main_time < 500000) { 
        top->clk = !top->clk;
        if (main_time > 50) top->resetn = 1;
        
        top->eval();
        tfp->dump(main_time); 

        if (top->clk == 1 && top->out_valid == 1) {
            uint32_t data = top->out_data;

            if (data == 0x11111111) {
                printf(CYAN "[INFO] Benchmark Started...\n" RESET);
                data_state = 0;
            }
            else if (data == 0xAAAAAAAA) { data_state = 1; }
            else if (data == 0xBBBBBBBB) { data_state = 3; }
            else if (data == 0xCCCCCCCC) { data_state = 0; }
            else if (data == 0x055CCE55) { 
                printf("\n" BOLD "-------------------------------------------------------------------------\n" RESET);
                printf(BOLD "BENCHMARK RESULTS SUMMARY\n" RESET);
                printf("-------------------------------------------------------------------------\n");
                printf("%-25s | %-15s | %-15s\n", "METRIC", "CPU (Software)", "ACC (Hardware)");
                printf("-------------------------------------------------------------------------\n");
                
                printf("%-25s | %-15d | %-15d\n", "Execution Time (Cycles)", cpu_cycles, acc_cycles);
                printf("%-25s | %-15d | %-15d\n", "Matrix Checksum", cpu_result, acc_result);
                printf("-------------------------------------------------------------------------\n");
                
                float speedup = (float)cpu_cycles / (float)acc_cycles;
                printf(BOLD "SPEEDUP FACTOR            : " GREEN "%.2fx FASTER" RESET "\n", speedup);
                printf(BOLD "VERIFICATION STATUS       : " GREEN "PASS (Bit-Exact Match)" RESET "\n");
                printf("-------------------------------------------------------------------------\n");
            }
            else if (data == 0xFA1L) {
                printf(RED BOLD "\n[ERROR] VERIFICATION FAILED!\n" RESET);
                printf("CPU: %d vs ACC: %d\n", cpu_result, acc_result);
            }
            else if (data == 0xFFFFFFFF) {
                printf(BOLD "\n[INFO] Simulation Terminated Successfully.\n" RESET);
                break;
            }
            else {
                if (data_state == 1) { cpu_cycles = data; data_state = 2; }
                else if (data_state == 2) { cpu_result = data; printf(YELLOW " -> [CPU] Matrix Mul Completed. Cycles: %d\n" RESET, cpu_cycles); data_state = 0; }
                else if (data_state == 3) { acc_cycles = data; data_state = 4; }
                else if (data_state == 4) { acc_result = data; printf(YELLOW " -> [ACC] Matrix Mul Completed. Cycles: %d\n" RESET, acc_cycles); data_state = 0; }
            }
        }
        main_time++;
    }

    tfp->close();
    delete top;
    return 0;
}