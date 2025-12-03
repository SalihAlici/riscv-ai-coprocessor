// rtl/ai_accelerator.v - FP4 (E2M1) SIMD ACCELERATOR
`timescale 1 ns / 1 ps

module ai_accelerator (
    input             clk,
    input             resetn,
    input             pcpi_valid,
    input      [31:0] pcpi_insn,
    input      [31:0] pcpi_rs1,  // Ağırlıklar (8 adet FP4)
    input      [31:0] pcpi_rs2,  // Girdiler (8 adet FP4)
    output reg        pcpi_wr,
    output reg [31:0] pcpi_rd,
    output reg        pcpi_ready,
    output            pcpi_wait
);

    // Opcode Kontrolü (0x0B)
    wire is_my_instruction = (pcpi_insn[6:0] == 7'b0001011);
    assign pcpi_wait = 0;

    // --- FP4 ÇÖZÜMLEME TABLOSU (Senin Anladığın Tablo) ---
    // 1.0 = 16 (Sabit Nokta Referansı)
    function signed [11:0] fp4_decode(input [3:0] fp4);
        case (fp4)
            4'b0000: fp4_decode = 12'd0;    // 0.0
            4'b0001: fp4_decode = 12'd1;    // 0.0625
            4'b0010: fp4_decode = 12'd2;    // 0.125
            4'b0011: fp4_decode = 12'd4;    // 0.25
            4'b0100: fp4_decode = 12'd8;    // 0.5
            4'b0101: fp4_decode = 12'd12;   // 0.75
            4'b0110: fp4_decode = 12'd16;   // 1.0  <-- REFERANS
            4'b0111: fp4_decode = 12'd24;   // 1.5
            4'b1000: fp4_decode = -12'd0;   // -0.0
            4'b1001: fp4_decode = -12'd1;   // -0.0625
            4'b1010: fp4_decode = -12'd2;   // -0.125
            4'b1011: fp4_decode = -12'd4;   // -0.25
            4'b1100: fp4_decode = -12'd8;   // -0.5
            4'b1101: fp4_decode = -12'd12;  // -0.75
            4'b1110: fp4_decode = -12'd16;  // -1.0
            4'b1111: fp4_decode = -12'd24;  // -1.5
            default: fp4_decode = 12'd0;
        endcase
    endfunction

    // 1. PARÇALA
    wire [3:0] a_raw[0:7];
    wire [3:0] b_raw[0:7];
    genvar i;
    generate
        for (i = 0; i < 8; i = i + 1) begin : unpack
            assign a_raw[i] = pcpi_rs1[i*4 +: 4];
            assign b_raw[i] = pcpi_rs2[i*4 +: 4];
        end
    endgenerate

    // 2. ÇÖZ (FP4 -> Fixed Point)
    wire signed [11:0] a_val[0:7];
    wire signed [11:0] b_val[0:7];
    generate
        for (i = 0; i < 8; i = i + 1) begin : decode
            assign a_val[i] = fp4_decode(a_raw[i]);
            assign b_val[i] = fp4_decode(b_raw[i]);
        end
    endgenerate

    // 3. ÇARP ve TOPLA
    // 12-bit * 12-bit = 24-bit sonuç
    wire signed [23:0] prod[0:7];
    generate
        for (i = 0; i < 8; i = i + 1) begin : mult
            assign prod[i] = a_val[i] * b_val[i];
        end
    endgenerate

    wire signed [31:0] dot_product = prod[0] + prod[1] + prod[2] + prod[3] + 
                                     prod[4] + prod[5] + prod[6] + prod[7];

    always @(posedge clk) begin
        pcpi_ready <= 0;
        pcpi_wr    <= 0;
        if (resetn && pcpi_valid && is_my_instruction) begin
            pcpi_rd <= dot_product; 
            pcpi_ready <= 1;
            pcpi_wr    <= 1;
        end
    end
endmodule