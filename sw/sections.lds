MEMORY
{
    /* RAM 64KB olarak ayarlandi (0x10000) */
    mem : ORIGIN = 0x00000000, LENGTH = 0x00010000
}

SECTIONS
{
    . = 0x00000000;
    .text : { *(.text) } > mem
    .data : { *(.data) } > mem
    .bss  : { *(.bss)  } > mem
    /* Stack, RAM'in en sonundan baslar (Start.S icinde ayarlanir) */
}