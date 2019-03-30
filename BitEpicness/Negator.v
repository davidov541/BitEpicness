// Negator.v
//
// Negates the a input and outputs it to y

module Negator(input[31:0] a, output [31:0] y);

		assign y = (~a + 1);

endmodule
