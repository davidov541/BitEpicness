//swap: funcdecl , , 
swap:// Words: 0
addi $sp, 6
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
//: load *tmp, , a
// Words: 12
// Words: 13
ldi $k0, -4
// Words: 14
lwn $t0, $sp, $k0
//: u* *tmp, , *tmp
// Words: 15
lwn $t0, $0, $t0
//: store tmp, , *tmp
// Words: 16
// Words: 17
ldi $k0, -6
// Words: 18
swn $t0, $sp, $k0
//: load *tmp, , b
// Words: 19
// Words: 20
ldi $k0, -5
// Words: 21
lwn $t0, $sp, $k0
//: u* *tmp, , *tmp
// Words: 22
lwn $t0, $0, $t0
//: load *tmp2, , a
// Words: 23
// Words: 24
ldi $k0, -4
// Words: 25
lwn $t1, $sp, $k0
//: storeadd *tmp, , *tmp2
// Words: 26
swn $t0, $0, $t1
//: move *tmp, , *tmp
// Words: 27
move $t0, $t0
//: load *tmp, , tmp
// Words: 28
// Words: 29
ldi $k0, -6
// Words: 30
lwn $t0, $sp, $k0
//: load *tmp2, , b
// Words: 31
// Words: 32
ldi $k0, -5
// Words: 33
lwn $t1, $sp, $k0
//: storeadd *tmp, , *tmp2
// Words: 34
swn $t0, $0, $t1
//: move *tmp, , *tmp
// Words: 35
move $t0, $t0
//: funcend , , 
// Words: 36
addi $0, -1
// Words: 37
lwn $ra, $sp, $rr
// Words: 38
addi $rr, -1
// Words: 39
lwn $s0, $sp, $rr
// Words: 40
addi $rr, -1
// Words: 41
lwn $s1, $sp, $rr
// Words: 42
addi $sp -6
// Words: 43
move $sp, $rr
// Words: 44
jr $ra
//main: funcdecl , , 
main:// Words: 45
addi $sp, 5
move $sp, $rr
addi $0, -1
swn $ra, $sp, $rr
addi $rr, -1
swn $s0, $sp, $rr
addi $rr, -1
swn $s1, $sp, $rr

//: loadi *tmp, , 5
// Words: 53
// Words: 54
ldi $t0, 5

//: store x, , *tmp
// Words: 55
// Words: 56
ldi $k0, -4
// Words: 57
swn $t0, $sp, $k0

//: loadi *tmp, , 10
// Words: 58
// Words: 59
ldi $t0, 10
//: store y, , *tmp
// Words: 60
// Words: 61
ldi $k0, -5
// Words: 62
swn $t0, $sp, $k0
//: u& *tmp, , x
// Words: 63
addi $sp, -4
// Words: 64
move $t0, $rr
//: param *tmp, , 
// Words: 65
move  $a0, $t0
//: u& *tmp, , y
// Words: 66
addi $sp, -5
// Words: 67
move $t0, $rr
//: param *tmp, , 
// Words: 68
move  $a1, $t0
//: funccall , , swap
// Words: 69
jal swap
//: assembly wp $s0, 0, , 
// Words: 70
// Words: 71
ldi $k0, -4
// Words: 72
lwn $s0, $sp, $k0
// Words: 73
wp $s0, 0
//: loadi *tmp, , 0
// Words: 74
// Words: 75
ldi $t0, 0
//: jr , *tmp, 
// Words: 76
move $v, $t0
// Words: 77
addi $0, -1
// Words: 78
lwn $ra, $sp, $rr
// Words: 79
addi $rr, -1
// Words: 80
lwn $s0, $sp, $rr
// Words: 81
addi $rr, -1
// Words: 82
lwn $s1, $sp, $rr
// Words: 83
addi $sp -5
// Words: 84
move $sp, $rr
// Words: 85
jr $ra
