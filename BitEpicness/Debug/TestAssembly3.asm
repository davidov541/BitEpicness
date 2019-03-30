main:	ldi $a0, -100
	jal abs
	addi $v, 50
	ldi $a0, 500
	jal abs
	addi $v, -50
	j exit
abs:    la $t1, return
	move $v, $a0
	bgt $a0, $0, $t1
	neg $v, $a0
return: jr $ra
exit:	nop