// rtl/ai_accelerator.v - INT4 SIMD (TURKCE YORUMLAR / ENGLISH LOGS)
`timescale 1 ns / 1 ps

module ai_accelerator (
    input             clk,
    input             resetn,
    
    // PCPI Arayüzü (İşlemci ile İletişim Kabloları)
    input             pcpi_valid, // İşlemci: "Al sana iş!"
    input      [31:0] pcpi_insn,  // İşlemci: "Komutun bu" (Opcode)
    input      [31:0] pcpi_rs1,   // İşlemci: "1. Veri Paketi" (8 adet ağırlık)
    input      [31:0] pcpi_rs2,   // İşlemci: "2. Veri Paketi" (8 adet giriş)
    
    output reg        pcpi_wr,    // Biz: "Sonucu yazdım"
    output reg [31:0] pcpi_rd,    // Biz: "Sonuç budur"
    output reg        pcpi_ready, // Biz: "Hazırım"
    output            pcpi_wait   // Biz: "Bekle" (Kullanmıyoruz)
);

    // Bizim özel komutumuz mu? (Opcode sonu 0001011 mi?)
    wire is_my_instruction = (pcpi_insn[6:0] == 7'b0001011);
    
    // İşlemciyi bekletmeyeceğiz, tek saat darbesinde bitiriyoruz
    assign pcpi_wait = 0;

    // --- INT4 SIMD MANTIGI (PARCALAMA) ---
    // 32-bitlik yazmacı 8 adet 4-bitlik parçaya bölüyoruz.
    // "signed" diyoruz çünkü sayılar negatif olabilir (-8 ile +7 arası).
    wire signed [3:0] a0 = pcpi_rs1[3:0];   wire signed [3:0] b0 = pcpi_rs2[3:0];
    wire signed [3:0] a1 = pcpi_rs1[7:4];   wire signed [3:0] b1 = pcpi_rs2[7:4];
    wire signed [3:0] a2 = pcpi_rs1[11:8];  wire signed [3:0] b2 = pcpi_rs2[11:8];
    wire signed [3:0] a3 = pcpi_rs1[15:12]; wire signed [3:0] b3 = pcpi_rs2[15:12];
    wire signed [3:0] a4 = pcpi_rs1[19:16]; wire signed [3:0] b4 = pcpi_rs2[19:16];
    wire signed [3:0] a5 = pcpi_rs1[23:20]; wire signed [3:0] b5 = pcpi_rs2[23:20];
    wire signed [3:0] a6 = pcpi_rs1[27:24]; wire signed [3:0] b6 = pcpi_rs2[27:24];
    wire signed [3:0] a7 = pcpi_rs1[31:28]; wire signed [3:0] b7 = pcpi_rs2[31:28];

    // --- CARPMA ISLEMI (PARALEL) ---
    // 4-bit * 4-bit işlemi en fazla 8-bit sonuç üretir ama biz 16-bitte tutalım.
    wire signed [15:0] p0 = a0 * b0;
    wire signed [15:0] p1 = a1 * b1;
    wire signed [15:0] p2 = a2 * b2;
    wire signed [15:0] p3 = a3 * b3;
    wire signed [15:0] p4 = a4 * b4;
    wire signed [15:0] p5 = a5 * b5;
    wire signed [15:0] p6 = a6 * b6;
    wire signed [15:0] p7 = a7 * b7;

    // --- NOKTA CARPIMI (TOPLAMA ve ISARET UZATMA) ---
    // HATA DUZELTME: Verilator uyarısını gidermek için 16-bitlik sayıları
    // 32-bit toplama işlemine sokmadan önce işaretini koruyarak uzatıyoruz (Sign Extension).
    // {{16{p0[15]}}, p0} demek: Sayının en solundaki bitini (işaret biti) al, 
    // 16 kere kopyala ve sayının başına ekle. Böylece -1 (0xFFFF) hala -1 (0xFFFFFFFF) kalır.
    wire signed [31:0] dot_product = 
        {{16{p0[15]}}, p0} + {{16{p1[15]}}, p1} + 
        {{16{p2[15]}}, p2} + {{16{p3[15]}}, p3} + 
        {{16{p4[15]}}, p4} + {{16{p5[15]}}, p5} + 
        {{16{p6[15]}}, p6} + {{16{p7[15]}}, p7};

    always @(posedge clk) begin
        // Varsayılan olarak işlemciye "hazır değilim" diyoruz
        pcpi_ready <= 0;
        pcpi_wr    <= 0;

        // Reset değilse, işlemci veri gönderdiyse ve bu bizim komutumuzsa:
        if (resetn && pcpi_valid && is_my_instruction) begin
            
            // --- CIKTI (LOG) ---
            // Burayı rapor için İngilizce bıraktık
            // $display("ACCEL: Dot Product Calculated: %d", dot_product);
            
            // Sonucu işlemciye geri gönder
            pcpi_rd <= dot_product; 
            
            // "Ben hazırım" sinyali gönder
            pcpi_ready <= 1;
            pcpi_wr    <= 1;
        end
    end

endmodule