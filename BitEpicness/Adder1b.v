`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:50:10 05/14/2010 
// Design Name: 
// Module Name:    Adder1b 
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
module Adder1b(input a, input b, input ci, output r, output co);

	assign r = (a & ~b & ~ci) | (~a & b & ~ci) | (~a & ~b & ci) | (a & b & ci);
	assign co = (a & b) | (b & ci) | (a & ci) | (a & b & ci);

endmodule
