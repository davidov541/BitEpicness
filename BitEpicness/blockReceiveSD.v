// blockReceiveSD.v
//
// Reads a block of data from the MOSI pin. Stores this
// data in the ram in the SDCard module

module blockReceiveSD(input clk400, input reset, input enable, input SDin, output done, output reg [7:0] casheAddress, output [15:0] casheValue, output reg writeCashe);


	reg [1:0] state, nextState;
	
	reg [11:0] count;
	reg [15:0] value;
	parameter [11:0] maxCount = 12'b111111111111;
	wire clearCount;
	
	assign clearCount = (state == 2'b01) | (state == 2'b00);
	assign casheValue = value;
	assign done = (count == maxCount);
	
	always @(posedge clk400, posedge reset)
	if (reset)
		begin
			state <= 2'b00;
			count <= 12'b0;
			writeCashe <= 1'b0;
			casheAddress <= 8'b0;
		end
	else
		begin
			state <= nextState;
			count <= (clearCount) ? 12'b0 : count + 1;
			writeCashe <= (count[3:0] == 4'b1111);
			casheAddress <= count[11:4];
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
	2'b10: nextState = (done) ? 2'b00 : 2'b10;
	default: nextState = 2'b00;
	endcase

endmodule
