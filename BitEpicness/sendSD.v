// SendSD.v
//
// Sends a command to the SD card over the SPI MOSI pin

module sendSD(input clock, input reset, input [31:0] argument, input [5:0] command, input send, output done, output SDout);

	reg [47:0] dataOut;
	reg [5:0] count;
	
	assign done = (count == 6'b000000);
	
	assign SDout = (done) ? 1'b1 : dataOut[count];
	
	
	always @(posedge clock, posedge reset)
	if (reset)
		begin
			dataOut <= 48'b0;
			count <= 6'b0;
		end
	else
		begin
			dataOut <= (send) ? {2'b01, command, argument, 8'b10010101} : dataOut;
			count <= (send) ? 47 : (done) ? 0 : count - 1;
		end

endmodule
