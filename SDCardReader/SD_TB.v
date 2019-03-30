`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:51:22 02/21/2011
// Design Name:   SDCardReader
// Module Name:   D:/Code/Verilog/SDCardReader/SD_TB.v
// Project Name:  SDCardReader
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SDCardReader
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SD_TB;

	// Inputs
	reg clk50;
	reg reset;
	reg SDin;

	// Outputs
	wire SDclk;
	wire SDcs;
	wire SDout;
	wire done;

	// Instantiate the Unit Under Test (UUT)
	SDCardReader uut (
		.clk50(clk50), 
		.reset(reset), 
		.SDclk(SDclk), 
		.SDcs(SDcs), 
		.SDout(SDout), 
		.SDin(SDin), 
		.done(done)
	);

	initial begin
		// Initialize Inputs
		clk50 = 0;
		reset = 1;
		SDin = 1;

		// Wait 100 ns for global reset to finish
		#100 reset = 0;
		#200000 SDin = 0;
		#730 SDin = 1;
		#730 SDin = 0;
		#730 SDin = 1;
		#730 SDin = 0;
		#730 SDin = 1;
		#730 SDin = 0;
		#730 SDin = 1;
		
		
		#20000 $finish;
		
        
		// Add stimulus here

	end
	
	always #5 clk50 = ~clk50;
      
endmodule

