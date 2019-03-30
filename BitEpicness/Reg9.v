`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:56:48 11/27/2010 
// Design Name: 
// Module Name:    Reg9 
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
module Reg9(input[8:0] writeData, input writeReg, input clk, input reset, output reg[8:0] outData);

	always@(posedge clk or posedge reset)
	if (reset == 1'b1)
		outData = 16'd0;
	else if (writeReg == 1'b1)
		outData = writeData;
	else
		outData = outData;

endmodule
