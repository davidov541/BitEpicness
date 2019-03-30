//gcd: funcdecl , , 
gcd:// Words: 0
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
//: formal a, , 
// Words: 8
addi $0, -4
// Words: 9
swn $a0, $sp, $rr
//: formal b, , 
// Words: 10
addi $0, -5
// Words: 11
swn $a1, $sp, $rr
//: load tmp, , a
// Words: 12
// Words: 13
ldi $k0, -4
// Words: 14
lwn $t0, $sp, $k0
//: loadi tmp2, , 0
// Words: 15
// Words: 16
ldi $t1, 0
//: == tmp, tmp2, tmp
// Words: 17
// Words: 18
la $k0, L13
// Words: 19
beq $t0, $t1, $k0
// Words: 20
// Words: 21
ldi $t0, 0
// Words: 22
j L14
// Words: 23
// Words: 24
L13:ldi $t0, 1
L14:
//: if tmp, , 
// Words: 25
// Words: 26
la $k0, L2
// Words: 27
beq $t0, $0, $k0
//: load tmp, , b
L1:// Words: 28
// Words: 29
ldi $k0, -5
// Words: 30
lwn $t0, $sp, $k0
//: jr , tmp, 
// Words: 31
move $v, $t0
// Words: 32
addi $0, -1
// Words: 33
lwn $ra, $sp, $rr
// Words: 34
addi $rr, -1
// Words: 35
lwn $s0, $sp, $rr
// Words: 36
addi $rr, -1
// Words: 37
lwn $s1, $sp, $rr
// Words: 38
addi $sp -5
// Words: 39
move $sp, $rr
// Words: 40
jr $ra
//: load tmp, , b
L2:// Words: 41
// Words: 42
ldi $k0, -5
// Words: 43
lwn $t0, $sp, $k0
//: loadi tmp2, , 0
// Words: 44
// Words: 45
ldi $t1, 0
//: != tmp, tmp2, tmp
// Words: 46
// Words: 47
la $k0, L15
// Words: 48
bne $t0, $t1, $k0
// Words: 49
// Words: 50
ldi $t0, 0
// Words: 51
j L16
// Words: 52
// Words: 53
L15:ldi $t0, 1
L16:
//: if tmp, , 
// Words: 54
// Words: 55
la $k0, L7
// Words: 56
beq $t0, $0, $k0
//: load tmp, , a
L3:// Words: 57
// Words: 58
ldi $k0, -4
// Words: 59
lwn $t0, $sp, $k0
//: load tmp2, , b
// Words: 60
// Words: 61
ldi $k0, -5
// Words: 62
lwn $t1, $sp, $k0
//: > tmp, tmp2, tmp
// Words: 63
// Words: 64
la $k0, L17
// Words: 65
bgt $t0, $t1, $k0
// Words: 66
// Words: 67
ldi $t0, 0
// Words: 68
j L18
// Words: 69
// Words: 70
L17:ldi $t0, 1
L18:
//: if tmp, , 
// Words: 71
// Words: 72
la $k0, L5
// Words: 73
beq $t0, $0, $k0
//: load tmp, , a
L4:// Words: 74
// Words: 75
ldi $k0, -4
// Words: 76
lwn $t0, $sp, $k0
//: load tmp2, , b
// Words: 77
// Words: 78
ldi $k0, -5
// Words: 79
lwn $t1, $sp, $k0
//: - , tmp2, tmp
// Words: 80
neg $k0, $t1
// Words: 81
add $t0, $k0
//: move tmp, , rr
// Words: 82
move $t0, $rr
//: store a, , tmp
// Words: 83
// Words: 84
ldi $k0, -4
// Words: 85
swn $t0, $sp, $k0
// Words: 86
j L6
//: load tmp, , b
L5:// Words: 87
// Words: 88
ldi $k0, -5
// Words: 89
lwn $t0, $sp, $k0
//: load tmp2, , a
// Words: 90
// Words: 91
ldi $k0, -4
// Words: 92
lwn $t1, $sp, $k0
//: - , tmp2, tmp
// Words: 93
neg $k0, $t1
// Words: 94
add $t0, $k0
//: move tmp, , rr
// Words: 95
move $t0, $rr
//: store b, , tmp
// Words: 96
// Words: 97
ldi $k0, -5
// Words: 98
swn $t0, $sp, $k0
//: jump , , 
L6:// Words: 99
j L2
//: load tmp, , a
L7:// Words: 100
// Words: 101
ldi $k0, -4
// Words: 102
lwn $t0, $sp, $k0
//: jr , tmp, 
// Words: 103
move $v, $t0
// Words: 104
addi $0, -1
// Words: 105
lwn $ra, $sp, $rr
// Words: 106
addi $rr, -1
// Words: 107
lwn $s0, $sp, $rr
// Words: 108
addi $rr, -1
// Words: 109
lwn $s1, $sp, $rr
// Words: 110
addi $sp -5
// Words: 111
move $sp, $rr
// Words: 112
jr $ra
//relPrime: funcdecl , , 
relPrime:// Words: 113
addi $sp, 5
// Words: 114
move $sp, $rr
// Words: 115
addi $0, -1
// Words: 116
swn $ra, $sp, $rr
// Words: 117
addi $rr, -1
// Words: 118
swn $s0, $sp, $rr
// Words: 119
addi $rr, -1
// Words: 120
swn $s1, $sp, $rr
//: formal n, , 
// Words: 121
addi $0, -4
// Words: 122
swn $a0, $sp, $rr
//: loadi tmp, , 2
// Words: 123
// Words: 124
ldi $t0, 2
//: store m, , tmp
// Words: 125
// Words: 126
ldi $k0, -5
// Words: 127
swn $t0, $sp, $k0
//: load tmp, , n
L9:// Words: 128
// Words: 129
ldi $k0, -4
// Words: 130
lwn $t0, $sp, $k0
//: param tmp, , 
// Words: 131
move  $a0, $t0
//: load tmp, , m
// Words: 132
// Words: 133
ldi $k0, -5
// Words: 134
lwn $t0, $sp, $k0
//: param tmp, , 
// Words: 135
move  $a1, $t0
//: funccall tmp, , gcd
// Words: 136
jal gcd
// Words: 137
move $t0, $v
//: loadi tmp2, , 1
// Words: 138
// Words: 139
ldi $t1, 1
//: != tmp, tmp2, tmp
// Words: 140
// Words: 141
la $k0, L19
// Words: 142
bne $t0, $t1, $k0
// Words: 143
// Words: 144
ldi $t0, 0
// Words: 145
j L20
// Words: 146
// Words: 147
L19:ldi $t0, 1
L20:
//: if tmp, , 
// Words: 148
// Words: 149
la $k0, L11
// Words: 150
beq $t0, $0, $k0
//: load tmp, , m
L10:// Words: 151
// Words: 152
ldi $k0, -5
// Words: 153
lwn $t0, $sp, $k0
//: loadi tmp2, , 1
// Words: 154
// Words: 155
ldi $t1, 1
//: + , tmp2, tmp
// Words: 156
add $t0, $t1
//: move tmp, , rr
// Words: 157
move $t0, $rr
//: store m, , tmp
// Words: 158
// Words: 159
ldi $k0, -5
// Words: 160
swn $t0, $sp, $k0
//: jump , , 
// Words: 161
j L9
//: load tmp, , m
L11:// Words: 162
// Words: 163
ldi $k0, -5
// Words: 164
lwn $t0, $sp, $k0
//: jr , tmp, 
// Words: 165
move $v, $t0
// Words: 166
addi $0, -1
// Words: 167
lwn $ra, $sp, $rr
// Words: 168
addi $rr, -1
// Words: 169
lwn $s0, $sp, $rr
// Words: 170
addi $rr, -1
// Words: 171
lwn $s1, $sp, $rr
// Words: 172
addi $sp -5
// Words: 173
move $sp, $rr
// Words: 174
jr $ra
//main: funcdecl , , 
main:// Words: 175
addi $sp, 4
// Words: 176
move $sp, $rr
// Words: 177
addi $0, -1
// Words: 178
swn $ra, $sp, $rr
// Words: 179
addi $rr, -1
// Words: 180
swn $s0, $sp, $rr
// Words: 181
addi $rr, -1
// Words: 182
swn $s1, $sp, $rr
//: loadi tmp, , 210
// Words: 183
// Words: 184
ldi $t0, 210
//: param tmp, , 
// Words: 185
move  $a0, $t0
//: funccall tmp, , relPrime
// Words: 186
jal relPrime
// Words: 187
move $t0, $v
//: store x, , tmp
// Words: 188
// Words: 189
ldi $k0, -4
// Words: 190
swn $t0, $sp, $k0
//: assembly wp $s0, 0, , 
// Words: 191
ldi $k0, -4
// Words: 192
lwn $s0, $sp, $k0
// Words: 193
wp $s0, 0
//: loadi tmp, , 0
// Words: 194
// Words: 195
ldi $t0, 0
//: jr , tmp, 
// Words: 196
move $v, $t0
// Words: 197
addi $0, -1
// Words: 198
lwn $ra, $sp, $rr
// Words: 199
addi $rr, -1
// Words: 200
lwn $s0, $sp, $rr
// Words: 201
addi $rr, -1
// Words: 202
lwn $s1, $sp, $rr
// Words: 203
addi $sp -4
// Words: 204
move $sp, $rr
// Words: 205
jr $ra
