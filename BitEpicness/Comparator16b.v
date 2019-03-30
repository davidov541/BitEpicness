// Comparator16b.v
//
// Compares A and B. Outputs LT high if A < B, Equal high if A = B

module Comparator16b(input[31:0] A, input[31:0] B, output LT, output Equal);

	wire AltB;
	
	assign AltB = (A < B);
	
	assign Equal = (A == B);
	
	assign LT = (A[31] != B[31]) ? A[31] : AltB;

endmodule
