// SDCard.v
//
// Communicates with the SD card module and writes the data to
// main memory after all the data has been received

module SDCard(input clkCPU, input reset, inout [31:0] data, input read, input write, output interupt, 
	output SDclk, output SDcs, output MOSI, input MISO, output writeMem, 
	output [31:0] writeAddress, output [15:0] writeValue, output stallProcessor);

	parameter [7:0] maxClock = 5;
	reg [7:0] clockCounter;
	reg clk400;
	
	reg [31:0] sdBlockAddress;
	reg [31:0] memoryAddress;
	reg [4:0] readSDcount;
	wire loadBlockAddress, loadMemoryAddress;
	wire readSD;
	wire [1:0] command;
	wire [31:0] value;
	wire done, ready;
	wire readBlock;

	wire writeCashe;
	wire [7:0] casheAddress;
	wire [15:0] casheValue;
	
	// State machine declarations
	reg [1:0] state, nextState;
	reg [2:0] delayCount;
	reg [7:0] index;
	wire delayDone;
	wire incIndex;
	
	SDCardReader u0(.clk400(clk400), .reset(reset), .SDclk(SDclk), .SDcs(SDcs), .SDout(MOSI), .SDin(MISO),
		.blockAddress(sdBlockAddress), .readBlock(readBlock),
		.casheAddress(casheAddress), .casheValue(casheValue), .writeCashe(writeCashe), .done(done), .ready(ready));
	
	assign command = data[31:30];
	assign value = {2'b00, data[29:0]};
	assign loadBlockAddress = write & (command == 2'b00);
	assign loadMemoryAddress = write & (command == 2'b01);
	assign readSD = write & (command == 2'b10);
	assign readBlock = (readSDcount != 5'b0);
	
	assign writeAddress = memoryAddress + index;
	assign data = (read) ? {31'b0, ~ready} : 32'bZ;
	assign interupt = (index == 8'hFF);
	
	SDtempRAM u2 (
		.clka(clk400),
		.wea(writeCashe), // Bus [0 : 0] 
		.addra(casheAddress), // Bus [7 : 0] 
		.dina(casheValue), // Bus [15 : 0] 
		.clkb(~clkCPU),
		.addrb(index), // Bus [7 : 0] 
		.doutb(writeValue)); // Bus [15 : 0] 	

	always @(posedge clkCPU, posedge reset)
	if (reset)
		begin
			clockCounter <= 1'b0;
			clk400 <= 1'b0;
			sdBlockAddress <= 32'b0;
			memoryAddress <= 32'b0;
			readSDcount <= 5'b0;
		end
	else
		begin
			clockCounter <= (clockCounter == maxClock) ? 0 : clockCounter+1;
			clk400 <= (clockCounter == maxClock) ? ~clk400 : clk400;
			sdBlockAddress <= (loadBlockAddress) ? {value[22:0], 9'b0} : sdBlockAddress;
			memoryAddress <= (loadMemoryAddress) ? value : memoryAddress;
			readSDcount <= (readSD) ? 5'd25 : (readSDcount == 5'b0) ? 5'b0 : readSDcount - 1;
		end
	
	// State machine
	
	assign delayDone = (delayCount == 3'b000);
	assign incIndex = (state == 2'b11);
	assign writeMem = (state == 2'b11);
	assign stallProcessor = (state == 2'b10) | (state == 2'b11);
	
	always @(posedge clkCPU, posedge reset)
	if (reset)
		begin
			state <= 2'b00;
			delayCount <= 3'b000;
			index <= 8'b00000000;
		end
	else
		begin
			state <= nextState;
			delayCount <= (state == 2'b00) ? 3'b111 : delayCount - 1; 
			index <= (incIndex) ? index + 1 : 8'b0;
		end

	always @(*)
	case (state)
	2'b00: nextState = (readSD) ? 2'b01 : 2'b00;
	2'b01: nextState = (done) ? 2'b10 : 2'b01;
	2'b10: nextState = (delayDone) ? 2'b11 : 2'b10;
	2'b11: nextState = (index == 8'hFF) ? 2'b00 : 2'b11;
	default: nextState = 2'b00;
	endcase

endmodule
