`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:31:13 02/01/2011 
// Design Name: 
// Module Name:    MicTest2 
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
module MicTest2(input clock, input reset, input micData, output micClock, output micCS, output headClock, output headData1, output headData2, output headSync);
	 
	 parameter sampleRate = 1249;
	 
	 wire [11:0] data;
	 wire start, done, delayDone, saveData, startOutput;
	 
	 reg [1:0] state, nextState;
	 reg [15:0] delay;
	 reg [11:0] soundOut;
	 
	 assign delayDone = (delay == 16'b0);
	 assign start = (state == 3'b000);
	 assign saveData = (state == 3'b010);
	 assign startOutput = (state == 3'b011);
	 
	 always @(posedge clock, posedge reset)
	 if (reset)
		begin
			state <= 3'b000;
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
	3'b000: nextState = 3'b001;
	3'b001: nextState = (done) ? 3'b010 : 3'b001;
	3'b010: nextState = 3'b011;
	3'b011: nextState = 3'b100;
	3'b100: nextState = (delayDone) ? 3'b000 : 3'b100;
	default: nextState = 3'b000;
	endcase
	
	PmodMICRefComp	u0(.CLK(clock), .RST(reset), .SDATA(micData), .SCLK(micClock), .nCS(micCS), .DATA(data), .START(start), .DONE(done));
	
	DA2RefComp u1(.CLK(clock), .RST(reset), .D1(headData1), .D2(headData2), .CLK_OUT(headClock), .nSYNC(headSync), .DATA1(soundOut), .DATA2(soundOut), .START(startOutput), .DONE());

	
endmodule