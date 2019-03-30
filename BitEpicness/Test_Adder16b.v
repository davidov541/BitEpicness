`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:02:27 05/14/2010
// Design Name:   Adder16b
// Module Name:   D:/Code/Verilog/BitEpicness/Test_Adder16b.v
// Project Name:  BitEpicness
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Adder16b
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test_Adder16b;

	// Inputs
	reg [15:0] a;
	reg [15:0] b;
	reg ci;

	// Outputs
	wire [15:0] r;
	wire co;

	// Instantiate the Unit Under Test (UUT)
	Adder16b uut (
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
        
		a = 16'd50;
		b = 16'd100;
		
		#5;
		
		a = 16'd500;
		
		#5;
		
		b = 16'd0;
		
		#5;
		
		a = 16'd40000;
		
		#5;
		
		ci = 1;
		
		#5;
		
		a = 16'd0;
		
		#5;
		
		a = 16'd40000;
		b = 16'd40000;
		
		#5;
		
		a = 16'd2000;
		  
		#5 $stop;

	end
      
endmodule

