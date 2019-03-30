`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:57:26 04/04/2011
// Design Name:   Main
// Module Name:   D:/Code/Verilog/BitEpicness/Main_TB.v
// Project Name:  BitEpicness
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Main_TB;

	// Inputs
	reg clk50;
	reg reset;
	reg [7:0] switches;
	reg switchButton;
	reg MT_WAIT;
	wire spiMISO;

	// Outputs
	wire [3:0] ledSync;
	wire [7:0] ledOut;
	wire [22:0] MT_ADDR;
	wire MT_OE;
	wire MT_WE;
	wire MT_ADV;
	wire MT_CLK;
	wire MT_UB;
	wire MT_LB;
	wire MT_CE;
	wire MT_CRE;
	wire [7:0] color;
	wire hSync;
	wire vSync;
	wire spiCLK;
	wire spiCS;
	wire spiMOSI;

	// Bidirs
	wire [15:0] MT_DATA;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.clk50(clk50), 
		.reset(reset), 
		.ledSync(ledSync), 
		.ledOut(ledOut), 
		.switches(switches), 
		.switchButton(switchButton), 
		.MT_ADDR(MT_ADDR), 
		.MT_DATA(MT_DATA), 
		.MT_OE(MT_OE), 
		.MT_WE(MT_WE), 
		.MT_ADV(MT_ADV), 
		.MT_CLK(MT_CLK), 
		.MT_UB(MT_UB), 
		.MT_LB(MT_LB), 
		.MT_CE(MT_CE), 
		.MT_CRE(MT_CRE), 
		.MT_WAIT(MT_WAIT), 
		.color(color), 
		.hSync(hSync), 
		.vSync(vSync), 
		.spiCLK(spiCLK), 
		.spiCS(spiCS), 
		.spiMOSI(spiMOSI), 
		.spiMISO(spiMISO)
	);

	sd_model u0(.SCLK(spiCLK),.MOSI(spiMOSI),.CS(spiCS),.MISO(spiMISO));
	
	initial begin
		// Initialize Inputs
		clk50 = 0;
		reset = 1;
		switches = 0;
		switchButton = 0;
		MT_WAIT = 0;

		// Wait 100 ns for global reset to finish
		#20 reset = 0;
      
		#1000 switchButton = 1;
		#1000 switchButton = 0;
		#1000 $finish;
		// Add stimulus here
	end
	
	always #1 clk50 = ~clk50;
      
endmodule

