// SDCardReader.v
//
// Initializes the SD card and starts a block read when readBlock goes high

module SDCardReader(input clk400, input reset, output SDclk, output reg SDcs, output SDout, input SDin,
		input [31:0] blockAddress, input readBlock,
		output [7:0] casheAddress, output [15:0] casheValue, output writeCashe, output done, output ready);
	
	reg [7:0] delayCounter;
	wire delayDone, startDelay;
	wire [7:0] delay;
	
	wire [5:0] command;
	wire [31:0] argument;
	wire startCommand;
	wire commandDone;
	wire [7:0] response;
	
	wire ACS, DCS;
	
	reg [4:0] state, nextState;
	
	assign SDclk = clk400;
	
	assign argument = (state == 5'b01101 || state == 5'b01110) ? blockAddress : 32'b0;
	assign command = (state == 5'b00101 || state == 5'b00110) ? 6'b000000 : 
						(state == 5'b00111 || state == 5'b01000) ? 6'b110111 :
						(state == 5'b01001 || state == 5'b01010) ? 6'b101001 :					
						(state == 5'b01101 || state == 5'b01110) ? 6'b010001 : 6'bXXXXXX;
	assign startCommand = (state == 5'b00101 || state == 5'b00111 || state == 5'b01001 || state == 5'b01101) ? 1 : 0;
	
	assign ACS = (state == 5'b00001 || state == 5'b00101 || state == 5'b01101) ? 1'b1 : 1'b0;
	assign DCS = (state == 5'b00011 || state == 5'b01100 || state == 5'b01111) ? 1'b1 : 1'b0;
	
	assign done = (state == 5'b01111);
	assign ready = (state == 5'b01100); 
	
	ExecuteCommand u0(.clk400(clk400), .reset(reset), .SDin(SDin), .SDout(SDout), .command(command), .argument(argument), 
		.startCommand(startCommand), .commandDone(commandDone), .response(response), .casheAddress(casheAddress), .casheValue(casheValue), .writeCashe(writeCashe));
		
	// Delay and state machine sequential logic
	always @(posedge clk400, posedge reset)
	if (reset)
		begin
			state <= 5'b00000;
			delayCounter <= 8'b00000000;
			SDcs <= 1'b1;
		end
	else
		begin
			state <= nextState;
			delayCounter <= (startDelay) ? delay : (delayDone) ? 8'b00000000 : delayCounter - 1;
			SDcs <= (ACS) ? 1'b0 : (DCS) ? 1'b1 : SDcs;
		end

	//Delay combinational
	assign delayDone = (delayCounter == 8'b0);
	assign startDelay = (state == 5'b00001 || state == 5'b00011) ? 1'b1 : 1'b0;
	assign delay = ((state == 5'b00001) | (state == 5'b00011)) ? 8'b11111111 : 8'bXXXXXXXX;
	
	always @(*)
	case(state)
	5'b00000: nextState = 5'b00001;
	5'b00001: nextState = 5'b00010;	// Assert CS
	5'b00010: nextState = (delayDone) ? 5'b00011 : 5'b00010;
	5'b00011: nextState = 5'b00100;  // Deassert CS
	5'b00100: nextState = (delayDone) ? 5'b00101 : 5'b00100;
	5'b00101: nextState = 5'b00110;	// Command 0
	5'b00110: nextState = (commandDone) ? 5'b00111 : 5'b00110;
	5'b00111: nextState = 5'b01000;	// Command 55
	5'b01000: nextState = (commandDone) ? 5'b01001 : 5'b01000;
	5'b01001: nextState = 5'b01010;	// Command 41
	5'b01010: nextState = (commandDone) ? 5'b01011 : 5'b01010;
	5'b01011: nextState = (response[0]==1'b1) ? 5'b00111 : 5'b01100;	// If still busy go back and resend 55 and 41
	5'b01100: nextState = (readBlock) ? 5'b01101 : 5'b01100;				// Wait for a read command, deassert CS
	5'b01101: nextState = 5'b01110;	// Assert CS, Send command 17
	5'b01110: nextState = (commandDone == 1'b0) ? 5'b01110 : (response != 8'b00000000) ? 5'b10000 : 5'b01111;
	5'b01111: nextState = 5'b01100;	// output "done", go back and wait for next command
	5'b10000: nextState = 5'b10000;
	default: nextState = 5'b00000;
	endcase
	
	
	


endmodule
