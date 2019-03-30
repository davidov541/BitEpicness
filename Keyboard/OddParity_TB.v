`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:05:56 04/30/2011
// Design Name:   OddParity
// Module Name:   C:/Users/greenkt/Desktop/Keyboard/Keyboard/OddParity_TB.v
// Project Name:  Keyboard
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: OddParity
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module OddParity_TB;

	// Inputs
	reg [7:0] x;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	OddParity uut (
		.x(x), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		x = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		x = 8'b00101111;
		#100;
		x = 8'b11111111;
		#100;
		x = 8'b00001000;
		#100 $finish;
        
		// Add stimulus here

	end
      
endmodule

