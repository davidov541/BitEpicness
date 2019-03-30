// SwitchInput.v
//
// Reads the value off the switches. Also causes an interupt when button is pressed
module SwitchInput(input clock, input reset, inout [31:0] data, input read, input write, output interupt, input [7:0] switches, input button);
	
	wire debouncedButton;
	
	assign data = (read) ? {24'b00000000, switches} : 32'bZZZZZZZZZZZZZZZZ;
	
	Debouncer u0(.clock(clock), .reset(reset), .dataIn(button), .dataOut(debouncedButton));
	
	Pulser u1(.clock(clock), .reset(reset), .dataIn(debouncedButton), .dataOut(interupt));

endmodule
