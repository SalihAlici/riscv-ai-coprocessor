// sim/top.v - TRAP SİNYALLİ VE DEBUG MODLU TAM SURUM
`timescale 1 ns / 1 ps

module top (
    input clk,
    input resetn,
    output reg [31:0] out_data,
    output reg        out_valid
);
    // İşlemci Sinyalleri
    wire mem_valid;
    wire mem_instr;
    reg mem_ready;
    wire [31:0] mem_addr;
    wire [31:0] mem_wdata;
    wire [3:0] mem_wstrb;
    reg [31:0] mem_rdata;

    // --- HATA SİNYALİ TANIMI (Burası önemli) ---
    wire trap_signal; 

    // 16KB Hafıza
    reg [31:0] memory [0:4095];

    initial begin
        $readmemh("../sw/firmware.hex", memory);
        $display("RAM Yuklendi. Ilk Veri (Adres 0): %h", memory[0]);
    end

    // PicoRV32 Bağlantıları
    picorv32 cpu (
        .clk(clk),
        .resetn(resetn),
        .mem_valid(mem_valid),
        .mem_instr(mem_instr),
        .mem_ready(mem_ready),
        .mem_addr(mem_addr),
        .mem_wdata(mem_wdata),
        .mem_wstrb(mem_wstrb),
        .mem_rdata(mem_rdata),
        
        // --- TRAP BAĞLANTISI (Burası önemli) ---
        .trap(trap_signal), 

        // Kullanılmayan girişleri 0 yapıyoruz
        .irq(32'b0),
        .mem_la_read(),
        .mem_la_write(),
        .mem_la_addr(),
        .mem_la_wdata(),
        .mem_la_wstrb(),
        .pcpi_valid(),
        .pcpi_insn(),
        .pcpi_rs1(),
        .pcpi_rs2(),
        .pcpi_wr(1'b0),
        .pcpi_rd(32'b0),
        .pcpi_wait(1'b0),
        .pcpi_ready(1'b0),
        .eoi(),
        .trace_valid(),
        .trace_data()
    );

    always @(posedge clk) begin
        mem_ready <= 0;
        out_valid <= 0;

        // --- HATA YAKALAYICI ---
        if (trap_signal) begin
             $display("!!! KRITIK HATA: ISLEMCI TRAP (KILITLENME) DURUMUNDA !!!");
             $display("Son Adres: %h", mem_addr);
             $finish; // Simülasyonu durdur
        end

        if (resetn && mem_valid && !mem_ready) begin
            // Casus Yazdırma
            if (mem_instr)
                $display("KOMUT OKUNUYOR: Adres=%h", mem_addr);
            else if (|mem_wstrb)
                $display("VERI YAZILIYOR: Adres=%h Veri=%h", mem_addr, mem_wdata);

            // 1. Durum: Ekrana Yazma (0x10000000)
            if (mem_addr == 32'h1000_0000) begin
                out_data <= mem_wdata;
                out_valid <= 1;
                mem_ready <= 1;
                $display("!!! CIKTI PORTUNA YAZILDI: %d !!!", mem_wdata);
            end
            // 2. Durum: Normal Hafıza
            else if (mem_addr < 32'h0000_4000) begin
                mem_ready <= 1;
                mem_rdata <= memory[mem_addr[13:2]]; 
                if (mem_wstrb[0]) memory[mem_addr[13:2]][7:0]   <= mem_wdata[7:0];
                if (mem_wstrb[1]) memory[mem_addr[13:2]][15:8]  <= mem_wdata[15:8];
                if (mem_wstrb[2]) memory[mem_addr[13:2]][23:16] <= mem_wdata[23:16];
                if (mem_wstrb[3]) memory[mem_addr[13:2]][31:24] <= mem_wdata[31:24];
            end
        end
    end
endmodule