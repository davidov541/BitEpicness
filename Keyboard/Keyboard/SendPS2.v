`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:30:00 04/29/2011 
// Design Name: 
// Module Name:    SendPS2 
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
module SendPS2(input slowClk, input reset, inout psclk, output psdata, input [7:0] command, input send, output done);

	reg [10:0] dataToSend;
	reg pastClk;
	
	wire parityBit;
	wire negClk, posClk;
	
	wire pullDownClk;
	
	assign psclk = (pullDownClk) ? 1'b0 : 1'bZ;
	
	assign negClk = (pastClk == 1'b1) & (psclk == 1'b0);
	assign posClk = (pastClk == 1'b0) & (psclk == 1'b1);
	
	
	OddParity u0(command, parityBit);
	
	always @(posedge slowClk, posedge reset)
	if (reset)
		begin
			dataToSend <= 11'b0;
			pastClk <= 1'b0;
		end
	else
		begin
			(send) ? {1'b1, parityBit, command, 1'b0} : dataToSend;
			pastClk <= psclk;
		end


endmodule
