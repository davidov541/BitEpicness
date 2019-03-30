// Decoder32bit
// 
// Takes a 5 bit value and outputs high on the corresponding bit if enabled
module Decoder32bit(
    input [4:0] dataIn,
	 input enable,
    output [31:0] dataOut
    );

	assign dataOut = (enable == 1'b0) ? 32'b0
		: (dataIn == 5'b00000) ? 32'b00000000000000000000000000000001
		: (dataIn == 5'b00001) ? 32'b00000000000000000000000000000010
		: (dataIn == 5'b00010) ? 32'b00000000000000000000000000000100
		: (dataIn == 5'b00011) ? 32'b00000000000000000000000000001000
		: (dataIn == 5'b00100) ? 32'b00000000000000000000000000010000
		: (dataIn == 5'b00101) ? 32'b00000000000000000000000000100000
		: (dataIn == 5'b00110) ? 32'b00000000000000000000000001000000
		: (dataIn == 5'b00111) ? 32'b00000000000000000000000010000000
		: (dataIn == 5'b01000) ? 32'b00000000000000000000000100000000
		: (dataIn == 5'b01001) ? 32'b00000000000000000000001000000000
		: (dataIn == 5'b01010) ? 32'b00000000000000000000010000000000
		: (dataIn == 5'b01011) ? 32'b00000000000000000000100000000000
		: (dataIn == 5'b01100) ? 32'b00000000000000000001000000000000
		: (dataIn == 5'b01101) ? 32'b00000000000000000010000000000000
		: (dataIn == 5'b01110) ? 32'b00000000000000000100000000000000
		: (dataIn == 5'b01111) ? 32'b00000000000000001000000000000000
		: (dataIn == 5'b10000) ? 32'b00000000000000010000000000000000
		: (dataIn == 5'b10001) ? 32'b00000000000000100000000000000000
		: (dataIn == 5'b10010) ? 32'b00000000000001000000000000000000
		: (dataIn == 5'b10011) ? 32'b00000000000010000000000000000000
		: (dataIn == 5'b10100) ? 32'b00000000000100000000000000000000
		: (dataIn == 5'b10101) ? 32'b00000000001000000000000000000000
		: (dataIn == 5'b10110) ? 32'b00000000010000000000000000000000
		: (dataIn == 5'b10111) ? 32'b00000000100000000000000000000000
		: (dataIn == 5'b11000) ? 32'b00000001000000000000000000000000
		: (dataIn == 5'b11001) ? 32'b00000010000000000000000000000000
		: (dataIn == 5'b11010) ? 32'b00000100000000000000000000000000
		: (dataIn == 5'b11011) ? 32'b00001000000000000000000000000000
		: (dataIn == 5'b11100) ? 32'b00010000000000000000000000000000
		: (dataIn == 5'b11101) ? 32'b00100000000000000000000000000000
		: (dataIn == 5'b11110) ? 32'b01000000000000000000000000000000
		: (dataIn == 5'b11111) ? 32'b10000000000000000000000000000000 : 32'b0;

endmodule
