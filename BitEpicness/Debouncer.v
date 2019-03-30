// Debouncer.v
//
// Debounces the input dataIn

module Debouncer(input clock, input reset, input dataIn, output dataOut);

	parameter [25:0] maxCount = 5000;
	
	reg [1:0] state;
	reg [1:0] nextState;
	reg [25:0] delay;
	
	wire start, done;
	
	assign dataOut = (state == 2'b10);
	assign start = (state == 2'b00);
	assign done = (delay == 26'b0);
	
	always @ (posedge clock, posedge reset)
	if (reset)
		begin
			state <= 2'b00;
			delay <= 26'b0;
		end
	else
		begin
			state <= nextState;
			delay <= (start) ? maxCount : (done) ? 26'b0 : delay - 1;
		end
	
	always @ (state, dataIn, done)
	case (state)
		2'b00: nextState = (dataIn) ? 2'b01 : 2'b00;
		2'b01: nextState = (dataIn == 1'b0) ? 2'b00 : (done == 1'b1) ? 2'b10 : 2'b01;
		2'b10: nextState = (dataIn) ? 2'b10 : 2'b00;
		default: nextState = 2'b00;
	endcase


endmodule
