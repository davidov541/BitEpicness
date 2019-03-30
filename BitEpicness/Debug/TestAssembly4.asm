	ldi $s0, 15
	la $s1, end
loop:	beq $s0, $0, $s1
	addi $s0, -1
	move $s0, $rr
	j loop

end:	j end