// Keyboard.v
//
// Receives charactors from a PS/2 keyboard

module Keyboard(input clkCPU, input reset, inout [31:0] data, input read, input write, output interupt, input psdata, input psclk);


	parameter LSHIFT = 8'h12;
	parameter RSHIFT = 8'h59;
	
	parameter MaxCount = 2;

	wire [7:0] value; 
	wire received;
	wire error;
	
	wire [7:0] asciiCode;
	
	reg [4:0] clkCounter;
	reg slowClock;
	
	reg [2:0] state, nextState;
	reg [7:0] lastCode;
	reg shiftPressed;
	
	reg lastDone;
	
	assign data = (read) ? {24'b0, asciiCode} : 32'bZ;
	assign interupt = (state == 3'b111) & (lastDone == 1'b0);
	
	ScancodeDecoder u1 (
	.clka(clkCPU),
	.addra({shiftPressed, lastCode[6:0]}), 
	.douta(asciiCode));

	ReadPS2 u0(.slowClk(slowClock), .reset(reset), .PS2data(psdata), .PS2clk(psclk), .received(received), .value(value), .error(error));
	
	always @(posedge clkCPU, posedge reset)
	if (reset)
		begin
			clkCounter <= 6'b00000;
			slowClock <= 1'b0;
			lastDone <= 1'b0;
		end
	else
		begin
			clkCounter <= (clkCounter == MaxCount) ? 5'b0 : clkCounter + 1;
			slowClock <= (clkCounter == MaxCount) ? ~slowClock : slowClock;
			lastDone <= (state == 3'b111);
		end

	always @(posedge slowClock, posedge reset)
	if (reset)
		begin
			state <= 3'b000;
			shiftPressed <= 1'b0;
			lastCode <= 8'b00000000;
		end
	else
		begin
			state <= nextState;
			shiftPressed <= (state == 3'b010) ? 1'b1 : (state == 3'b101) ? 1'b0 : shiftPressed;
			lastCode <= (state == 3'b111) ? value : lastCode;
		end

	always @(*)
	case (state)
	3'b000: nextState = (received) ? 3'b001 : 3'b000;
	3'b001: nextState = ((value == LSHIFT) | (value == RSHIFT)) ? 3'b010 : (value == 8'hF0) ? 3'b100 : (value == 8'hE0) ? 3'b011 : 3'b111;
	3'b010: nextState = 3'b000;
	3'b011: nextState = (received == 1'b0) ? 3'b011 : (value == 8'hF0) ? 3'b110 : 3'b000;
	3'b100: nextState = (received == 1'b0) ? 3'b100 : ((value == RSHIFT) | (value == LSHIFT)) ? 3'b101 : 3'b000;
	3'b101: nextState = 3'b000;
	3'b110: nextState = (received) ? 3'b000 : 3'b110;
	3'b111: nextState = 3'b000;
	default: nextState = 3'b000;
	endcase
	
endmodule
