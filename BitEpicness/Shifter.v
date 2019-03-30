// Shifter.v
//
// Outputs the value in a shifted left by shiftAmt.  If shiftAmt is negative,
// it shifts right by the amount negShiftAmt. The result is placed in r.

module Shifter(input[31:0] a, input[5:0] shiftAmt, input[5:0] negShiftAmt, output [31:0] r);

	assign r = (shiftAmt[5] == 1) ? a >> negShiftAmt : a << shiftAmt;

endmodule
