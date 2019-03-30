`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:08:20 02/01/2011 
// Design Name: 
// Module Name:    PWM 
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
module PWM(input clock, input reset, input [11:0] dataIn, output dataOut);

	reg [7:0] PWMcounter;
	
	always @(posedge clock, posedge reset)
	if (reset)
		PWMcounter <= 8'b0;
	else
		PWMcounter <= PWMcounter + 1;
	
	assign dataOut = (dataIn[11:4] > PWMcounter);


endmodule
