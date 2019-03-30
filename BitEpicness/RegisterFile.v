// RegisterFile.v
//
// Stores 16 32-bit values

module RegisterFile(input[3:0] Read1, input[3:0] Read2, input[3:0] Read3, input[3:0] WriteReg, input[31:0] Data, input WriteEnable,
							input clk, input Reset, output[31:0] Out1, output[31:0] Out2, output[31:0] Out3);

	reg[31:0] Reg2, Reg3, Reg4, Reg5, Reg6, Reg7, Reg8, Reg9, Reg10, Reg11, Reg12, Reg13, Reg14, Reg15, Reg16;
	
	assign Out1 = (Read1 == 4'b0000) ? 32'd0
						: (Read1 == 4'b0001) ? Reg2
						: (Read1 == 4'b0010) ? Reg3
						: (Read1 == 4'b0011) ? Reg4
						: (Read1 == 4'b0100) ? Reg5
						: (Read1 == 4'b0101) ? Reg6
						: (Read1 == 4'b0110) ? Reg7
						: (Read1 == 4'b0111) ? Reg8
						: (Read1 == 4'b1000) ? Reg9
						: (Read1 == 4'b1001) ? Reg10
						: (Read1 == 4'b1010) ? Reg11
						: (Read1 == 4'b1011) ? Reg12
						: (Read1 == 4'b1100) ? Reg13
						: (Read1 == 4'b1101) ? Reg14
						: (Read1 == 4'b1110) ? Reg15
						: (Read1 == 4'b1111) ? Reg16
						: 4'bxxxx;
	
	assign Out2 = (Read2 == 4'b0000) ? 32'd0
						: (Read2 == 4'b0001) ? Reg2
						: (Read2 == 4'b0010) ? Reg3
						: (Read2 == 4'b0011) ? Reg4
						: (Read2 == 4'b0100) ? Reg5
						: (Read2 == 4'b0101) ? Reg6
						: (Read2 == 4'b0110) ? Reg7
						: (Read2 == 4'b0111) ? Reg8
						: (Read2 == 4'b1000) ? Reg9
						: (Read2 == 4'b1001) ? Reg10
						: (Read2 == 4'b1010) ? Reg11
						: (Read2 == 4'b1011) ? Reg12
						: (Read2 == 4'b1100) ? Reg13
						: (Read2 == 4'b1101) ? Reg14
						: (Read2 == 4'b1110) ? Reg15
						: (Read2 == 4'b1111) ? Reg16
						: 4'bxxxx;	
						
	assign Out3 = (Read3 == 4'b0000) ? 32'd0
						: (Read3 == 4'b0001) ? Reg2
						: (Read3 == 4'b0010) ? Reg3
						: (Read3 == 4'b0011) ? Reg4
						: (Read3 == 4'b0100) ? Reg5
						: (Read3 == 4'b0101) ? Reg6
						: (Read3 == 4'b0110) ? Reg7
						: (Read3 == 4'b0111) ? Reg8
						: (Read3 == 4'b1000) ? Reg9
						: (Read3 == 4'b1001) ? Reg10
						: (Read3 == 4'b1010) ? Reg11
						: (Read3 == 4'b1011) ? Reg12
						: (Read3 == 4'b1100) ? Reg13
						: (Read3 == 4'b1101) ? Reg14
						: (Read3 == 4'b1110) ? Reg15
						: (Read3 == 4'b1111) ? Reg16
						: 4'bxxxx;
						
						
	always@(posedge clk or posedge Reset)
		if (Reset == 1)
		begin
			Reg2 = 32'b0;
			Reg3 = 32'b0;
			Reg4 = 32'b0;
			Reg5 = 32'b0;
			Reg6 = 32'b0;
			Reg7 = 32'b0;
			Reg8 = 32'b0;
			Reg9 = 32'b0;
			Reg10 = 32'b0;
			Reg11 = 32'b0;
			Reg12 = 32'b0;
			Reg13 = 32'b0;
			Reg14 = 32'b0;
			Reg15 = 32'b0;
			Reg16 = 32'b0;
		end
		else if (WriteEnable == 1)
			case (WriteReg)
			4'b0001:
				Reg2 = Data;
			4'b0010:
				Reg3 = Data;
			4'b0011:
				Reg4 = Data;
			4'b0100:
				Reg5 = Data;
			4'b0101:
				Reg6 = Data;
			4'b0110:
				Reg7 = Data;
			4'b0111:
				Reg8 = Data;
			4'b1000:
				Reg9 = Data;
			4'b1001:
				Reg10 = Data;
			4'b1010:
				Reg11 = Data;
			4'b1011:
				Reg12 = Data;
			4'b1100:
				Reg13 = Data;
			4'b1101:
				Reg14 = Data;
			4'b1110:
				Reg15 = Data;
			4'b1111:
				Reg16 = Data;
			default:
				Reg2 = Reg2;
			endcase

endmodule
