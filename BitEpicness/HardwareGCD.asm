main:	move $sp, $0			//0
		ldi $a0, 9			//1,2
		ldi $a1, 6			//3,4
		jal gcd			//5
		wp $v, 0
		j exit			//7
gcd:	addi $sp, 12			//8
		move $sp, $rr		//9
		ldi $t1, -4			//10,11
		swn $s0, $sp, $t1	//12
		ldi $t1, -8			//13,14
		swn $s1, $sp, $t1	//15
		ldi $t1, -12		//16,17
		swn $t0, $sp, $t1	//18
		la $s0, returnB		//19,20
		la $s1, returnA		//21,22
		la $t0, amore		//23,24
		beq $a0, $0, $s0	//25
loop2:	beq $a1, $0, $s1	//26
		bgt $a0, $a1, $t0	//27
		neg $t1, $a0		//28
		add $a1, $t1		//29
		move $a1, $rr		//30
		j loop2			//31
amore:	neg $t1, $a1		//32
		add $a0, $t1		//33
		move $a0, $rr		//34
		j loop2			//35
returnA:move $v, $a0			//36
		j return			//37
returnB:move $v, $a1			//38
return:	ldi $t1, -12		//39,40
		lwn $t0, $sp, $t1	//41
		ldi $t1, -8			//42,43
		lwn $s1, $sp, $t1	//44
		ldi $t1, -4			//45,46
		lwn $s0, $sp, $t1	//47
		addi $sp, -12		//48
		move $sp, $rr		//49
		jr $ra			//50
exit:	j exit				//51
