// MillisecondTimer.v
//
// Stores the time elapsed since the last time it is reset or written to

module MillisecondTimer(input clock, input reset, inout [31:0] data, input read, input write, output interupt);

	parameter maxCount = 3846;
	
	reg [31:0] value, delay;
	wire hitMaxCount;
	
	assign data = (read) ? value : 32'bZ;
	assign hitMaxCount = (delay==maxCount);
	assign interupt = 0;
	
	
	always @ (posedge clock, posedge reset)
	if (reset)
		begin
			value <= 32'b0;
			delay <= 32'b0;
		end
	else
		begin
			value <= (write) ? data : (hitMaxCount) ? value + 1 : value;
			delay <= (write) ? 32'b0 : (hitMaxCount) ? 0 : delay + 1;
		end


endmodule
