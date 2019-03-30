`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:56:09 02/20/2011 
// Design Name: 
// Module Name:    sendSD 
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
module sendSD(input clock, input reset, input [31:0] argument, input [5:0] command, input send, output done, output SDout);

	reg [47:0] dataOut;
	reg [5:0] count;
	
	assign done = (count == 6'b000000);
	
	assign SDout = (done) ? 1'b1 : dataOut[count];
	
	
	always @(posedge clock, posedge reset)
	if (reset)
		begin
			dataOut <= 48'b0;
			count <= 6'b0;
		end
	else
		begin
			dataOut <= (send) ? {2'b01, command, argument, 8'b10010101} : dataOut;
			count <= (send) ? 47 : (done) ? 0 : count - 1;
		end

endmodule
