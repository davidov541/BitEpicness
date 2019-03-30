`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:43:57 05/04/2011
// Design Name:   Touchscreen
// Module Name:   D:/Code/Verilog/Touchscreen/Touch_TB.v
// Project Name:  Touchscreen
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Touchscreen
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Touch_TB;

	// Inputs
	reg clk50;
	reg reset;
	reg sdata1;
	reg sdata2;
	reg dispY;

	// Outputs
	wire sclk;
	wire nCS;
	wire [7:0] LedOut;
	wire [3:0] LedSync;

	// Bidirs
	wire x1;
	wire x2;
	wire y1;
	wire y2;

	// Instantiate the Unit Under Test (UUT)
	Touchscreen uut (
		.clk50(clk50), 
		.reset(reset), 
		.x1(x1), 
		.x2(x2), 
		.y1(y1), 
		.y2(y2), 
		.sdata1(sdata1), 
		.sdata2(sdata2), 
		.sclk(sclk), 
		.nCS(nCS), 
		.LedOut(LedOut), 
		.LedSync(LedSync), 
		.dispY(dispY)
	);

	initial begin
		// Initialize Inputs
		clk50 = 0;
		reset = 1;
		sdata1 = 0;
		sdata2 = 0;
		dispY = 0;

		// Wait 100 ns for global reset to finish
		#10 reset = 0;
		
      #10000 $finish;  
		// Add stimulus here

	end
      
	always #1 clk50=~clk50;
endmodule

