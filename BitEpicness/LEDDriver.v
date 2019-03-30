// LEDDriver.v
//
// Converts a 16-bit value into a series of outputs for the 7-segment display

module LEDDriver(
    input gclock,
    input greset,
    input [15:0] dataIn,
    output [7:0] LedOut,
    output reg[3:0] LedSync
    );
	 
	reg[15:0] counter;
	wire[3:0] nibble;
	
	assign nibble =
		(LedSync == 4'b1110) ? dataIn[15:12] :
		(LedSync == 4'b1101) ? dataIn[11:8] :
		(LedSync == 4'b1011) ? dataIn[7:4] : dataIn[3:0];
		
	assign LedOut =
		(nibble == 0) ? 8'b00000011 :
		(nibble == 1) ? 8'b10011111 :
		(nibble == 2) ? 8'b00100101 :
		(nibble == 3) ? 8'b00001101 :
		(nibble == 4) ? 8'b10011001 :
		(nibble == 5) ? 8'b01001001 :
		(nibble == 6) ? 8'b01000001 :
		(nibble == 7) ? 8'b00011111 :
		(nibble == 8) ? 8'b00000001 :
		(nibble == 9) ? 8'b00001001 :
		(nibble == 10) ? 8'b00010001 :
		(nibble == 11) ? 8'b11000001 :
		(nibble == 12) ? 8'b01100011 :
		(nibble == 13) ? 8'b10000101 :
		(nibble == 14) ? 8'b01100001 : 8'b01110001;
	
	initial
	begin
		LedSync = 0;
		counter = 0;
	end

	always @(posedge gclock)
	begin
		if(greset)
			begin
				LedSync <= 0;
				counter <= 0;
			end
		else
			begin
				if (counter == 6250)
					begin
						counter <= 0;
						LedSync <=
							(LedSync == 4'b1110) ? 4'b1101 :
							(LedSync == 4'b1101) ? 4'b1011 :
							(LedSync == 4'b1011) ? 4'b0111 : 4'b1110;
					end
				else
					begin
						counter <= counter + 1;
						LedSync <= LedSync;
					end
			end
	end

endmodule
