// sim/sim_main.cpp - PROFESYONEL RAPORLAMA MODU
#include "Vtop.h"
#include "verilated.h"
#include <iostream>
#include <iomanip> // Tablo hizalaması için

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtop* top = new Vtop;

    top->clk = 0;
    top->resetn = 0;

    // Sonuçları saklamak için değişkenler
    int sw_result = 0;
    int sw_time = 0;
    int hw_result = 0;
    int hw_time = 0;
    
    int state = 0; // 0:Başlamadı, 1:SW Sonuç, 2:SW Süre, 3:HW Sonuç, 4:HW Süre

    // 200.000 Cycle çalıştır
    for (int i = 0; i < 200000; i++) {
        top->clk = !top->clk;
        if (i > 50) top->resetn = 1;
        top->eval();

        // İşlemciden veri geldiğinde yakala ve sakla
        if (top->clk == 1 && top->out_valid == 1) {
            int val = (int)top->out_data;

            if (val == 9999) { state = 1; }      // Test Başladı
            else if (val == 7777) { state = 3; } // Ayraç (Donanıma geçiş)
            else {
                // Gelen veriyi duruma göre kaydet
                if (state == 1) { sw_result = val; state = 2; }
                else if (state == 2) { sw_time = val; }
                else if (state == 3) { hw_result = val; state = 4; }
                else if (state == 4) { hw_time = val; }
            }
        }
    }

    // --- SIMULASYON BITTI, RAPORU YAZDIR ---
    
    // Hızlanma Hesabı
    double speedup = (double)sw_time / (double)hw_time;

    std::cout << "\n";
    std::cout << "================================================================" << std::endl;
    std::cout << "   RISC-V INT4 AI HIZLANDIRICI - PERFORMANS BENCHMARK RAPORU    " << std::endl;
    std::cout << "================================================================" << std::endl;
    std::cout << " Test Senaryosu  : 8-Elemanli Nokta Carpimi (Dot Product)" << std::endl;
    std::cout << " Veri Tipi       : INT4 (4-bit Tamsayi SIMD)" << std::endl;
    std::cout << "----------------------------------------------------------------" << std::endl;
    std::cout << std::left << std::setw(25) << " METRIK" 
              << std::left << std::setw(20) << "| YAZILIM (CPU)" 
              << std::left << std::setw(20) << "| DONANIM (ACCEL)" << std::endl;
    std::cout << "-------------------------|-------------------|------------------" << std::endl;
    
    std::cout << std::left << std::setw(25) << " Islem Sonucu" 
              << "| " << std::setw(17) << sw_result 
              << "| " << std::setw(18) << hw_result << std::endl;

    std::cout << std::left << std::setw(25) << " Gecen Sure (Cycle)" 
              << "| " << std::setw(17) << sw_time 
              << "| " << std::setw(18) << hw_time << std::endl;
              
    std::cout << "----------------------------------------------------------------" << std::endl;
    std::cout << " >> SONUC: Donanim Hizlandirici " 
              << std::fixed << std::setprecision(2) << speedup 
              << " KAT daha hizlidir." << std::endl;
    std::cout << "================================================================" << std::endl;
    std::cout << "\n";

    delete top;
    return 0;
}