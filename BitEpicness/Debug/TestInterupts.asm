la $s0, loop
loop: addi $0, 5
blt $0, $rr, $s0
ldi $a0, 10
nop
mfc0 $s1, $epc
wp $a0, 0
loop2: j loop2