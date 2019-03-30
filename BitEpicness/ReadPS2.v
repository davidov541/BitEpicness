// ReadPS2.v
//
// Reads a charactor from the PS/2 port

module ReadPS2(input slowClk, input reset, input PS2data, input PS2clk, output reg received, output [7:0] value, output reg error);

	wire negEdge, saveData;
	wire parityBit;
	
	reg [3:0] count;
	reg [10:0] shiftReg;
	reg pastClk;
	
	OddParity u0(value, parityBit);
	
	assign negEdge = ((PS2clk == 1'b0) & (pastClk == 1'b1));
	assign value = shiftReg[8:1];
	assign saveData = negEdge;
	
	
	always @(posedge slowClk, posedge reset)
	if (reset)
		begin
			pastClk <= 1'b1;
			count <= 4'b0000;
			shiftReg <= 11'b00000000000;
			received <= 1'b0;
			error <= 1'b0;
		end
	else
		begin
			pastClk <= PS2clk;
			count <= (saveData == 1'b0) ? count : (count == 4'b1010) ? 4'b0000 : count + 1;
			shiftReg <= (saveData) ? {PS2data, shiftReg[10:1]} : shiftReg;
			received <= (negEdge & (count == 4'b1010));
			error <= (error == 1'b1) ? 1'b1 : (received & (parityBit != shiftReg[9])) ? 1'b1 : 1'b0;
		end


endmodule
