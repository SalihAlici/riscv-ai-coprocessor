// sw/start.S - C KODUNA ZIPLAMA (BENCHMARK ICIN)
.section .text
.global _start

_start:
    // 1. Stack Pointer'ı güvenli yere (8KB) kur
    li sp, 0x2000

    // 2. Main fonksiyonuna (C koduna) zıpla
    call main

    // 3. Biterse bekle
    tail .