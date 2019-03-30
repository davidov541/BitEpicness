`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:56:00 05/14/2010 
// Design Name: 
// Module Name:    Adder16b 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Adder16b(input[15:0] a, input[15:0] b, input ci, output[15:0] r, output co);

	wire[14:0] tmp;

	Adder1b add1(a[0], b[0], ci, r[0], tmp[0]);
	Adder1b add2(a[1], b[1], tmp[0], r[1], tmp[1]);
	Adder1b add3(a[2], b[2], tmp[1], r[2], tmp[2]);
	Adder1b add4(a[3], b[3], tmp[2], r[3], tmp[3]);
	Adder1b add5(a[4], b[4], tmp[3], r[4], tmp[4]);
	Adder1b add6(a[5], b[5], tmp[4], r[5], tmp[5]);
	Adder1b add7(a[6], b[6], tmp[5], r[6], tmp[6]);
	Adder1b add8(a[7], b[7], tmp[6], r[7], tmp[7]);
	Adder1b add9(a[8], b[8], tmp[7], r[8], tmp[8]);
	Adder1b add10(a[9], b[9], tmp[8], r[9], tmp[9]);
	Adder1b add11(a[10], b[10], tmp[9], r[10], tmp[10]);
	Adder1b add12(a[11], b[11], tmp[10], r[11], tmp[11]);
	Adder1b add13(a[12], b[12], tmp[11], r[12], tmp[12]);
	Adder1b add14(a[13], b[13], tmp[12], r[13], tmp[13]);
	Adder1b add15(a[14], b[14], tmp[13], r[14], tmp[14]);
	Adder1b add16(a[15], b[15], tmp[14], r[15], co);

endmodule
