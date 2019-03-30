// SignExtend7.v
//
// Sign extends a 7 bit number into a 32 bit number

module SignExtend7(input[6:0] x, output[31:0] y);

	assign y = (x[6] == 1) ? {25'b1111111111111111111111111, x} : {25'b0, x};

endmodule
