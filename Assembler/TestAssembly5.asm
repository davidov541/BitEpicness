	ldi $s0, 3		//0,1
	la $s1, end		//2,3
loop:	beq $s0, $0, $s1	//4
	addi $s0, -1		//5
	move $s0, $rr		//6
	j loop			//7

end:	j end			//8