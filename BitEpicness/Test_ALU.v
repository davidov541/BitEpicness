`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:28:40 05/16/2010
// Design Name:   ALU
// Module Name:   D:/Code/Verilog/BitEpicness/Test_ALU.v
// Project Name:  BitEpicness
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test_ALU;

	// Inputs
	reg [15:0] a;
	reg [15:0] b;
	reg [2:0] ALUOp;

	// Outputs
	wire [15:0] r;
	wire overflow;
	
	parameter OR = 3'b000, AND = 3'b001, ADD = 3'b010, NEG = 3'b100, NOT = 3'b101, COMP = 3'b110, SHIFT = 3'b111;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.a(a), 
		.b(b), 
		.ALUOp(ALUOp), 
		.r(r), 
		.overflow(overflow)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		ALUOp = 0;

		// Wait 100 ns for global reset to finish
		#10;
		
		ALUOp = ADD;
		a = 16'd50;
		b = 16'd100;
		
		#10;
		
		a = 16'd500;
		
		#10;
		
		b = 16'd0;
		
		#10;
		
		a = 16'd40000;
		
		#10;
		
		a = 16'd0;
		
		#10;
		
		a = 16'd40000;
		b = 16'd40000;
		
		#10;
		
		a = 16'd2000;
		
		#10;
		
		ALUOp = SHIFT;
		a = 16'd128;
		b = 0;
		
		#10;
		
		b = 1;
		
		#10;
		
		a = 16'd100;
		b = 4;
	
		#10;
		
		a = 16'd10000;
		b = 3;
		
		#10;
		
		b = -1;
		
		#10;
		
		b = -2;
		
		ALUOp = AND;
		a = 16'b0000000000011111;
		b = 16'b1111000000000111;
		
		#10;
		
		a = 16'b1111111111111111;
		b = 16'b0000000000000001;
		
		#10;
		
		a = 16'b1111111111101011;
		b = 16'b1111111111101010;
		
		#10;
				
		ALUOp = OR;
		a = 16'b0000000000011111;
		b = 16'b1111000000000111;
		
		#10;
		
		a = 16'b1111111111111111;
		b = 16'b0000000000000001;
		
		ALUOp = NEG;
		#10;
		b = 16'd100;
		
		#10;
		
		b = 16'b1111111111110000;
		
		#10;
		
		b = 16'd1024;
		
		#10;
		
		ALUOp = NOT;
		a = 16'b0000000000011111;
		b = 16'b1111000000000111;
		
		#10;
		
		a = 16'b1111111111111111;
		b = 16'b0000000000000001;
		
		ALUOp = COMP;
		a = 16'd100;
		b = 16'd200;
		
		#10;
		
		b = 16'd100;
		
		#10;
		
		b = 16'd50;
		
		#10 $stop; 

	end
	
endmodule

