`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:00:13 05/20/2010
// Design Name:   BitEpicness
// Module Name:   D:/Code/Verilog/BitEpicness/Test_BitEpicness.v
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

module Test_BitEpicness;

	// Inputs
	reg clk;
	reg Reset;
	reg[7:0] SwitchInput;

	// Outputs
	wire [15:0] Instruction;
	wire[8:0] PC;
	wire[15:0] regwritedata;
	wire[3:0] WB_RegTarget;
	wire[11:0] EX_EX;
	wire REG_REG;
	wire[8:0] REG_JTarget;
	wire[15:0] EX_RegA;
	wire[6:0] MEM_MEM;
	wire[15:0] MEM_EXOut;
	wire MEM_ALUOverflow;
	wire[15:0] MEM_RegA;
	wire[15:0] MEM_RegC;
	wire [1:0] _reg;
	wire regmask;
	wire exmask;
	wire memmask;
	wire[4:0] WB_WB;
	wire interuptOccurs;
	
	// Instantiate the Unit Under Test (UUT)
	BitEpicness uut (
		.clk(clk), 
		.Reset(Reset),
		.SwitchInput(SwitchInput),
		.Instruction(Instruction),
		.PC(PC),
		.regwritedata(regwritedata), 
		.WB_RegTarget(WB_RegTarget),
		.EX_EX(EX_EX),
		.REG_REG(REG_REG),
		.REG_JTarget(REG_JTarget),
		.EX_RegA(EX_RegA),
		.MEM_MEM(MEM_MEM),
		.MEM_EXOut(MEM_EXOut),
		.MEM_ALUOverflow(MEM_ALUOverflow),
		.MEM_RegA(MEM_RegA),
		.MEM_RegC(MEM_RegC),
		._reg(_reg),
		.regmask(regmask),
		.exmask(exmask),
		.memmask(memmask),
		.WB_WB(WB_WB),
		.interuptOccurs(interuptOccurs)
	);

	initial begin
		// Initialize Inputs
		//Instruction = 0;
		clk = 0;
		SwitchInput = 8'b00000100;        
		Reset = 1;
		
		#10;
		
		Reset = 0;
		#650000 $stop;

	end
	
	always #5 clk = ~clk;
      
endmodule

