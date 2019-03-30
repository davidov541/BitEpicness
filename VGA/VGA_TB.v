`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:00:41 03/03/2011
// Design Name:   VGA
// Module Name:   C:/Users/greenkt/Desktop/Flash Drive contents/VGA/VGA_TB.v
// Project Name:  VGA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: VGA
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module VGA_TB;

	// Inputs
	reg clk50;
	reg reset;

	// Outputs
	wire red;
	wire green;
	wire blue;
	wire vSync;
	wire hSync;

	// Instantiate the Unit Under Test (UUT)
	VGA uut (
		.clk50(clk50), 
		.reset(reset), 
		.red(red), 
		.green(green), 
		.blue(blue), 
		.vSync(vSync), 
		.hSync(hSync)
	);

	initial begin
		// Initialize Inputs
		clk50 = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#100 reset = 0;
		#100000000 $finish;
        
		// Add stimulus here

	end
	
	always #10 clk50 = ~clk50;
      
endmodule

