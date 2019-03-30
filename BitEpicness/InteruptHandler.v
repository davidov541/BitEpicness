// InterruptHandler.v
//
// Combines data from all interupts and stores in a buffer if interrupt
// is enabled. This buffer is constantly scanned for new interrupts and
// sends out a hardware interrupt if one is present

module InteruptHandler(
	input clock, input reset,
    input [31:0] interuptsIn,
	 input enableInterupts,
	 input disableInterupts,
	 input [31:0] interuptMask,
    output interuptOut,
    output [4:0] interuptNumber
    );
	 
	 reg [31:0] buffer, shifter;
	 
	 reg [3:0] interuptDelay;
	 reg enabled;
	 
	 
	 assign interuptOut = ((buffer & shifter) != 0) && enabled && ~reset;
	 
	 Encoder32bit u0(.dataIn(shifter), .dataOut(interuptNumber));
	 
	 always @(posedge clock, posedge reset)
		if (reset == 1'b1)
			begin
				buffer <= 32'b0;
				shifter <= 32'b1;
				interuptDelay <= 4'b0000;
				enabled <= 1'b0;
			end
		else
			begin
				buffer <= (enabled == 1'b1) ? (buffer | (interuptsIn & interuptMask)) & (~shifter) : (buffer | (interuptsIn & interuptMask));
				shifter <= (shifter[31] == 1) ? 32'b1 : shifter << 1;
				interuptDelay <= {enableInterupts, interuptDelay[3:1]};
				enabled <= (disableInterupts | interuptOut) ? 1'b0 : (interuptDelay[0]==1'b1) ? 1'b1 : enabled;
			end


endmodule
