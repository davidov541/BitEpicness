// GPU.v
//
// A simple graphics processing unit to display text

module GPU(input clk50, input reset, input [7:0] x, input [8:0] y, input [7:0] xMax, input [8:0] yMax, 
			input [2:0] color, input [6:0] char, input drawChar, input drawBox, output done,
			output writeMem, output [2:0] writeData, output [16:0] writeAddress);
			
	reg [3:0] state, nextState;
	
	reg [8:0] yOffset;
	reg [7:0] xOffset;
	wire [2:0] xIndex;
	
	wire resetXOffset, incXOffset;
	wire resetYOffset, incYOffset;
	wire fontPixelOn, readFontPixel;
	wire drawBoxPixel;
	
	wire [4:0] fontLine;
	
	FontMem fontMem(
	.clka(~clk50),
	.addra({char, yOffset[2:0]}), // Bus [9 : 0] 
	.douta(fontLine)); // Bus [4 : 0] 
	
	
	assign resetYOffset = (state == 4'b0000);
	assign resetXOffset = (state == 4'b0000) | (state == 4'b0110) | (state == 4'b1000);
	assign incXOffset = (state == 4'b0001) | (state == 4'b0010) | (state == 4'b0011) | (state == 4'b0100) | (state == 4'b0111);
	assign incYOffset = (state == 4'b0101) | (state == 4'b1000);
	
	assign xIndex = 4 - xOffset[2:0];
	
	assign fontPixelOn = fontLine[xIndex];
	assign readFontPixel = (state == 4'b0001) | (state == 4'b0010) | (state == 4'b0011) | (state == 4'b0100) | (state == 4'b0101);
	assign drawBoxPixel = (state == 4'b0111);
	
	assign writeMem = (fontPixelOn & readFontPixel) | drawBoxPixel;
	assign writeData = color;
	assign writeAddress = {(y+yOffset), (x+xOffset)};
	
	assign done = (state == 4'b0000);
	
	always @(posedge clk50, posedge reset)
	if (reset)
		begin
			state <= 4'b0000;
			yOffset <= 0;
			xOffset <= 0;
		end
	else
		begin
			state <= nextState;
			yOffset <= (resetYOffset) ? 0 : (incYOffset) ? yOffset + 1 : yOffset;
			xOffset <= (resetXOffset) ? 0 : (incXOffset) ? xOffset + 1 : xOffset;
		end
		
	always @(*)
	case(state)
	4'b0000: nextState = (drawChar) ? 4'b0001 : 4'b0000;
	4'b0001: nextState = 4'b0010;
	4'b0010: nextState = 4'b0011;
	4'b0011: nextState = 4'b0100;
	4'b0100: nextState = 4'b0101;
	4'b0101: nextState = 4'b0110;
	4'b0110: nextState = (yOffset == 8) ? 4'b0000 : 4'b0001;
	4'b0111: nextState = (xOffset + x == xMax) ? 4'b1000 : 4'b0111;
	4'b1000: nextState = (yOffset + y == yMax) ? 4'b0000 : 4'b1000;
	default: nextState = 4'b0000;
	endcase
	
	


endmodule
