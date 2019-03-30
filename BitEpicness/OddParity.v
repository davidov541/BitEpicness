// OddParity
// 
// Deturmines the odd parity bit for the input x

module OddParity(
    input [7:0] x,
    output y
    );
	 
	 assign y = x[0] ^ x[1] ^ x[2] ^ x[3] ^ x[4] ^ x[5] ^ x[6] ^ x[7] ^ 1'b1;


endmodule
