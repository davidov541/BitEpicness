`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:50:07 06/02/2010 
// Design Name: 
// Module Name:    Comparator1b 
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
module Comparator1b(input A, input B, output LT, output Equal);

	assign Equal = (A == B);
	assign LT = (A == 1'b0 && B == 1'b1);

endmodule
