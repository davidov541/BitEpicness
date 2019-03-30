// Pulser.v
//
// Takes a debounced input in dataIn and sends out a pulse one clock cycle long

module Pulser(input clock, input reset, input dataIn, output dataOut);


	reg [1:0] state;
	reg [1:0] nextState;
	
	always @(posedge clock, posedge reset)
	if (reset)
		state <= 2'b00;
	else
		state <= nextState;
		
	always @(state, dataIn)
	case (state)
		2'b00: nextState <= (dataIn) ? 2'b01 : 2'b00;
		2'b01: nextState <= 2'b10;
		2'b10: nextState <= (dataIn) ? 2'b10 : 2'b00;
		default: nextState <= 2'b00;
	endcase
	
	assign dataOut = (state == 2'b01);


endmodule
