// BitEpicness.v
//
// Top module for the processor
// 
module BitEpicness(input clk, input Reset, input [31:0] INPUT_interupt, inout [31:0] INOUT_PortData, output OUTPUT_WritePort,
		output OUTPUT_ReadPort, output [4:0] OUTPUT_PortAddress, output [31:0] iAddress, input [15:0] iDataOut, 
		output [31:0] dAddress, output [31:0] dDataIn, output dWrite, output d32bit, input [31:0] dDataOut, 
		output [31:0] baseAddress, input externalStall);
		
		// WB Wires
		wire[31:0] regwritedata, coprocessorData;

		// MEM-WB Registers
		reg[31:0] WB_Data; 
		reg[3:0] WB_RegTarget;
		reg[4:0] WB_WB;

		// MEM-WB Wires
		wire[31:0] wbmemout, wbdata;
		
		// EX-MEM Registers
		reg[15:0] MEM_Instruction;
		reg[31:0] MEM_EXOut;
		reg[31:0] MEM_RegA;
		reg[31:0] MEM_RegC;
		reg[3:0] MEM_RegTarget;
		reg[8:0] MEM_MEM; 
		reg[4:0] MEM_WB;
		reg[31:0] MEM_PC;
		reg MEM_ALUOverflow;
		
		// EX-MEM Wires
		wire[31:0] alusrca, alusrcb, out, aluout, seimm;
		wire over;
		wire interuptOccurs;
		wire [31:0] interuptMask;
		wire interuptEnable, interuptDisable;
		wire [4:0] interuptNumber;
		
		// REG-EX Registers
		reg[11:0] EX_EX;
		reg[8:0] EX_MEM;
		reg[4:0] EX_WB;
		reg[31:0] EX_RegA;
		reg[31:0] EX_RegB;
		reg[31:0] EX_RegC;
		reg[6:0] EX_Imm;
		reg[31:0] EX_JTarget; 
		reg[3:0] EX_RegTarget;
		reg[15:0] EX_Instruction;
		reg[31:0] EX_PC;
		
		// REG-EX Wires
		wire[31:0] rega, forwardedrega, regb, forwardedregb, regc, forwardedregc;
		wire[3:0] regwriteaddr;
		
		//TRANS-REG Registers
		reg REG_REG;
		reg[11:0] REG_EX;
		reg[8:0] REG_MEM;
		reg[4:0] REG_WB;
		reg[3:0] REG_RegAddrA; 
		reg[3:0] REG_RegAddrB;
		reg[3:0] REG_RegAddrC;
		reg[6:0] REG_Imm;
		reg[31:0] REG_JTarget;
		reg[15:0] REG_Instruction;
		reg[31:0] REG_PC;
		
		// TRANS_REG Wires
		wire[4:0] opcode;
		wire[2:0] funccode;
		wire[3:0] regaddra, regaddrb, regaddrc;
		wire[6:0] regimm;
		wire[31:0] regjtarget;
		wire stall;
		wire [1:0] _reg;
		wire[11:0] ex;
		wire[8:0] mem;
		wire[4:0] wb;
		wire [15:0] Instruction;
		
		// ProgramCounter Registers
		reg[31:0] PC;
		
		// ProgramCounter Wires
		wire[31:0] pc;
		wire regmask, exmask, memmask;
		wire wbmask;
		wire interupt;
		
		// Instruction Fetch Phase
		assign Instruction = iDataOut;
		assign iAddress = PC;
		
			// Program Counter
		PCControl pcc(PC, REG_REG, REG_JTarget, EX_EX[6], EX_RegA, MEM_MEM[6], MEM_MEM[5:4], MEM_EXOut, MEM_ALUOverflow, MEM_RegC, interupt,
			pc, regmask, exmask, memmask, wbmask, stall);
		
			// Translate the instruction into control lines and other data.
		InstructionTranslate it(Instruction, opcode, funccode, regaddra, regaddrb, regaddrc, regimm, regjtarget);
		Control ctrl(opcode, funccode, clk, Reset, _reg, ex, mem, wb, regmask);
			
			// Stall the processor if needed
		StallDetector s0(.clock(clk),.reset(Reset),.opcode(opcode),.regA(regaddra),.regB(regaddrb),.regC(regaddrc),.stall(stall), .externalStall(externalStall),
				.regmask(regmask));

		// Register Phase
		RegisterFile rf(REG_RegAddrA, REG_RegAddrB, REG_RegAddrC, WB_RegTarget, regwritedata, WB_WB[0], clk, Reset, rega, regb, regc);
				
		assign regwriteaddr = (REG_WB[2:1] == 2'b00) ? REG_RegAddrA			// Determine what register to write back to
									: (REG_WB[2:1] == 2'b01) ? 4'b1110				// If necessary write to $rr register
									: (REG_WB[2:1] == 2'b10) ? 4'b1111				// If jal or jalr write to $ra register
									: 4'bxxxx;
		
		assign forwardedrega = (REG_RegAddrA == 4'b0000) ? 32'b0					// Forward data for register A
				: (EX_WB[0] == 1 && EX_RegTarget == REG_RegAddrA) ? out
				: (MEM_WB[0] == 1 && MEM_RegTarget == REG_RegAddrA) ? wbdata
				: (WB_WB[0] == 1 && WB_RegTarget == REG_RegAddrA) ? regwritedata
				: rega;
					
		assign forwardedregb = (REG_RegAddrB == 4'b0000) ? 32'b0					// Forward data for register B
				: (EX_WB[0] == 1 && EX_RegTarget == REG_RegAddrB) ? out
				: (MEM_WB[0] == 1 && MEM_RegTarget == REG_RegAddrB) ? wbdata
				: (WB_WB[0] == 1 && WB_RegTarget == REG_RegAddrB) ? regwritedata
				: regb;
				
		assign forwardedregc = (REG_RegAddrC == 4'b0000) ? 32'b0					// Forward data for register C
				: (EX_WB[0] == 1 && EX_RegTarget == REG_RegAddrC) ? out
				: (MEM_WB[0] == 1 && MEM_RegTarget == REG_RegAddrC) ? wbdata
				: (WB_WB[0] == 1 && WB_RegTarget == REG_RegAddrC) ? regwritedata
				: regc;

		// Execution Phase
		assign alusrca = (EX_EX[0] == 0) ? EX_RegA : EX_RegB;		// Select first ALU input
		SignExtend7 se7(EX_Imm, seimm);									// Sign extend 7-bit immediate to 32-bit
		assign alusrcb = (EX_EX[2:1] == 2'b00) ? EX_RegC 			// Select second ALU input
							: (EX_EX[2:1] == 2'b01) ? seimm 
							: (EX_EX[2:1] == 2'b10) ? EX_RegB
							: (EX_EX[2:1] == 2'b11) ? 32'b0
							: 32'bx;
		ALU alu(alusrca, alusrcb, EX_EX[5:3], clk, aluout, over);
		assign out = aluout;

		// Memory Phase

		assign dWrite = MEM_MEM[3];
		assign dAddress = MEM_EXOut;
		assign dDataIn = MEM_RegA;
		assign d32bit = MEM_MEM[8];
		assign wbmemout = dDataOut;
		
		wire [31:0] imm16;
		assign imm16 = (MEM_MEM[7]) ? {{16{EX_Instruction[15]}}, EX_Instruction}
							: {16'b0, EX_Instruction};					// Sign extend (if necessary) the 16 bit immediate to 32 bit

		assign wbdata =  (MEM_MEM[2:0] == 3'b000) ? MEM_EXOut 
							: (MEM_MEM[2:0] == 3'b001) ? wbmemout
							: (MEM_MEM[2:0] == 3'b010) ? imm16
							: (MEM_MEM[2:0] == 3'b011) ? MEM_PC + 1
							: (MEM_MEM[2:0] == 3'b101) ? MEM_RegA
							: (MEM_MEM[2:0] == 3'b110) ? coprocessorData
							: 32'bxxxxxxxxxxxxxxxx;
		
		Coprocessor c0(.clock(clk), .reset(Reset), .regData(MEM_RegA), .syscallCode(MEM_Instruction[6:0]), .currentAddress(MEM_PC), .dataOut(coprocessorData),
			.interuptIn(interuptOccurs), .interuptOut(interupt),.enable((MEM_MEM[2:0] == 3'b110)),.interuptAddress(interuptNumber),
			.portData(INOUT_PortData), .portAddress(OUTPUT_PortAddress), .readPort(OUTPUT_ReadPort), .writePort(OUTPUT_WritePort),
			.interuptEnable(interuptEnable), .interuptDisable(interuptDisable), .interuptMask(interuptMask), .baseRegister(baseAddress));

		InteruptHandler i0(.clock(clk),.reset(Reset),.interuptsIn(INPUT_interupt),.enableInterupts(interuptEnable),.disableInterupts(interuptDisable),
			.interuptMask(interuptMask), .interuptOut(interuptOccurs),.interuptNumber(interuptNumber));
		
		// Writeback Phase									
		assign regwritedata = WB_Data;

		always@(posedge clk or posedge Reset)
			if (Reset == 1)								// Reset all registers back to 0
			begin
				WB_Data <= 32'b0000000000000000; 
				WB_RegTarget <= 4'b0000;
				WB_WB <= 5'b00000;
				
				MEM_Instruction <= 16'b0000000000000000;
				MEM_EXOut <= 32'b0000000000000000;
				MEM_ALUOverflow <= 1'b0;
				MEM_RegA <= 32'b0000000000000000;
				MEM_RegC <= 32'b0000000000000000;
				MEM_RegTarget <= 4'b0000;
				MEM_MEM <= 9'b0000000; 
				MEM_WB <= 5'b00000;
				MEM_PC <= 32'b0000000000000;
				
				REG_REG <= 1'b0;
				REG_EX <= 12'b000000000000;
				REG_MEM <= 9'b0000000;
				REG_WB <= 5'b00000;
				REG_RegAddrA <= 4'b0000;
				REG_RegAddrB <= 4'b0000;
				REG_RegAddrC <= 4'b0000;
				REG_Imm <= 7'b0000000;
				REG_JTarget <= 32'b000000000;
				REG_PC <= 32'b0000000000000;
				REG_Instruction <= 16'b0000000000000000;
				
				EX_EX <= 12'b000000000000;
				EX_MEM <= 9'b0000000;
				EX_WB <= 5'b00000;
				EX_RegTarget <= 4'b0000;
				EX_RegA <= 32'b0000000000000000;
				EX_RegB <= 32'b0000000000000000;
				EX_RegC <= 32'b0000000000000000;
				EX_Imm <= 7'b0000000;
				EX_JTarget <= 32'b000000000;
				EX_Instruction <= 16'b0000000000000000;
				EX_PC <= 32'b0000000000000;
				
				PC <= 32'b0000000000000;
			end
			else
			begin				
				WB_Data <= wbdata;
				
				WB_WB <= (wbmask == 1'b0) ? MEM_WB : 5'b00000;
				
				WB_RegTarget <= MEM_RegTarget;
			    
				if (memmask === 1'b0)
				begin
					MEM_MEM <= EX_MEM;
					MEM_WB <= EX_WB;
				end
				else
				begin								// Clear out control registers
					MEM_MEM <= 9'b0000000;
					MEM_WB <= 5'b00000;
				end
				MEM_Instruction <= EX_Instruction;
				MEM_RegTarget <= EX_RegTarget; 
				MEM_RegA <= EX_RegA;
				MEM_RegC <= EX_RegC;
				MEM_EXOut <= out;
				MEM_PC <= (memmask) ? MEM_PC : EX_PC;
				MEM_ALUOverflow <= over;
			
				EX_RegA <= forwardedrega;
				EX_RegB <= forwardedregb;
				EX_RegC <= forwardedregc;
				if (exmask === 1'b0)
				begin
					EX_EX <= REG_EX;
					EX_MEM <= REG_MEM;
					EX_WB <= REG_WB;
				end
				else
				begin							// Clear out control registers
					EX_EX <= 12'b000000000000;
					EX_MEM <= 9'b0000000;
					EX_WB <= 5'b00000;
				end
				EX_RegTarget <= regwriteaddr;
				EX_Imm <= REG_Imm;
				EX_JTarget <= REG_JTarget;
				EX_Instruction <= REG_Instruction;
				EX_PC <= (memmask) ? MEM_PC : (exmask) ? EX_PC : REG_PC;
				
				REG_REG <= _reg[0] & ~regmask;
				if (regmask === 1'b0)
				begin
					REG_EX <= ex;
					REG_MEM <= mem;
					REG_WB <= wb;
				end
				else
				begin						
					REG_EX <= 12'b000000000000;
					REG_MEM <= 9'b0000000;
					REG_WB <= 5'b00000;
				end
				REG_RegAddrA <= regaddra;
				REG_RegAddrB <= regaddrb;
				REG_RegAddrC <= regaddrc;
				REG_Imm <= regimm;
				REG_JTarget <= regjtarget;
				REG_Instruction <= Instruction;
				//REG_PC <= (_reg[1] || regmask) ? REG_PC : (exmask) ? EX_PC : (memmask) ? MEM_PC : PC;
				REG_PC <= (memmask) ? MEM_PC : (exmask) ? EX_PC : (_reg[1] || regmask) ? REG_PC : PC;
				
				PC <= pc;
				
			end

endmodule
