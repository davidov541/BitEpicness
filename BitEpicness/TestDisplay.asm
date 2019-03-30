ldi $s0, 4		//0,1
wp $s0, 0
nop
nop
nop
ldi $s0, 0
rp $s1, 0
addi $s1, 6
wp $rr, 0
loop: j loop