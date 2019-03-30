// Verilog test fixture created from schematic C:\Users\mcginnda.ROSE-HULMAN\Desktop\BitEpicness\BitEpicnessSch.sch - Sat Nov 27 17:12:59 2010

`timescale 1ns / 1ps

module Test_BitEpicnessSch;

// Inputs
   reg clk;
   reg reset;

// Output
   wire REG;
   wire REG_Mask;
   wire EX_Mask;
   wire MEM_Mask;
   wire [11:0] EX;
   wire [6:0] MEM;
   wire [4:0] WB;
   wire [6:0] Imm;
   wire [10:0] JTarget;
   wire [15:0] OutReg1;
   wire [15:0] OutReg2;
   wire [15:0] OutReg3;
	wire [15:0] REG_Instruction;

// Bidirs

// Instantiate the UUT
   BitEpicnessSch UUT (
		.clk(clk), 
		.reset(reset), 
		.REG(REG), 
		.REG_Mask(REG_Mask), 
		.EX_Mask(EX_Mask), 
		.MEM_Mask(MEM_Mask), 
		.EX(EX), 
		.MEM(MEM), 
		.WB(WB), 
		.Imm(Imm), 
		.JTarget(JTarget), 
		.OutReg1(OutReg1), 
		.OutReg2(OutReg2), 
		.OutReg3(OutReg3),
		.REG_Instruction(REG_Instruction)
   );
// Initialize Inputs
      initial begin
		clk = 0;
		reset = 1;
		
		#10;
		
		reset = 0;
		
		#100;
		end
	
	always #5 clk = ~clk;
endmodule
