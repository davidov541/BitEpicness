//abs: funcdecl , , 
abs:// Words: 0
addi $sp, 5
// Words: 1
move $sp, $rr
// Words: 2
addi $0, -1
// Words: 3
swn $ra, $sp, $rr
// Words: 4
addi $rr, -1
// Words: 5
swn $s0, $sp, $rr
// Words: 6
addi $rr, -1
// Words: 7
swn $s1, $sp, $rr
//: formal i, , 
// Words: 8
addi $0, -3
// Words: 9
swn $a0, $sp, $rr
//: load tmp, , i
// Words: 10
// Words: 11
ldi $k0, -3
// Words: 12
lwn $t0, $sp, $k0
//: loadi tmp2, , 0
// Words: 13
// Words: 14
ldi $t1, 0
//: > tmp, tmp2, tmp
// Words: 15
// Words: 16
la $k0, L5
// Words: 17
bgt $t0, $t1, $k0
// Words: 18
// Words: 19
ldi $t0, 0
// Words: 20
j L6
// Words: 21
// Words: 22
L5:ldi $t0, 1
// Words: 23
L6:
//: if tmp, , 
// Words: 24
// Words: 25
la $k0, L2
// Words: 26
beq $t0, $0, $k0
//: load tmp, , i
L1:// Words: 27
// Words: 28
ldi $k0, -3
// Words: 29
lwn $t0, $sp, $k0
//: store n, , tmp
// Words: 30
// Words: 31
ldi $k0, -4
// Words: 32
swn $t0, $sp, $k0
j L3
//: load tmp, , i
L2:// Words: 33
// Words: 34
ldi $k0, -3
// Words: 35
lwn $t0, $sp, $k0
//: u- tmp, , tmp
// Words: 36
neg $t0, $t0
//: store n, , tmp
// Words: 37
// Words: 38
ldi $k0, -4
// Words: 39
swn $t0, $sp, $k0
//: load tmp, , n
L3:// Words: 40
// Words: 41
ldi $k0, -4
// Words: 42
lwn $t0, $sp, $k0
//: jr , tmp, 
// Words: 43
move $v, $t0
// Words: 44
addi $0, -1
// Words: 45
lwn $ra, $sp, $rr
// Words: 46
addi $rr, -1
// Words: 47
lwn $s0, $sp, $rr
// Words: 48
addi $rr, -1
// Words: 49
lwn $s1, $sp, $rr
// Words: 50
addi $sp -5
// Words: 51
move $sp, $rr
// Words: 52
jr $ra
//: funcend , , 
// Words: 53
addi $0, -1
// Words: 54
lwn $ra, $sp, $rr
// Words: 55
addi $rr, -1
// Words: 56
lwn $s0, $sp, $rr
// Words: 57
addi $rr, -1
// Words: 58
lwn $s1, $sp, $rr
// Words: 59
addi $sp -5
// Words: 60
move $sp, $rr
// Words: 61
jr $ra
//main: funcdecl , , 
main:// Words: 62
addi $sp, 6
// Words: 63
move $sp, $rr
// Words: 64
addi $0, -1
// Words: 65
swn $ra, $sp, $rr
// Words: 66
addi $rr, -1
// Words: 67
swn $s0, $sp, $rr
// Words: 68
addi $rr, -1
// Words: 69
swn $s1, $sp, $rr
//: loadi tmp, , 7
// Words: 70
// Words: 71
ldi $t0, 7
//: param tmp, , 
// Words: 72
move  $a0, $t0
//: funccall tmp, , abs
// Words: 73
jal abs
// Words: 74
move $t0, $v
//: store a, , tmp
// Words: 75
// Words: 76
ldi $k0, -3
// Words: 77
swn $t0, $sp, $k0
//: loadi tmp, , -9001
// Words: 78
// Words: 79
ldi $t0, -9001
//: param tmp, , 
// Words: 80
move  $a0, $t0
//: funccall tmp, , abs
// Words: 81
jal abs
// Words: 82
move $t0, $v
//: store b, , tmp
// Words: 83
// Words: 84
ldi $k0, -4
// Words: 85
swn $t0, $sp, $k0
//: loadi tmp, , 42
// Words: 86
// Words: 87
ldi $t0, 42
//: param tmp, , 
// Words: 88
move  $a0, $t0
//: funccall tmp, , abs
// Words: 89
jal abs
// Words: 90
move $t0, $v
//: store c, , tmp
// Words: 91
// Words: 92
ldi $k0, -5
// Words: 93
swn $t0, $sp, $k0
//: load tmp, , c
// Words: 94
// Words: 95
ldi $k0, -5
// Words: 96
lwn $t0, $sp, $k0
//: print tmp, , 
// Words: 97
wp $t0, 0
//: loadi tmp, , 0
// Words: 98
// Words: 99
ldi $t0, 0
//: jr , tmp, 
// Words: 100
move $v, $t0
// Words: 101
addi $0, -1
// Words: 102
lwn $ra, $sp, $rr
// Words: 103
addi $rr, -1
// Words: 104
lwn $s0, $sp, $rr
// Words: 105
addi $rr, -1
// Words: 106
lwn $s1, $sp, $rr
// Words: 107
addi $sp -6
// Words: 108
move $sp, $rr
// Words: 109
jr $ra
//: funcend , , 
// Words: 110
addi $0, -1
// Words: 111
lwn $ra, $sp, $rr
// Words: 112
addi $rr, -1
// Words: 113
lwn $s0, $sp, $rr
// Words: 114
addi $rr, -1
// Words: 115
lwn $s1, $sp, $rr
// Words: 116
addi $sp -6
// Words: 117
move $sp, $rr
// Words: 118
jr $ra
