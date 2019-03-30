`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:07:24 05/20/2010 
// Design Name: 
// Module Name:    MainMemory 
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
module MainMemory(input clk, input WriteEnable, input[12:0] Address, input[15:0] Data, output[15:0] OutData);

	MainMem mem(.clka(clk), .wea(WriteEnable), .addra(Address), .dina(Data), .douta(OutData));

endmodule