// k1 = x location
// k2 = y location
// k0 = temperary
// s0 = current block number
// s1 = address of string
// s2 = ending block

			j bootloader			// 0			
			ldi $sp, 512			// 1, 2
			nop				// 3
			nop				// 4
			nop				// 5
			nop				// 6
			
// **** Interupt routine ****

interupt:		la $k0, noSetup		// 7, 8
			addi $s0, 5
			wp $rr, 0
			bne $s0, $0, $k0		// 9
			ldi $a, 0			// 10,11		
			jal puts			// 12
			addi $0, 15			// 13
			lwn $k0, $0, $rr	// Loads last block address in, 14
			addi $k0, 1			// 15
			move $s2, $rr			// 16
noSetup:		addi $s0, 1			// Increment block to read, 17
			move $s0, $rr			// 18
			wp $s0, 0
			la $k0, readNext		// 19, 20
			bne $s0, $s2, $k0	// checks if there's another block to read, 21
								// There is no more blocks to read
			sll $s0, 8
			move $sp, $rr		
			ldi $k0, 256
			wp $k0, 0
aaaaa:			j aaaaa
			mtc0 $k0, $br
			jr $0				// Start executing program
readNext:	wp $s0, 4			// Reads the next block 25
			sll $s0, 8			// 26
			ldi $k0, 16384			// 27, 28
			add $rr, $k0			// 29
			wp $rr, 4			// Writes address to read block, 30
			ldi $k0, -32768		// Reads block, 31, 32
			wp $k0, 4			// 33
exitInt:	mfc0 $k0, $epc				// 34
			eni				// 35
			jr $k0				// 36
			
// **** Main Bootloader code ****
bootloader:	move $s0, $0				// 37
			jal initScreen			// 38
			ldi $a, 76			// L, 39, 40
			jal putc			// 41
			ldi $a, 111			// o, 42, 43
			jal putc			// 44
			ldi $a, 97			// a, 45, 46
			jal putc			// 47
			ldi $a, 100			// d, 48, 49
			jal putc			// 50
			ldi $a, 105			// i, 51, 52
			jal putc			// 53
			ldi $a, 110			// n, 54, 55
			jal putc			// 56
			ldi $a, 103			// g, 57, 58
			jal putc			// 59
			ldi $a, 10			// Newline, 60, 61
			jal putc			// 62
			
wait4ready:	rp $k0, 4			// Wait for SD card to be initialized, 63
			la $s1, wait4ready	// 64, 65
			bne $0, $k0, $s1	// 66
			
			wp $0, 4		// 67
			ldi $k0, -32768		// Read first block, 68, 69
			wp $k0, 4		// 70
			eni			// 71
			
wait:		j wait				// Wait for interupt, 72

// **** Puts function ****
puts:		swn $ra, $sp, $0		// 73
			addi $sp, 1		// 74
			move $sp, $rr		// 75
			move $s1, $a		// 76
putsLoop:		lwn $a, $s1, $0		// Get charactor, 78
			la $k0, putsDone	// 79, 80
			beq $0, $a, $k0		// if null character, exit function, 81
			jal putc		// 82	
			addi $s1, 1		// 83	
			move $s1, $rr		// 84
			wp $s1, 0
			j putsLoop		// 85	
putsDone:	addi $sp, -1			// 86
			move $sp, $rr		// 87
			lwn $ra, $sp, $0	// 88
			jr $ra			// 89

			
// **** Putc function ****
putc:			rp $k0, 3		// Wait for VGA to be done, 93
			la $v, putc		// 94, 95
			bne $0, $k0, $v		// 96
			addi $0, 10		// Check if input charactor is a new line, 97
			la $k0, notNewLine	// 95, 96
			bne $rr, $a, $k0	// 97
			move $k1, $0		// If new line then set x to 0, 98
			addi $k2, 10		// Set y to y + 10, 99
			move $k2, $rr		// 100
			jr $ra			// 101
notNewLine:					// Otherwise draw charactor
			ldi $k0, 512		// Calculate x command, 102, 103
			add $k0, $k1		// 106
			wp $rr, 3		// Send set x command, 107
			ldi $k0, 1024		// Calculate y command, 108, 109
			add $k0, $k2		// 110
			wp $rr, 3		// Send set y command, 111
			ldi $k0, 2048		// Calculate write char command, 112, 113
			add $k0, $a		// 114
			wp $rr, 3		// 115
			addi $k1, 6		// 116
			move $k1, $rr		// 117
			jr $ra			// 118


// **** initScreen function ****			
initScreen:		ldi $k0, 1543		// Set color to white, 119, 120
			wp $k0, 3		// 121
			move $k1, $0		// 122
			move $k2, $0		// 123
			jr $ra			// 124		