// receiveSD.v
//
// Receives the responce from the SD card over the MISO pin

module receiveSD(input clock, input reset, input enable, input SDin, output reg [7:0] received, output done);


	reg [1:0] state, nextState;
	wire resetReceived, save;
	
	reg [2:0] count;
	wire countDone;
	
	assign countDone = (count == 3'b000);
	assign resetReceived = (state == 2'b01);
	assign save = (state == 2'b10);
	assign done = (state == 2'b11);
	
	
	always @(posedge clock, posedge reset)
	if (reset)
		begin
			state <= 2'b00;
			received <= 8'b00000000;
			count <= 3'b000;
		end
	else
		begin
			state <= nextState;
			received <= (resetReceived) ? 8'b00000000 : (save) ? {received[6:0], SDin} : received;
			count <= (resetReceived) ? 3'b110 : (countDone) ? 3'b000 : count - 1;
		end
		
	always @(*)
	case(state)
	2'b00: nextState = (enable) ? 2'b01 : 2'b00;
	2'b01: nextState = (SDin == 1'b0) ? 2'b10 : 2'b01;
	2'b10: nextState = (countDone) ? 2'b11 : 2'b10;
	2'b11: nextState = 2'b00;
	default: nextState = 2'b00;
	endcase
	
endmodule
