.section .text
.global _start

_start:
    /* Stack Pointer'i 64KB (0x10000) adresine kur */
    li sp, 0x10000
    
    /* C kodundaki main fonksiyonuna zipla */
    call main

    /* Main biterse (ki bitmemeli) sonsuz donguye gir */
loop:
    j loop