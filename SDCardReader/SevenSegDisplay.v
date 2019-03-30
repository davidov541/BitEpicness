`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:53:55 01/24/2011 
// Design Name: 
// Module Name:    SevenSegDisplay 
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
module SevenSegDisplay(input clock, input reset, inout [15:0] data, input read, input write, output interupt, output [3:0] ledSync, output [7:0] ledOut);
	 
	reg [15:0] value;
	
	assign data = (read) ? value : 16'bZZZZZZZZZZZZZZZZ;
	assign interupt = 1'b0;
	
	always @ (posedge clock, posedge reset)
	if (reset)
		value <= 16'b0;
	else
		value <= (write) ? data : value;
		
	LEDDriver u0 (.gclock(clock),.greset(reset),.dataIn(value),.LedOut(ledOut),.LedSync(ledSync));


endmodule
