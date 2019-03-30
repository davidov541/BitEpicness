main:		ldi $a0, 7		//0,1
		jal relPrime	//2
		j exit		//3

relPrime:	swn $s0, $sp, $0
		ldi $t1, 1
		swn $s1, $sp, $t1
		ldi $t1, 2
		swn $t0, $sp, $t1
		ldi $t1, 3
		swn $ra, $sp, $t1
		addi $sp, 4
		move $sp, $rr 
		ldi $s0, 2		
		move $s1, $a0	
		ldi $t0, 1		
rpLoop:	move $a1, $s0	
		move $a0, $s1	
		jal gcd		
		la $t1, exitRP	
		beq $v, $t0, $t1	
		addi $s0, 1	
		move $s0, $rr	
		j rpLoop		

exitRP:	move $v, $s0	
		addi $sp, -4
		move $sp, $rr		
		lwn $s0, $sp, $0	
		ldi $t1, 1			
		lwn $s1, $sp, $t1	//4
		ldi $t1, 2			//5,6
		lwn $t0, $sp, $t1	//7
		ldi $t1, 3			//8,9
		lwn $ra, $sp, $t1	
		jr $ra		


gcd:		swn $s0, $sp, $0
		ldi $t1, 1
		swn $s1, $sp, $t1
		ldi $t1, 2
		swn $t0, $sp, $t1
		ldi $t1, 3
		swn $ra, $sp, $t1
		addi $sp, 4
		move $sp, $rr 
		la $s0, returnB		//31,32
		la $s1, returnA		//33,34
		la $t0, amore		//35,36
		beq $a0, $0, $s0	//37
loop2:	beq $a1, $0, $s1	//38
		bgt $a0, $a1, $t0	//39
		neg $t1, $a0		//40
		add $a1, $t1		//41
		move $a1, $rr		//42
		j loop2			//43
amore:	neg $t1, $a1		//44
		add $a0, $t1		//45
		move $a0, $rr		//46
		j loop2			//47
returnA:move $v, $a0			//48
		j return			//49
returnB:move $v, $a1			//50
return:	addi $sp, -4
		move $sp, $rr
		lwn $s0, $sp, $0
		ldi $t1, 1
		lwn $s1, $sp, $t1
		ldi $t1, 2
		lwn $t0, $sp, $t1
		ldi $t1, 3
		lwn $ra, $sp, $t1
		jr $ra			//62
exit:	j exit				//63