`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:52:47 05/14/2010
// Design Name:   Adder1b
// Module Name:   D:/Code/Verilog/BitEpicness/Test_Adder1b.v
// Project Name:  BitEpicness
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Adder1b
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test_Adder1b;

	integer i;

	// Inputs
	reg a;
	reg b;
	reg ci;

	// Outputs
	wire r;
	wire co;

	// Instantiate the Unit Under Test (UUT)
	Adder1b uut (
		.a(a), 
		.b(b), 
		.ci(ci), 
		.r(r), 
		.co(co)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		ci = 0;

		// Wait 100 ns for global reset to finish
		#5;
      
		for(i = 0; i < 8; i = i + 1)
		begin
			{a, b, ci} = i[2:0];
			#5;
		end
		#5 $stop;

	end
      
endmodule

