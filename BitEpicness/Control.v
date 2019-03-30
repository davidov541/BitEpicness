// Control.v
// 
// Sets the control bits for each stage in the pipeline

module Control(input[4:0] OpCode, input[2:0] FuncCode, input clk, input Reset, output [1:0] REG, output[11:0] EX, output[8:0] MEM, output[4:0] WB, input regmask);

	reg lastLDI;

	parameter J = 5'b00000, JAL = 5'b00001, JR = 5'b00010, LDI = 5'b00101, NEG = 5'b00110, MOVE = 5'b00100,
					NOT = 5'b00111, ADDI = 5'b01100,
					ORI = 5'b01101, ALU = 5'b01110, BGT = 4'b1000, BLT = 4'b1001, BEQ = 4'b1010, BNE = 4'b1011,
					LWN = 4'b1110, SWN = 4'b1111, SLL = 5'b01111, SYSCALL = 5'b01000,
					JALR = 5'b00011, LDL = 5'b01001, SDW = 4'b1101, LDW = 4'b1100;

	parameter ALU_OR = 3'b010, ALU_AND = 3'b001, ALU_ADD = 3'b000, ALU_SHIFT = 3'b011, ALU_NEG = 3'b100, ALU_NOT = 3'b101, ALU_SUB = 3'b110, ALU_COMP = 3'b111;
	
	//IsJOrJAL
	assign REG[0] = ((OpCode == J || OpCode == JAL) && lastLDI == 1'b0);
	
	//Is2ndPartOfLDI
	assign REG[1] = lastLDI;

	//ALUSrcA
	assign EX[0] = (OpCode[4:1] == LWN || OpCode[4:1] == LDW || OpCode[4:1] == SWN || OpCode[4:1] == SDW || OpCode == NOT || OpCode == NEG || OpCode == MOVE) ? 1
						: (OpCode[4:1] == BGT || OpCode[4:1] == BLT || OpCode[4:1] == BEQ || OpCode[4:1] == BNE || 
						OpCode == ADDI || OpCode == ORI || OpCode == ALU || OpCode == SLL) ? 0 : 1'b0;
	
	//ALUSrcB
	assign EX[2:1] = (OpCode == ADDI || OpCode == ORI || OpCode == SLL) ? 2'b01
						: (OpCode[4:1] == LWN || OpCode[4:1] == LDW || OpCode[4:1] == SWN || OpCode[4:1] == SDW) ? 2'b00 : 
						(OpCode == NOT || OpCode == NEG || OpCode == ALU || 
						OpCode[4:1] == BGT || OpCode[4:1] == BLT || OpCode[4:1] == BEQ || OpCode[4:1] == BNE) ? 2'b10 : 
						(OpCode == MOVE) ? 2'b11 : 2'b00;
	
	//ALU Op
	assign EX[5:3] = (OpCode == ALU) ? FuncCode
							: (OpCode == MOVE || OpCode == ORI) ? ALU_OR
							: (OpCode == NEG) ? ALU_NEG
							: (OpCode == NOT) ? ALU_NOT
							: (OpCode == ADDI || OpCode[4:1] == LWN || OpCode[4:1] == LDW || OpCode[4:1] == SWN || OpCode[4:1] == SDW) ? ALU_ADD
							: (OpCode == SLL) ? ALU_SHIFT
							: (OpCode[4:1] == BGT || OpCode[4:1] == BLT || OpCode[4:1] == BEQ || OpCode[4:1] == BNE) ? ALU_COMP
							: 3'b000;
							
	//IsJR
	assign EX[6] = ((OpCode == JR || OpCode == JALR) && lastLDI == 1'b0);
	
	
	//ResultSrc
	assign MEM[2:0] = (OpCode == NEG || OpCode == NOT || OpCode == ADDI || OpCode == ORI || OpCode == ALU || OpCode == MOVE || OpCode == SLL) ? 3'b000
						: (OpCode[4:1] == LWN || OpCode[4:1] == LDW ) ? 3'b001 
						: (OpCode == LDI || OpCode == LDL) ? 3'b010
						: (OpCode == JAL || OpCode == JALR) ? 3'b011 
						: (OpCode == SYSCALL) ? 3'b110
						: 3'b000;
						
	//MemWrite
	assign MEM[3] = ((OpCode[4:1] == SWN || OpCode[4:1] == SDW) && lastLDI == 0) ? 1 : 0;
	
	//Branch Type
	assign MEM[5:4] = (OpCode[4:1] == BEQ) ? 2'b00
							: (OpCode[4:1] == BNE) ? 2'b01
							: (OpCode[4:1] == BGT) ? 2'b10
							: (OpCode[4:1] == BLT) ? 2'b11
							: 2'bxx;
							
	//IsBranch
	assign MEM[6] = (OpCode[4:1] == BEQ || OpCode[4:1] == BNE || OpCode[4:1] == BGT || OpCode[4:1] == BLT);
	
	// Sign extend 16 bit immediate
	assign MEM[7] = (OpCode == LDI);
	
	// Write or read 32 bit value
	assign MEM[8] = (OpCode[4:1] == SDW || OpCode[4:1] == LDW);
	
	//RegWrite
	assign WB[0] = ((OpCode == JAL || OpCode == JALR || OpCode == LDI || OpCode == LDL || OpCode == NEG || OpCode == NEG || OpCode == NOT || OpCode == SLL || (OpCode == SYSCALL && FuncCode[0])
						|| OpCode == ADDI || OpCode == ORI || OpCode == ALU || OpCode[4:1] == LWN || OpCode[4:1] == LDW || OpCode == MOVE) && lastLDI == 0) ? 1 : 0;
	
	//RegWriteTarget
	assign WB[2:1] = (OpCode == LDI || OpCode == LDL || OpCode == NEG || OpCode == NOT
						|| OpCode[4:1] == LWN || OpCode[4:1] == LDW || OpCode == MOVE || OpCode == SYSCALL) ? 2'b00
							: (OpCode == ALU || OpCode == ADDI || OpCode == ORI || OpCode == SLL) ? 2'b01 
							: (OpCode == JAL || OpCode == JALR) ? 2'b10
							: 2'bxx;
						
	//DisplayRegisterWrite
	assign WB[3] = 0;
	
	//Excess
	assign EX[11:7] = 5'bxxxxx;
	assign WB[4] = 1'bx;
	
	always@(posedge clk or posedge Reset)
		if (Reset == 1)
			lastLDI <= 0;
		else if ((OpCode == LDI || OpCode == LDL) && lastLDI == 1'b0 && regmask == 1'b0)
			lastLDI <= 1;
		else
			lastLDI <= 0;

endmodule
