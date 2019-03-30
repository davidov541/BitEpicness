// ALU.v
//
// A 32 bit ALU. Implements the functions and, or, not, shift, negate, add, subtract, and compare

module ALU(input[31:0] a, input[31:0] b, input[2:0] ALUOp, input clk, output[31:0] r, output overflow);

	wire[31:0] adderr, shifterr, negb, differencer;
	wire addero, differenceo, lt, equal;
	//Adder16b adder(a, b, 1'b0, adderr, addero);
	Negator Neg(b, negb);
	//Adder16b difference(a, negb, 1'b0, differencer, differenceo);
	Shifter shifter(a, b[5:0], negb[5:0], shifterr);
	Comparator16b comp(a, b, lt, equal);
	
	parameter OR_OP = 3'b010, AND_OP = 3'b001, ADD_OP = 3'b000, SHIFT_OP = 3'b011, NEG_OP = 3'b100, NOT_OP = 3'b101, SUB_OP = 3'b110, COMP_OP = 3'b111;
	
	assign r = (ALUOp == OR_OP) ? a | b
					: (ALUOp == AND_OP) ? a & b
					: (ALUOp == ADD_OP) ? a + b
					: (ALUOp == NEG_OP) ? negb
					: (ALUOp == NOT_OP) ? ~b
					: (ALUOp == SUB_OP) ? a - b
					: (ALUOp == SHIFT_OP) ? shifterr
					: (ALUOp == COMP_OP) ? equal
					: 32'bxxxxxxxxxxxxxxxx;
	assign overflow = (ALUOp == OR_OP) ? 0
						: (ALUOp == AND_OP) ? 0
						: (ALUOp == ADD_OP) ? 0
						: (ALUOp == NEG_OP) ? 0
						: (ALUOp == NOT_OP) ? 0
						: (ALUOp == SUB_OP) ? 0
						: (ALUOp == SHIFT_OP) ? 0
						: (ALUOp == COMP_OP) ? lt
						: 32'bxxxxxxxxxxxxxxxx;			
	
endmodule
