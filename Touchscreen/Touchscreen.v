`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:50:24 05/04/2011 
// Design Name: 
// Module Name:    Touchscreen 
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
module Touchscreen(input clk50, input reset, inout x1, inout x2, inout y1, inout y2, 
			input sdata1, input sdata2, output sclk, output nCS,
			output [7:0] LedOut, output [3:0] LedSync, input dispY);
	
	parameter maxDelay = 5000000;
	wire[11:0] data1, data2;
	wire start, done;
	wire readX, readY;
	wire saveX, saveY;
	wire resetDelay;
	

	reg [2:0] state, nextState;
	
	reg[11:0] x, y;
	reg[31:0] delayCount;
	
	
	AD1RefComp u0 (.CLK(clk50), .RST(reset), .SDATA1(sdata1), .SDATA2(sdata2), .SCLK(sclk), .nCS(nCS), .DATA1(data1), .DATA2(data2), .START(start), .DONE(done));
	
	LEDDriver u1 (.gclock(clk50), .greset(reset), .dataIn({4'b0, ((dispY) ? y : x)}), .LedOut(LedOut), .LedSync(LedSync));
	//LEDDriver u1 (.gclock(clk50), .greset(reset), .dataIn({14'b0, saveX, saveY}), .LedOut(LedOut), .LedSync(LedSync));
	
	assign readX = (state == 3'b000) | (state == 3'b001) | (state == 3'b010);
	assign readY = (state == 3'b011) | (state == 3'b100) | (state == 3'b101);
	assign resetDelay = (state == 3'b101) | (state == 3'b010);
	assign start = (state == 3'b001) | (state == 3'b100);//  | (state == 3'b010) | (state == 3'b101);
	
	assign x1 = (readX) ? 1'b0 : 1'bZ;
	assign x2 = (readX) ? 1'b1 : 1'bZ;
	
	assign y1 = (readY) ? 1'b0 : 1'bZ;
	assign y2 = (readY) ? 1'b1 : 1'bZ;
	
	
	always @(posedge sclk, posedge reset)
	if (reset)
		begin
			state <= 3'b0;
			delayCount <= maxDelay;
			x <= 12'b0;
			y <= 12'b0;
		end
	else
		begin
			state <= nextState;
			delayCount <= (resetDelay) ? maxDelay : delayCount - 1;
			x <= (done & (state == 3'b010)) ? data1 : x;
			y <= (done & (state == 3'b101)) ? data2 : y;
		end
	
	always @(*)
	case (state)
	3'b000: nextState = (delayCount == 16'b0) ? 3'b001 : 3'b000;
	3'b001: nextState = 3'b010;
	3'b010: nextState = (done) ? 3'b011 : 3'b010;
	3'b011: nextState = (delayCount == 16'b0) ? 3'b100 : 3'b011;
	3'b100: nextState = 3'b101;
	3'b101: nextState = (done) ? 3'b000 : 3'b101;
	default: nextState = 3'b000;
	endcase

	
endmodule
