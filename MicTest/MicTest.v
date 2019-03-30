`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:01:59 02/01/2011 
// Design Name: 
// Module Name:    MicTest 
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
module MicTest(input clock, input reset, output speakerOut, input micData, output micClock, output micCS);

	 parameter sampleRate = 1249;
	 
	 wire [11:0] data;
	 wire start, done, delayDone, saveData;
	 
	 reg [1:0] state, nextState;
	 reg [15:0] delay;
	 reg [11:0] soundOut;
	 
	 assign delayDone = (delay == 16'b0);
	 assign start = (state == 2'b00);
	 assign saveData = (state == 2'b10);
	 
	 always @(posedge clock, posedge reset)
	 if (reset)
		begin
			state <= 2'b00;
			delay <= 16'b0000000000000000;
			soundOut <= 12'b000000000000;
		end
	 else
		begin
			state <= nextState;
			delay <= (start) ? sampleRate : (delayDone) ? 16'b0 : delay-1;
			soundOut <= (saveData) ? data : soundOut;
		end
		
	always @(*)
	case (state)
	2'b00: nextState = 2'b01;
	2'b01: nextState = (done) ? 2'b10 : 2'b01;
	2'b10: nextState = 2'b11;
	2'b11: nextState = (delayDone) ? 2'b00 : 2'b11;
	default: nextState = 2'b00;
	endcase
	
	PmodMICRefComp	u0(.CLK(clock), .RST(reset), .SDATA(micData), .SCLK(micClock), .nCS(micCS), .DATA(data), .START(start), .DONE(done));
	PWM u1(.clock(clock), .reset(reset), .dataIn(soundOut), .dataOut(speakerOut));

endmodule
