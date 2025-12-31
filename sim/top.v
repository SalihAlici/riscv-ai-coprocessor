`timescale 1 ns / 1 ps

module top (
    input clk,
    input resetn,
    output trap,
    output [31:0] out_data,
    output        out_valid
);

    parameter MEM_SIZE = 65536; // 64KB RAM

    wire mem_valid;
    wire mem_instr;
    wire mem_ready;
    wire [31:0] mem_addr;
    wire [31:0] mem_wdata;
    wire [3:0]  mem_wstrb;
    wire [31:0] mem_rdata;

    wire pcpi_valid;
    wire [31:0] pcpi_insn;
    wire [31:0] pcpi_rs1;
    wire [31:0] pcpi_rs2;
    wire pcpi_wr;
    wire [31:0] pcpi_rd;
    wire pcpi_wait;
    wire pcpi_ready;

    assign pcpi_wr = 1;
    assign pcpi_wait = 0;

    picorv32 #(
        .PROGADDR_RESET(32'h 0000_0000),
        .STACKADDR(MEM_SIZE),
        .BARREL_SHIFTER(1),
        .COMPRESSED_ISA(0),
        .ENABLE_PCPI(1),
        // --- DUZELTME BURADA: Carpma ve Bolmeyi ACTIK (1 Yaptik) ---
        .ENABLE_MUL(1), 
        .ENABLE_DIV(1)  
    ) cpu (
        .clk       (clk),
        .resetn    (resetn),
        .trap      (trap),
        .mem_valid (mem_valid),
        .mem_instr (mem_instr),
        .mem_ready (mem_ready),
        .mem_addr  (mem_addr),
        .mem_wdata (mem_wdata),
        .mem_wstrb (mem_wstrb),
        .mem_rdata (mem_rdata),
        .pcpi_valid(pcpi_valid),
        .pcpi_insn (pcpi_insn),
        .pcpi_rs1  (pcpi_rs1),
        .pcpi_rs2  (pcpi_rs2),
        .pcpi_wr   (pcpi_wr),
        .pcpi_rd   (pcpi_rd),
        .pcpi_wait (pcpi_wait),
        .pcpi_ready(pcpi_ready)
    );

    ai_accelerator my_accel (
        .clk       (clk),
        .resetn    (resetn),
        .pcpi_valid(pcpi_valid),
        .pcpi_insn (pcpi_insn),
        .pcpi_rs1  (pcpi_rs1),
        .pcpi_rs2  (pcpi_rs2),
        .pcpi_ready(pcpi_ready),
        .pcpi_rd   (pcpi_rd)
    );

    reg [31:0] memory [0:(MEM_SIZE/4)-1];

    assign mem_ready = 1'b1;
    assign mem_rdata = (mem_addr < MEM_SIZE) ? memory[mem_addr >> 2] : 32'd0;

    assign out_valid = mem_valid && (|mem_wstrb) && (mem_addr == 32'h10000000);
    assign out_data  = mem_wdata;

    always @(posedge clk) begin
        if (mem_valid && |mem_wstrb && (mem_addr < MEM_SIZE)) begin
            if (mem_wstrb[0]) memory[mem_addr >> 2][ 7: 0] <= mem_wdata[ 7: 0];
            if (mem_wstrb[1]) memory[mem_addr >> 2][15: 8] <= mem_wdata[15: 8];
            if (mem_wstrb[2]) memory[mem_addr >> 2][23:16] <= mem_wdata[23:16];
            if (mem_wstrb[3]) memory[mem_addr >> 2][31:24] <= mem_wdata[31:24];
        end
    end

    initial begin
        $readmemh("../sw/firmware.hex", memory);
    end
endmodule