`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:36:33 05/19/2010
// Design Name:   RegisterFile
// Module Name:   C:/Users/mcginnda.ROSE-HULMAN/Desktop/BitEpicness/Test_RegisterFile.v
// Project Name:  BitEpicness
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegisterFile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test_RegisterFile;

	// Inputs
	reg [3:0] Read1;
	reg [3:0] Read2;
	reg [3:0] Read3;
	reg [3:0] WriteReg;
	reg [15:0] Data;
	reg WriteEnable;
	reg clk;
	reg Reset;

	// Outputs
	wire [15:0] Out1;
	wire [15:0] Out2;
	wire [15:0] Out3;

	// Instantiate the Unit Under Test (UUT)
	RegisterFile uut (
		.Read1(Read1), 
		.Read2(Read2), 
		.Read3(Read3), 
		.WriteReg(WriteReg), 
		.Data(Data), 
		.WriteEnable(WriteEnable), 
		.clk(clk), 
		.Reset(Reset), 
		.Out1(Out1), 
		.Out2(Out2), 
		.Out3(Out3)
	);

	initial begin
		// Initialize Inputs
		Read1 = 0;
		Read2 = 0;
		Read3 = 0;
		WriteReg = 0;
		Data = 0;
		WriteEnable = 0;
		clk = 0;
		Reset = 0;

		#10;
        
		Reset = 1;
		
		#10;
		
		Read1 = 4'b0001;
		Read2 = 4'b0010;
		Read3 = 4'b0011;
		WriteReg = 4'b0001;
		WriteEnable = 1;
		Data = 16'd598;
		Reset = 0;
		
		#10;
		
		WriteReg = 4'b0010;
		Data = 16'd1056;
		
		#10;
		
		WriteReg = 4'b0011;
		Data = 16'd5;
		
		#10;
		
		Read1 = 4'b0000;
		WriteReg = 4'b0000;
		Data = 16'd500;
		
		#20 $stop;
		
	end
	
	always #5 clk = ~clk;
      
endmodule

