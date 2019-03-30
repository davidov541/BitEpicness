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
addi $0, -4
// Words: 9
swn $a0, $sp, $rr
//: load tmp, , i
// Words: 10
// Words: 11
ldi $k0, -4
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
L6:
//: if tmp, , 
// Words: 23
// Words: 24
la $k0, L2
// Words: 25
beq $t0, $0, $k0
//: load tmp, , i
L1:// Words: 26
// Words: 27
ldi $k0, -4
// Words: 28
lwn $t0, $sp, $k0
//: store n, , tmp
// Words: 29
// Words: 30
ldi $k0, -5
// Words: 31
swn $t0, $sp, $k0
// Words: 32
j L3
//: load tmp, , i
L2:// Words: 33
// Words: 34
ldi $k0, -4
// Words: 35
lwn $t0, $sp, $k0
//: u- tmp, , tmp
// Words: 36
neg $t0, $t0
//: store n, , tmp
// Words: 37
// Words: 38
ldi $k0, -5
// Words: 39
swn $t0, $sp, $k0
//: load tmp, , n
L3:// Words: 40
// Words: 41
ldi $k0, -5
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
//main: funcdecl , , 
main:// Words: 53
addi $sp, 9
// Words: 54
move $sp, $rr
// Words: 55
addi $0, -1
// Words: 56
swn $ra, $sp, $rr
// Words: 57
addi $rr, -1
// Words: 58
swn $s0, $sp, $rr
// Words: 59
addi $rr, -1
// Words: 60
swn $s1, $sp, $rr
//: loadi tmp, , 7
// Words: 61
// Words: 62
ldi $t0, 7
//: param tmp, , 
// Words: 63
move  $a0, $t0
//: funccall tmp, , abs
// Words: 64
jal abs
// Words: 65
move $t0, $v
//: store a, , tmp
// Words: 66
// Words: 67
ldi $k0, -4
// Words: 68
swn $t0, $sp, $k0
//: loadi tmp, , -9001
// Words: 69
// Words: 70
ldi $t0, -9001
//: param tmp, , 
// Words: 71
move  $a0, $t0
//: funccall tmp, , abs
// Words: 72
jal abs
// Words: 73
move $t0, $v
//: store b, , tmp
// Words: 74
// Words: 75
ldi $k0, -5
// Words: 76
swn $t0, $sp, $k0
//: loadi tmp, , 42
// Words: 77
// Words: 78
ldi $t0, 42
//: param tmp, , 
// Words: 79
move  $a0, $t0
//: funccall tmp, , abs
// Words: 80
jal abs
// Words: 81
move $t0, $v
//: store c, , tmp
// Words: 82
// Words: 83
ldi $k0, -6
// Words: 84
swn $t0, $sp, $k0
//: loadi tmp, , 10
// Words: 85
// Words: 86
ldi $t0, 10
//: param tmp, , 
// Words: 87
move  $a0, $t0
//: funccall tmp, , abs
// Words: 88
jal abs
// Words: 89
move $t0, $v
//: store d, , tmp
// Words: 90
// Words: 91
ldi $k0, -7
// Words: 92
swn $t0, $sp, $k0
//: loadi tmp, , 7
// Words: 93
// Words: 94
ldi $t0, 7
//: loadi tmp2, , -9001
// Words: 95
// Words: 96
ldi $t1, -9001
//: + , tmp2, tmp
// Words: 97
add $t0, $t1
//: move tmp, , rr
// Words: 98
move $t0, $rr
//: store f, , tmp
// Words: 99
// Words: 100
ldi $k0, -8
// Words: 101
swn $t0, $sp, $k0
//: loadi tmp, , 42
// Words: 102
// Words: 103
ldi $t0, 42
//: loadi tmp2, , 42
// Words: 104
// Words: 105
ldi $t1, 42
//: + , tmp2, tmp
// Words: 106
add $t0, $t1
//: move tmp, , rr
// Words: 107
move $t0, $rr
//: store g, , tmp
// Words: 108
// Words: 109
ldi $k0, -9
// Words: 110
swn $t0, $sp, $k0
//: assembly wp $s0, 0, , 
// Words: 111
ldi $k0, -6
// Words: 112
lwn $s0, $sp, $k0
// Words: 113
wp $s0, 0
//: loadi tmp, , 0
// Words: 114
// Words: 115
ldi $t0, 0
//: jr , tmp, 
// Words: 116
move $v, $t0
// Words: 117
addi $0, -1
// Words: 118
lwn $ra, $sp, $rr
// Words: 119
addi $rr, -1
// Words: 120
lwn $s0, $sp, $rr
// Words: 121
addi $rr, -1
// Words: 122
lwn $s1, $sp, $rr
// Words: 123
addi $sp -9
// Words: 124
move $sp, $rr
// Words: 125
jr $ra
