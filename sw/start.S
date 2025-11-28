// sw/start.S - TAM TEST MODU
.section .text
.global _start

_start:
    // 1. Stack Pointer Kurulumu
    li sp, 0x2000

    // 2. Hazırlık
    li s0, 0x10000000   // Çıktı Portu Adresi (s0 registerında tut)
    li s1, 5            // Hedef sayı (5'e kadar sayacağız)
    li t0, 0            // Sayaç (i = 0)

    // 3. Başlangıç Sinyali (170)
    li t1, 0xAA
    sw t1, 0(s0)        // Ekrana 170 yaz

loop_basla:
    // Sayacı ekrana yaz
    sw t0, 0(s0)

    // Sayacı 1 artır (i = i + 1)
    addi t0, t0, 1

    // Eğer sayaç (t0) <= Hedef (s1) ise başa dön
    ble t0, s1, loop_basla

sonsuz_dongu:
    // İşimiz bitti, burada bekle
    j sonsuz_dongu