//main: funcdecl , , 
main:// Words: 0
addi $sp, 4
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
//: loadi tmp, , 5
// Words: 8
// Words: 9
ldi $t0, 5
//: store a, , tmp
// Words: 10
// Words: 11
ldi $k0, -4
// Words: 12
swn $t0, $sp, $k0
//: assembly wp $s0, 0, , 
// Words: 13
ldi $k0, -4
// Words: 14
lwn $s0, $sp, $k0
// Words: 15
wp $s0, 0
//: loadi tmp, , 0
// Words: 16
// Words: 17
ldi $t0, 0
//: jr , tmp, 
// Words: 18
move $v, $t0
// Words: 19
addi $0, -1
// Words: 20
lwn $ra, $sp, $rr
// Words: 21
addi $rr, -1
// Words: 22
lwn $s0, $sp, $rr
// Words: 23
addi $rr, -1
// Words: 24
lwn $s1, $sp, $rr
// Words: 25
addi $sp -4
// Words: 26
move $sp, $rr
// Words: 27
jr $ra
