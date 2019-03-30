`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:15:48 11/27/2010 
// Design Name: 
// Module Name:    Reg13 
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
module Reg13(input[12:0] writeData, input writeReg, input clk, input reset, output reg[12:0] outData);

	always@(posedge clk or posedge reset)
	if (reset == 1'b1)
		outData = 16'd0;
	else if (writeReg == 1'b1)
		outData = writeData;
	else
		outData = outData;

endmodule
