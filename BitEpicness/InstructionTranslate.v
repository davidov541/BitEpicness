// InstructionTranslate.v
//
// Splits the 16 bit code into opcode, function code, registers, and immediates

module InstructionTranslate(input[15:0] Instruction, output[4:0] OpCode, output[2:0] FuncCode, output[3:0] ReadReg1, 
									output[3:0] ReadReg2, output[3:0] ReadReg3, output[6:0] Imm, output[31:0] JTarget);

	assign OpCode = Instruction[15:11];
	assign FuncCode = Instruction[2:0];
	assign ReadReg1 = (Instruction[15] == 1) ? Instruction[11:8] : Instruction[10:7];
	assign ReadReg2 = (Instruction[15] == 1) ? Instruction[7:4] : Instruction[6:3];
	assign ReadReg3 = Instruction[3:0];
	assign Imm = Instruction[6:0];
	assign JTarget = {21'b0, Instruction[10:0]};

endmodule
