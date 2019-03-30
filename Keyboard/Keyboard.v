`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:16:23 03/08/2011 
// Design Name: 
// Module Name:    Keyboard 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Keyboard(input clk50, input reset, input psdata, input psclk, output [7:0] LedOut, output [3:0] LedSync, output error);


	parameter LSHIFT = 8'h12;
	parameter RSHIFT = 8'h59;
	
	parameter MaxCount = 31;

	wire [7:0] value; 
	wire received;
	reg [4:0] clkCounter;
	reg slowClock;
	
	reg [2:0] state, nextState;
	reg [7:0] lastCode;
	reg shiftPressed;

	ReadPS2 u0(.slowClk(slowClock), .reset(reset), .PS2data(psdata), .PS2clk(psclk), .received(received), .value(value), .error(error));
	
	LEDDriver u2(.gclock(clk50), .greset(reset), .dataIn({8'b00000000, lastCode}), .LedOut(LedOut), .LedSync(LedSync));
	
	always @(posedge clk50, posedge reset)
	if (reset)
		begin
			clkCounter <= 6'b00000;
			slowClock <= 1'b0;
		end
	else
		begin
			clkCounter <= (clkCounter == MaxCount) ? 5'b0 : clkCounter + 1;
			slowClock <= (clkCounter == MaxCount) ? ~slowClock : slowClock;
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
