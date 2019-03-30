`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:31:07 02/26/2011
// Design Name:   SDCard
// Module Name:   G:/SDCardReader/SDcard_TB.v
// Project Name:  SDCardReader
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SDCard
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SDcard_TB;

	// Inputs
	reg clk50;
	reg reset;
	reg SDin;

	// Outputs
	wire SDclk;
	wire SDcs;
	wire SDout;
	wire [7:0] LEDout;
	wire [3:0] LEDsync;

	// Instantiate the Unit Under Test (UUT)
	SDCard uut (
		.clk50(clk50), 
		.reset(reset), 
		.SDclk(SDclk), 
		.SDcs(SDcs), 
		.SDout(SDout), 
		.SDin(SDin), 
		.LEDout(LEDout), 
		.LEDsync(LEDsync)
	);

	initial begin
		// Initialize Inputs
		clk50 = 0;
		reset = 1;
		SDin = 1;

		// Wait 100 ns for global reset to finish
		#1000 reset = 0;
		#10000 SDin = 0;
		#1000 SDin = 1;
		
		#3000 SDin = 0;
		#1000 SDin = 1;
		
		#3000 SDin = 0;
		#1000 SDin = 1;
		
		#3000 SDin = 0;
		#100 SDin = 1;
		#900 SDin = 0;
		#2000 SDin = 1;
		
		
		
      #1000000 $finish;
		// Add stimulus here

	end

	always #5 clk50 = ~clk50;
      
endmodule

