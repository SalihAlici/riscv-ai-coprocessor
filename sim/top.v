// sim/top.v - ENGLISH LOGS VERSION
`timescale 1 ns / 1 ps

module top (
    input clk,
    input resetn,
    output reg [31:0] out_data,
    output reg        out_valid
);
    wire mem_valid;
    wire mem_instr;
    reg mem_ready;
    wire [31:0] mem_addr;
    wire [31:0] mem_wdata;
    wire [3:0] mem_wstrb;
    reg [31:0] mem_rdata;
    wire trap_signal; 

    // PCPI Interface Signals
    wire        pcpi_valid;
    wire [31:0] pcpi_insn;
    wire [31:0] pcpi_rs1;
    wire [31:0] pcpi_rs2;
    wire        pcpi_wr;
    wire [31:0] pcpi_rd;
    wire        pcpi_ready;
    wire        pcpi_wait;

    reg [31:0] memory [0:4095];

    initial begin
        $readmemh("../sw/firmware.hex", memory);
        $display("SYSTEM: RAM Loaded. First Word (Addr 0): %h", memory[0]);
    end

    // PicoRV32 Core
    picorv32 #(
        .ENABLE_PCPI(1),
        .ENABLE_MUL(1),
        .ENABLE_DIV(0)
    ) cpu (
        .clk(clk), .resetn(resetn),
        .mem_valid(mem_valid), .mem_instr(mem_instr), .mem_ready(mem_ready),
        .mem_addr(mem_addr), .mem_wdata(mem_wdata), .mem_wstrb(mem_wstrb), .mem_rdata(mem_rdata),
        .trap(trap_signal),
        .pcpi_valid(pcpi_valid), .pcpi_insn(pcpi_insn), .pcpi_rs1(pcpi_rs1), .pcpi_rs2(pcpi_rs2),
        .pcpi_wr(pcpi_wr), .pcpi_rd(pcpi_rd), .pcpi_wait(pcpi_wait), .pcpi_ready(pcpi_ready),
        .irq(32'b0)
    );

    // AI Accelerator Module
    ai_accelerator my_accel (
        .clk(clk), .resetn(resetn),
        .pcpi_valid(pcpi_valid), .pcpi_insn(pcpi_insn),
        .pcpi_rs1(pcpi_rs1), .pcpi_rs2(pcpi_rs2),
        .pcpi_wr(pcpi_wr), .pcpi_rd(pcpi_rd),
        .pcpi_ready(pcpi_ready), .pcpi_wait(pcpi_wait)
    );

    always @(posedge clk) begin
        mem_ready <= 0;
        out_valid <= 0;

        if (trap_signal) begin
             $display("!!! CRITICAL ERROR: CPU TRAP (HALTED) !!!");
             $display("Last Address: %h", mem_addr);
             $finish;
        end

        if (resetn && mem_valid && !mem_ready) begin
            
            // Memory Access Logging (Optional: Comment out to reduce noise)
            /*
            if (mem_instr)
                $display("FETCH: Addr=%h", mem_addr);
            else if (|mem_wstrb)
                $display("WRITE: Addr=%h Data=%h", mem_addr, mem_wdata);
            */

            // OUTPUT PORT (0x10000000)
            if (mem_addr == 32'h1000_0000) begin
                out_data <= mem_wdata;
                out_valid <= 1;
                mem_ready <= 1;
                // Clean Output for Report
                $display("OUTPUT: %d", mem_wdata);
            end
            // Normal Memory Access
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