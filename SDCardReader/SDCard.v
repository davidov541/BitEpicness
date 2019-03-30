`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:24:28 02/22/2011 
// Design Name: 
// Module Name:    SDCard 
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
module SDCard(input clk50, input reset, output SDclk, output SDcs, output SDout, input SDin, output [7:0] LEDout, output [3:0] LEDsync);

	parameter [7:0] maxClock = 200;
	
	reg [7:0] clockCounter;
	reg clk400;
	
	reg [26:0] delayCount;
	parameter [26:0] maxDelay = 50000000;

	wire writeCashe;
	wire [7:0] casheAddress;
	wire [15:0] casheValue;
	
	reg [7:0] testAddress;
	wire [15:0] testValue;
	
	wire [4:0] state;
	
	SDCardReader u0(.clk400(clk400), .reset(reset), .SDclk(SDclk), .SDcs(SDcs), .SDout(SDout), .SDin(SDin),
		.casheAddress(casheAddress), .casheValue(casheValue), .writeCashe(writeCashe), .state(state));
	
	LEDDriver u1(.gclock(clk50), .greset(reset), .dataIn(testValue), .LedOut(LEDout), .LedSync(LEDsync));
	
	SDtempRAM u2 (
		.clka(clk400),
		.wea(writeCashe), // Bus [0 : 0] 
		.addra(casheAddress), // Bus [7 : 0] 
		.dina(casheValue), // Bus [15 : 0] 
		.clkb(clk400),
		.addrb(testAddress), // Bus [7 : 0] 
		.doutb(testValue)); // Bus [15 : 0] 	

	always @(posedge clk50, posedge reset)
	if (reset)
		begin
			clockCounter <= 0;
			clk400 <= 0;
			delayCount <= 27'b0;
			testAddress <= 8'b0;
		end
	else
		begin
			clockCounter <= (clockCounter == maxClock) ? 0 : clockCounter+1;
			clk400 <= (clockCounter == maxClock) ? ~clk400 : clk400;
			delayCount <= (delayCount == maxDelay) ? 27'b0 : delayCount + 1;
			testAddress <= (delayCount == maxDelay) ? testAddress + 1 : testAddress;
		end



endmodule
