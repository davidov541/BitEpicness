// StallDetector.v
//
// Detects if a stall is needed

module StallDetector(
	input clock, input reset,
	input externalStall,
	input regmask,
	input [4:0] opcode,
	input [3:0] regA,
	input [3:0] regB,
	input [3:0] regC,
	output stall
	);
	 
	parameter LWN = 4'b1110, LDW = 4'b1100, SYSCALL = 5'b01000, LDI = 5'b00101, LDL = 5'b01001;
	
	reg previousStallable, previousStall;
	reg [3:0] previousReg;
	wire isStallable;
	wire usesPreviousReg;
	
	wire stallInside, stallOutside;
	
	assign isStallable = (regmask == 1'b0) & ((opcode[4:1] == LWN) | (opcode[4:1] == LDW) | (opcode == SYSCALL));
	assign usesPreviousReg = ((previousReg==regA)|(previousReg==regB)|(previousReg==regC));
	assign stallInside = previousStallable && usesPreviousReg && (previousStall == 1'b0);
	
	always @ (posedge clock, posedge reset)
	if (reset)
		begin
		previousStallable <= 1'b0;
		previousReg <= 4'b0000;
		previousStall <= 1'b0;
		end
	else
		begin
		previousStallable <= isStallable;
		previousReg <= regA;
		previousStall <= stall;
		end
	
	reg previousLDI, previousExternalStall;
	
	always @ (posedge clock, posedge reset)
	if (reset)
		begin
			previousLDI <= 1'b0;
			previousExternalStall <= 1'b0;
		end
	else
		begin
			previousLDI <= (regmask == 1'b0) & (opcode == LDI || opcode == LDL) & (previousLDI == 1'b0);
			previousExternalStall <= externalStall;
		end

	assign stallOutside = externalStall & ((previousLDI == 1'b0) | (previousExternalStall == 1'b1));
	assign stall = stallInside | stallOutside;
endmodule
