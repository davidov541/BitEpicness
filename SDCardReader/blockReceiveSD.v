`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:16:33 02/21/2011 
// Design Name: 
// Module Name:    blockReceiveSD 
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
module blockReceiveSD(input clk400, input reset, input enable, input SDin, output done, output [7:0] casheAddress, output [15:0] casheValue, output writeCashe);


	reg [1:0] state, nextState;
	
	reg [11:0] count;
	reg [15:0] value;
	parameter [11:0] maxCount = 12'b111111111111;
	wire clearCount;
	
	assign clearCount = (state == 2'b01);
	assign writeCashe = (count[3:0] == 4'b1111);
	assign casheAddress = count[11:4];
	assign casheValue = value;
	assign done = (state == 2'b00);
	
	always @(posedge clk400, posedge reset)
	if (reset)
		begin
			state <= 2'b00;
			count <= 12'b0;
		end
	else
		begin
			state <= nextState;
			count <= (clearCount) ? 12'b0 : count + 1;

		end
		
	always @(negedge clk400, posedge reset)
	if (reset)
		value <= 16'b0;
	else
		value <= {value[14:0], SDin};
		
	always @(*)
	case (state)
	2'b00: nextState = (enable) ? 2'b01 : 2'b00;
	2'b01: nextState = (SDin == 1'b1) ? 2'b01 : 2'b10;
	2'b10: nextState = (count == maxCount) ? 2'b00 : 2'b10;
	default: nextState = 2'b00;
	endcase
	

endmodule
