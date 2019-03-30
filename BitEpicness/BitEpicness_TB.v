`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:41:12 03/30/2011
// Design Name:   BitEpicness
// Module Name:   D:/Code/Verilog/BitEpicness/BitEpicness_TB.v
// Project Name:  BitEpicness
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BitEpicness
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BitEpicness_TB;

	// Inputs
	reg clk;
	reg Reset;
	reg [31:0] INPUT_interupt;
	reg [15:0] iDataOut;
	reg [15:0] dDataOut;
	reg externalStall;

	// Outputs
	wire OUTPUT_WritePort;
	wire OUTPUT_ReadPort;
	wire [4:0] OUTPUT_PortAddress;
	wire [15:0] iAddress;
	wire [15:0] dAddress;
	wire [15:0] dDataIn;
	wire dWrite;

	// Bidirs
	wire [15:0] INOUT_PortData;

	// Instantiate the Unit Under Test (UUT)
	BitEpicness uut (
		.clk(clk), 
		.Reset(Reset), 
		.INPUT_interupt(INPUT_interupt), 
		.INOUT_PortData(INOUT_PortData), 
		.OUTPUT_WritePort(OUTPUT_WritePort), 
		.OUTPUT_ReadPort(OUTPUT_ReadPort), 
		.OUTPUT_PortAddress(OUTPUT_PortAddress), 
		.iAddress(iAddress), 
		.iDataOut(iDataOut), 
		.dAddress(dAddress), 
		.dDataIn(dDataIn), 
		.dWrite(dWrite), 
		.dDataOut(dDataOut), 
		.externalStall(externalStall)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		Reset = 1;
		INPUT_interupt = 0;
		iDataOut = 0;
		dDataOut = 0;
		externalStall = 0;

		// Wait 100 ns for global reset to finish
		#10 reset = 0;
        
		// Add stimulus here

	end
   
	always #1 clk = ~clk;
	always #50 externalStall = ~externalStall;
endmodule

