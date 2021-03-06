// ExecuteCommand.v
//
// Coordinates one command cycle, which includes sending a
// command, reading the responce, then reading the block
// data if a block read command is issued

module ExecuteCommand(input clk400, input reset, input SDin, output SDout, input [5:0] command, input [31:0] argument, input startCommand, 
		output commandDone, output [7:0] response, output [7:0] casheAddress, output [15:0] casheValue, output writeCashe);
	
	reg [3:0] state, nextState;
	
	wire sendStart, sendDone;
	wire receiveStart, receiveDone;
	wire blockStart, blockDone;
	
	sendSD u0(.clock(clk400), .reset(reset), .argument(argument), .command(command), .send(sendStart), .done(sendDone), .SDout(SDout));
	receiveSD u1(.clock(clk400), .reset(reset), .enable(receiveStart), .SDin(SDin), .received(response), .done(receiveDone));
	blockReceiveSD u2(.clk400(clk400), .reset(reset), .enable(blockStart), .SDin(SDin), .done(blockDone),
		.casheAddress(casheAddress), .casheValue(casheValue), .writeCashe(writeCashe));

	assign sendStart = (state == 4'b0001);
	assign receiveStart = (state == 4'b0011 || state == 4'b0100);
	//assign blockStart = (state == 4'b0101 || state == 4'b0110);
	assign blockStart = (state == 4'b0101);
	assign commandDone = (state == 4'b0000);
	
	always @(posedge clk400, posedge reset)
	if (reset)
		begin
			state <= 4'b0000;
		end
	else
		begin
			state <= nextState;
		end
	
	always @(*)
	case (state)
	4'b0000: nextState = (startCommand) ? 4'b0001 : 4'b0000;
	4'b0001: nextState = 4'b0010;
	4'b0010: nextState = (sendDone) ? 4'b0011 : 4'b0010;
	4'b0011: nextState = 4'b0100;
	4'b0100: nextState = (receiveDone == 1'b0) ? 4'b0100 : (command == 6'b010001) ? 4'b0101 : 4'b0000;
	4'b0101: nextState = 4'b0110;
	4'b0110: nextState = (blockDone) ? 4'b0000 : 4'b0110;
	default: nextState = 4'b0000;
	endcase

endmodule
