/* sw/sections.lds */
SECTIONS {
    /* Kod hafızanın 0. adresinden başlar */
    . = 0x00000000;
    
    .text : { *(.text) }      /* Kodlar */
    .data : { *(.data) }      /* Değişkenler */
    .bss  : { *(.bss) }       /* Sıfırlanmış veriler */
}
