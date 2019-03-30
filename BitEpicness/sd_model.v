`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:47:13 04/19/2009 
// Design Name: 
// Module Name:    sd_model 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
/*
	this module models the sd card in a transaction process....
*/
module sd_model(
	input wire 	SCLK,
					MOSI,
					CS,
	output wire 	MISO
);
/*
localparam
	NEEDS_CLOCKS
	WAIT_CMD0
	WAIT_CMD55_1
	WAIT_CMD41_1
	WAIT_CMD55_2
	WAIT_CMD41_2
 reg []	state, state_next;
*/	

localparam NULL = 48'hFFFFFFFFFFFF;

reg [8*6-1 :0] cmd_in;	// 6 byte command
reg [7:0]		resp_out;

reg ready;	// for reading...

integer i;

always @ (posedge SCLK)
	if( CS == 1'b0)
		cmd_in = { cmd_in[8*6-2 : 0], MOSI };

always @ (negedge SCLK)
	if( CS == 1'b0)
		resp_out =  { resp_out[6:0], 1'b1};
		
assign MISO = resp_out[7];

assign cmd0_ok  = (cmd_in == 48'h40_00_00_00_00_95) ? 1'b1 : 1'b0;
assign cmd55_ok = (cmd_in[47:8] == 40'h77_00_00_00_00) ? 1'b1 : 1'b0;
assign cmd41_ok = (cmd_in[47:8] == 40'h69_00_00_00_00) ? 1'b1 : 1'b0;
assign cmd17_ok = (cmd_in[47:40] == 8'h51) ? 1'b1 : 1'b0;

task wait_clocks;
		input [4:0] nr;
		reg [4:0] cnt;
		begin
		for( cnt = 0; cnt < nr; cnt = cnt + 1)
			@(posedge SCLK);
		end
	endtask
		
initial 
	begin
	ready = 0;
	// init. values
	resp_out = 8'hFF;
	cmd_in = NULL;
	
	$display("Card inserted :P\n");
	// wait for clocks
	i = 0;
	while( i < 80 ) 
		begin
		@(posedge SCLK);
			if(CS == 1)
				i = i + 1;
		end
	$display("Card clocking done\n");
	// wait for CMD0
	@(posedge cmd0_ok);
	$display("Card got cmd0\n");
	wait_clocks(8);
	@(negedge SCLK);
	resp_out = 8'h01;
	cmd_in = NULL;
	
	// acmd41 
	for( i=1; i>=0; i = i-1)
		begin
		@(posedge cmd55_ok);
		$display("Card got cmd 55\n");
		wait_clocks(8);
		@(negedge SCLK);
		resp_out = 8'h01;
		cmd_in = NULL;		
		
		@(posedge cmd41_ok);
		$display("Card got cmd 41\n");
		wait_clocks(8);
		cmd_in = NULL;
		@(negedge SCLK);
		if( i == 0)
			resp_out = 8'h00;
		else
			resp_out = 8'h01;
		end
	
	wait_clocks(16);
	
	ready = 1;
	
	// cmd17
	forever
	begin
	@(posedge cmd17_ok);
	$display("Card got cmd 17\n");
	cmd_in = NULL;
	wait_clocks(8);
	@(negedge SCLK);
	resp_out = 8'h00;
	
	wait_clocks(12);
	@(negedge SCLK);
	resp_out = 8'hFE;
	wait_clocks(8);
	
	/*
	@(negedge SCLK);
	resp_out = 8'h11;
	wait_clocks(8);
	
	@(negedge SCLK);
	resp_out = 8'h11;
	*/
	
	// send data
	for(i=0; i<512; i=i+1)
		begin
		@(negedge SCLK);
		//resp_out = i;
		resp_out = (i == 31) ? 3 : 0;
		wait_clocks(8);
		end
		
	// send some crc	

	@(negedge SCLK);
	resp_out = 8'h56;
	wait_clocks(8);
	
	@(negedge SCLK);
	resp_out = 8'h78;
	end
	end
	
endmodule
