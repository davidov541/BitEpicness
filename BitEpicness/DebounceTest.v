`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:24:33 01/25/2011
// Design Name:   Debouncer
// Module Name:   D:/Code/Verilog/BitEpicness/DebounceTest.v
// Project Name:  BitEpicness
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Debouncer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DebounceTest;

	// Inputs
	reg clock;
	reg reset;
	reg dataIn;

	// Outputs
	wire dataOut;

	// Instantiate the Unit Under Test (UUT)
	Debouncer uut (
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
		#20 reset = 0;
		// Wait 100 ns for global reset to finish
		#100;
		
		#20 dataIn = 1;
		#30 dataIn = 0;
		#40 dataIn = 1;
		#30 dataIn = 0;
		#60 dataIn = 1;
		#200 dataIn = 0;
		#20 dataIn = 1;
      #40 dataIn = 0;
		#100 $finish;
		// Add stimulus here

	end
	
	always #5 clock = ~clock;
      
endmodule

