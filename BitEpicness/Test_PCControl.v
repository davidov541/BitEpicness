`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:18:40 06/01/2010
// Design Name:   PCControl
// Module Name:   C:/Users/mcginnda.ROSE-HULMAN/Desktop/BitEpicness/Test_PCControl.v
// Project Name:  BitEpicness
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PCControl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test_PCControl;

	// Inputs
	reg[12:0] Old_PC;
	reg Jump;
	reg [12:0] JumpTarget;
	reg JumpRegister;
	reg [12:0] JumpRegisterTarget;
	reg Branch;
	reg [1:0] BranchType;
	reg [15:0] ALUOutput;
	reg ALUOverflow;
	reg [12:0] BranchTarget;

	// Outputs
	wire [12:0] pc;
	wire REG_Mask;
	wire EX_Mask;
	wire MEM_Mask;

	// Instantiate the Unit Under Test (UUT)
	PCControl uut (
		.Old_PC(Old_PC),
		.Jump(Jump), 
		.JumpTarget(JumpTarget), 
		.JumpRegister(JumpRegister), 
		.JumpRegisterTarget(JumpRegisterTarget), 
		.Branch(Branch), 
		.BranchType(BranchType), 
		.ALUOutput(ALUOutput), 
		.ALUOverflow(ALUOverflow), 
		.BranchTarget(BranchTarget), 
		.pc(pc), 
		.REG_Mask(REG_Mask), 
		.EX_Mask(EX_Mask), 
		.MEM_Mask(MEM_Mask)
	);

	initial begin
		// Initialize Inputs
		Old_PC = 13'd17;
		Jump = 0;
		JumpTarget = 0;
		JumpRegister = 0;
		JumpRegisterTarget = 0;
		Branch = 0;
		BranchType = 0;
		ALUOutput = 0;
		ALUOverflow = 0;
		BranchTarget = 0;
		
		#10;
		
		Branch = 1'b1;
		BranchType = 2'b01;
		ALUOutput = 16'd0;
		ALUOverflow = 1'b1;
		BranchTarget = 16'd5;
		
		#20;

	end
      
endmodule

