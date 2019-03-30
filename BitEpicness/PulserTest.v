`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:14:47 01/27/2011
// Design Name:   Pulser
// Module Name:   D:/Code/Verilog/BitEpicness/PulserTest.v
// Project Name:  BitEpicness
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Pulser
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PulserTest;

	// Inputs
	reg clock;
	reg reset;
	reg dataIn;

	// Outputs
	wire dataOut;

	// Instantiate the Unit Under Test (UUT)
	Pulser uut (
		.clock(clock), 
		.reset(reset), 
		.dataIn(dataIn), 
		.dataOut(dataOut)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		reset = 1;
		dataIn = 0;
		
		#30 reset = 0;

		// Wait 100 ns for global reset to finish
		#30 dataIn = 1;
		#50 dataIn = 0;
		#50 dataIn = 1;
		#100 dataIn = 0;
		#20 $finish;
		// Add stimulus here

	end
      
	always #5 clock = ~clock;
endmodule

