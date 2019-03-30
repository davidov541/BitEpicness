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
ldi $k0, -3
// Words: 12
swn $t0, $sp, $k0
//: load tmp, , a
// Words: 13
// Words: 14
ldi $k0, -3
// Words: 15
lwn $t0, $sp, $k0
//: print tmp, , 
// Words: 16
wp $t0, 0
//: funcend , , 
// Words: 17
addi $0, -1
// Words: 18
lwn $ra, $sp, $rr
// Words: 19
addi $rr, -1
// Words: 20
lwn $s0, $sp, $rr
// Words: 21
addi $rr, -1
// Words: 22
lwn $s1, $sp, $rr
// Words: 23
addi $sp -4
// Words: 24
move $sp, $rr
// Words: 25
//jr $ra
infinite: j infinite