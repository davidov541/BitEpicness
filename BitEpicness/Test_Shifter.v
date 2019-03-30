`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:11:20 05/14/2010
// Design Name:   Shifter
// Module Name:   D:/Code/Verilog/BitEpicness/Test_Shifter.v
// Project Name:  BitEpicness
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Shifter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test_Shifter;

	// Inputs
	reg [15:0] a;
	reg [4:0] shiftAmt;
	reg clk;

	// Outputs
	wire [15:0] r;
	
	// Instantiate the Unit Under Test (UUT)
	Shifter uut (
		.a(a), 
		.shiftAmt(shiftAmt), 
		.r(r),
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		shiftAmt = 0;
		clk = 0;

		#10;
        
		a = 16'd128;
		
		#10;
		
		shiftAmt = 1;
		
		#10;
		
		a = 16'd100;
		shiftAmt = 4;
	
		#10;
		
		a = 16'd10000;
		shiftAmt = 3;
		
		#10;
		
		shiftAmt = -1;
		
		#10;
		
		shiftAmt = 5'b11110;
		
		#10 $stop;
	end
	
	always #5 clk = ~clk;
      
endmodule

