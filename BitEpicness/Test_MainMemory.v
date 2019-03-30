`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:08:24 05/20/2010
// Design Name:   MainMemory
// Module Name:   C:/Users/mcginnda.ROSE-HULMAN/Desktop/BitEpicness/Test_MainMemory.v
// Project Name:  BitEpicness
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MainMemory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test_MainMemory;

	// Inputs
	reg clk;
	reg WriteEnable;
	reg [12:0] Address;
	reg [15:0] Data;

	// Outputs
	wire [15:0] OutData;

	// Instantiate the Unit Under Test (UUT)
	MainMemory uut (
		.clk(clk), 
		.WriteEnable(WriteEnable), 
		.Address(Address), 
		.Data(Data), 
		.OutData(OutData)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		WriteEnable = 0;
		Address = 0;
		Data = 0;

		// Wait 100 ns for global reset to finish
		#10;
		
		WriteEnable = 1;
		Data = 16'd563;
		
		#10;
		
		WriteEnable = 0;
		
		
		#10;
		
		WriteEnable = 1;
		Address = 13'd1;
		Data = 16'd200;
		
		#10;
		
		WriteEnable = 0;
		
		#10;
		
		Address = 13'd0;
		
		#20 $stop;

	end
	
	always #5 clk = ~clk;
      
endmodule

