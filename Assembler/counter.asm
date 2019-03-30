	move $s0, $0		//0
	ldi $s1, 1000		//1,2
	la $t1, inner		//3,4
	// Reset timer
loop:	wp $0, 1		//5
	// Wait for timer to reach 1 second
inner:	rp $t0, 1			//6
	blt $t0, $s1, $t1		//7
	// Reached 1 second
	addi $s0, 1		//8
	move $s0, $rr		//9
	wp $s0, 0		//10
	j loop			//11