`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:33:20 03/02/2011 
// Design Name: 
// Module Name:    VGA 
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
module VGA(input clk50, input reset, output red, output green, output blue, output vSync, output hSync);

	reg clk25;
	
	wire [2:0] color;
	wire [7:0] xCoord;
	wire [8:0] yCoord;
	
	VGAcontroller u0(.clk25(clk25), .reset(reset), .vSync(vSync), .hSync(hSync), .xCoord(xCoord), .yCoord(yCoord), .draw(draw));

	ScreenMem u1 (
	.clka(clk50),
	.wea(1'b0), // Bus [0 : 0] 
	.addra(17'b0), // Bus [16 : 0] 
	.dina(3'b000), // Bus [2 : 0] 
	.clkb(~clk50),
	.addrb({yCoord, xCoord}), // Bus [16 : 0] 
	.doutb(color)); // Bus [2 : 0]
	
	assign red = color[2] & draw;
	assign green = color[1] & draw;
	assign blue = color[0] & draw;
	
	
	
	always @ (posedge clk50, posedge reset)
	if (reset)
		clk25 <= 1'b0;
	else
		clk25 <= ~clk25;


endmodule
