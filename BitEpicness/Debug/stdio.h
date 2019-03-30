#define putc(x) asm("wp $s0, 0", "x:$s0", "")
