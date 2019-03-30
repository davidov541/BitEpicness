// VGA.v
//
// Connects the GPU, VGA controller, and screen memory to display a picture

module VGA(input clkCPU, input reset, inout [31:0] data, input read, input write, output interupt, 
		input clk50, output red, output green, output blue, output vSync, output hSync);

	reg clk25;
	
	reg [2:0] colorSaved;
	reg [7:0] xSaved, xMaxSaved;
	reg [8:0] ySaved, yMaxSaved;
	reg [6:0] charSaved;
	
	wire [6:0] char;
	
	wire [2:0] color;
	wire [7:0] xCoord;
	wire [8:0] yCoord;
	wire done;
	
	wire writeMem;
	wire [2:0] writeData;
	wire [16:0] writeAddress;
	
	wire [6:0] command;
	wire saveX, saveY, saveXMax, saveYMax, saveChar, saveColor;
	wire drawBox;
	
	
	assign data = (read) ? {31'b000000000000000, ~done} : 32'bZZZZZZZZZZZZZZZZ;
	assign interupt = 1'b0;
	
	assign command = data[15:9];
	
	assign saveX = write & (command == 7'b0000001);
	assign saveY = write & (command == 7'b0000010);
	assign saveColor = write & (command == 7'b0000011);
	assign saveChar = write & (command == 7'b0000100);
	assign saveXMax = write & (command == 7'b0000101);
	assign saveYMax = write & (command == 7'b0000110);
	assign drawBox = write & (command == 7'b0000111);
	
	assign char = (saveChar) ? data[6:0] : charSaved;
	
	
	VGAcontroller u0(.clk25(clk25), .reset(reset), .vSync(vSync), .hSync(hSync), .xCoord(xCoord), .yCoord(yCoord), .draw(draw));
			
	GPU u1(.clk50(clk50), .reset(reset), .x(xSaved), .y(ySaved), .xMax(xMaxSaved), .yMax(yMaxSaved), 
			.color(colorSaved), .char((saveChar) ? data[6:0] : charSaved), .drawChar(saveChar), .drawBox(drawBox), .done(done),
			.writeMem(writeMem), .writeData(writeData), .writeAddress(writeAddress));

	ScreenMem u2 (
	.clka(clk50),
	.wea(writeMem), // Bus [0 : 0] 
	.addra(writeAddress), // Bus [16 : 0] 
	.dina(writeData), // Bus [2 : 0] 
	.clkb(~clk50),
	.addrb({yCoord, xCoord}), // Bus [16 : 0] 
	.doutb(color)); // Bus [2 : 0]
	
	assign red = color[2] & draw;
	assign green = color[1] & draw;
	assign blue = color[0] & draw;
	
	always @ (posedge clk50, posedge reset)
	if (reset)
		clk25 <= 1'b0;
	else
		clk25 <= ~clk25;
		
	always @(posedge clkCPU, posedge reset)
	if (reset)
		begin
			colorSaved <= 3'b000;
			xSaved <= 8'b00000000;
			ySaved <= 9'b000000000;
			charSaved <= 7'b0000000;
		end
	else
		begin
			colorSaved <= (saveColor) ? data[2:0] : colorSaved;
			xSaved <= (saveX) ? data[7:0] : xSaved;
			ySaved <= (saveY) ? data[8:0] : ySaved;
			charSaved <= (saveChar) ? data[6:0] : charSaved;
		end


endmodule
