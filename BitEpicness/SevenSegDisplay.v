// SevenSegDisplay.v
//
// Stores a value and displays it on the built-in 7 segment display

module SevenSegDisplay(input clock, input reset, inout [31:0] data, input read, input write, output interupt, input lowHigh, output [3:0] ledSync, output [7:0] ledOut);
	 
	reg [31:0] value;
	
	assign data = (read) ? value : 32'bZ;
	assign interupt = 1'b0;
	
	always @ (posedge clock, posedge reset)
	if (reset)
		value <= 32'b0;
	else
		value <= (write) ? data : value;
		
	LEDDriver u0 (.gclock(clock),.greset(reset),.dataIn((lowHigh == 1'b0) ? value[15:0] : value[31:16]),.LedOut(ledOut),.LedSync(ledSync));


endmodule
