// Main.v
//
// 	Main module. Connects the processor to the external modules, as well as
// connecting the external modules to the outside world
module Main(input clk50, input reset, output [3:0] ledSync, output [7:0] ledOut, input lowHigh,
	input [7:0] switches, input switchButton,
	output [22:0] MT_ADDR, inout [15:0] MT_DATA, output MT_OE, output MT_WE, output MT_ADV,
	output MT_CLK, output MT_UB, output MT_LB, output MT_CE, output MT_CRE, input MT_WAIT,
	output [7:0] color, output hSync, output vSync, 
	output spiCLK, output spiCS, output spiMOSI, input spiMISO,
	input psdata, input psclk,
	inout x1, inout x2, inout y1, inout y2,
	input sdata1, input sdata2, output nCS, output sclk);

	// External module wires
	wire [31:0] interupt;
	wire [31:0] readEnable, writeEnable;
	wire [31:0] portData;
	wire writePort, readPort;
	wire [4:0] portAddress;
	
	// Declare memory wires
	wire [31:0] iAddress;
	wire [15:0] iDataOut;
	wire [31:0] dAddress, dDataOut, dDataIn;
	wire dWrite, d32bit;
	wire [31:0] baseAddress;
	
	// SD card to memory wires
	wire sdWriteMem;
	wire [31:0] sdWriteAddress;
	wire [15:0] sdWriteValue;
	wire sdControl;

	wire clkCPU;
	
	wire red, green, blue;
	
	// The main processor
	BitEpicness u0(.clk(clkCPU), .Reset(reset), .INPUT_interupt(interupt), .INOUT_PortData(portData), .OUTPUT_WritePort(writePort),
		.OUTPUT_ReadPort(readPort), .OUTPUT_PortAddress(portAddress), .iAddress(iAddress), .iDataOut(iDataOut), 
		.dAddress(dAddress), .dDataIn(dDataIn), .dWrite(dWrite), .d32bit(d32bit), .dDataOut(dDataOut),
		.externalStall(sdControl), .baseAddress(baseAddress));
	
	// The memory manager, connects the processor to the CellularRAM
	MemoryManager u1(.clk50(clk50), .clkCPU(clkCPU), .reset(reset), .iAddress(iAddress), .iDataOut(iDataOut), 
		.dAddress((sdControl) ? sdWriteAddress : dAddress),
		.dDataIn((sdControl) ? {16'b0, sdWriteValue} : dDataIn), 
		.dWrite((sdControl) ? sdWriteMem : dWrite), .d32bit(d32bit),
		.dDataOut(dDataOut), .baseAddress(baseAddress),
		.MT_ADDR(MT_ADDR), .MT_DATA(MT_DATA), .MT_OE(MT_OE), .MT_WE(MT_WE), .MT_ADV(MT_ADV),
		.MT_CLK(MT_CLK), .MT_UB(MT_UB), .MT_LB(MT_LB), .MT_CE(MT_CE), .MT_CRE(MT_CRE), .MT_WAIT(MT_WAIT));
	
	// Send the read and write signals to external modules
	Decoder32bit d0(.dataIn(portAddress),.enable(readPort),.dataOut(readEnable));
	Decoder32bit d1(.dataIn(portAddress),.enable(writePort),.dataOut(writeEnable));
		
	// Port 0
	SevenSegDisplay p0(.clock(clkCPU), .reset(reset), .data(portData), .read(readEnable[0]), .write(writeEnable[0]), .interupt(interupt[0]), .lowHigh(lowHigh), .ledSync(ledSync), .ledOut(ledOut));
	
	// Port 1
	MillisecondTimer p1(.clock(clkCPU), .reset(reset), .data(portData), .read(readEnable[1]), .write(writeEnable[1]), .interupt(interupt[1]));

	// Port 2
	SwitchInput p2(.clock(clkCPU), .reset(reset), .data(portData), .read(readEnable[2]), .write(writeEnable[2]), .interupt(interupt[2]), .switches(switches), .button(switchButton));
	
	// Port 3
	VGA p3(.clkCPU(clkCPU), .reset(reset), .data(portData), .read(readEnable[3]), .write(writeEnable[3]), .interupt(interupt[3]), 
		.clk50(clk50), .red(red), .green(green), .blue(blue), .vSync(vSync), .hSync(hSync));
		
	assign color[7] = red;
	assign color[6] = red;
	assign color[5] = red;
	assign color[4] = green;
	assign color[3] = green;
	assign color[2] = green;
	assign color[1] = blue;
	assign color[0] = blue;
	
	// Port 4
	SDCard p4(.clkCPU(clkCPU), .reset(reset), .data(portData), .read(readEnable[4]), .write(writeEnable[4]), .interupt(interupt[4]), 
		.SDclk(spiCLK), .SDcs(spiCS), .MOSI(spiMOSI), .MISO(spiMISO), .writeMem(sdWriteMem), 
		.writeAddress(sdWriteAddress), .writeValue(sdWriteValue), .stallProcessor(sdControl));

	// Port 5
	Keyboard p5(.clkCPU(clkCPU), .reset(reset), .data(portData), .read(readEnable[5]), .write(writeEnable[5]), .interupt(interupt[5]), .psdata(psdata), .psclk(psclk));
	
	// Port 6
	//Touchscreen p6(.clock(clkCPU), .reset(reset), .data(portData), .read(readEnable[6]), .write(writeEnable[6]), .interupt(interupt[6]),
	//		.clk50(clk50), .x1(x1), .x2(x2), .y1(y1), .y2(y2), .sdata1(sdata1), .sdata2(sdata2), .sclk(sclk), .nCS(nCS));
	
	assign x1 = 0;
	assign x2 = 0;
	assign y1 = 0;
	assign y2 = 0;
	assign sclk = 0;
	assign nCS = 1;
	
	// All others
	assign interupt[31:6] = 26'b0;


	// Pull down data		
	//pulldown pd0(.O(portData[0]));
	//pulldown(portData[1]);
	//pulldown(portData[2]);
	//pulldown(portData[3]);
	//pulldown(portData[4]);
	//pulldown(portData[5]);
	//pulldown(portData[6]);
	//pulldown(portData[7]);
	//pulldown(portData[8]);
	//pulldown(portData[9]);
	//pulldown(portData[10]);
	//pulldown(portData[11]);
	//pulldown(portData[12]);
	//pulldown(portData[13]);
	//pulldown(portData[14]);
	//pulldown(portData[15]);

endmodule
