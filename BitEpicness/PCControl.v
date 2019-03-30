`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:16:34 05/25/2010 
// Design Name: 
// Module Name:    PCControl 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module PCControl(input[31:0] Old_PC, input Jump, input[31:0] JumpTarget, input JumpRegister, input[31:0] JumpRegisterTarget, input Branch, input[1:0] BranchType,
						input[31:0] ALUOutput, input ALUOverflow, input[31:0] BranchTarget, input interupt, output[31:0] pc, output REG_Mask, output EX_Mask, output MEM_Mask, output WB_Mask, input stall);

	parameter interuptAddress = 9;
	
	wire willBranch;
	wire [31:0] stallAddress;
	
	assign willBranch = (Branch == 1'b1 && ((BranchType == 2'b00 && ALUOutput == 32'd1)		// branchtype 0 = beq
								|| (BranchType == 2'b01 && ALUOutput == 32'd0)							// branchtype 1 = ne
								|| (BranchType == 2'b10 && ALUOverflow == 1'b0 && ALUOutput == 32'd0)	// branchtype 2 =	gt
								|| (BranchType == 2'b11 && ALUOverflow == 1'b1 && ALUOutput == 32'd0)));	// branchtype 3 = lt

	assign pc = (interupt) ? interuptAddress
							: (stall) ? stallAddress
							: (willBranch == 1'b1) ? BranchTarget
							: (JumpRegister == 1'b1) ? JumpRegisterTarget
							: (Jump == 1'b1) ? JumpTarget
							: Old_PC + 1;

	assign stallAddress = (willBranch == 1'b1) ? BranchTarget
							: (JumpRegister == 1'b1) ? JumpRegisterTarget
							: (Jump == 1'b1) ? JumpTarget
							: Old_PC;
							
	assign REG_Mask = (Jump == 1'b1 || JumpRegister == 1'b1 || willBranch == 1'b1 || interupt == 1'b1 || stall == 1'b1);
	
	assign EX_Mask = (JumpRegister == 1'b1 || willBranch == 1'b1 || interupt == 1'b1);
	
	assign MEM_Mask = (willBranch == 1'b1 || interupt == 1'b1);
	
	assign WB_Mask = (interupt == 1'b1);
	

endmodule
