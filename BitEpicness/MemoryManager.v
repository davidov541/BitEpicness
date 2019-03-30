// MemoryManager.v
// 
// Routes instruction and data into the CellularRAM
// Also generates the CPU clock signal

module MemoryManager(input clk50, output reg clkCPU, input reset, input [31:0] iAddress, output [15:0] iDataOut, 
		input [31:0] dAddress, input [31:0] dDataIn, input dWrite, input d32bit, output [31:0] dDataOut,
		input [31:0] baseAddress,
		output [22:0] MT_ADDR, inout [15:0] MT_DATA, output MT_OE, output MT_WE, output MT_ADV,
		output MT_CLK, output MT_UB, output MT_LB, output MT_CE, output MT_CRE, input MT_WAIT);
		
		reg [3:0] counter;
		reg [15:0] instructionReg, dataHighReg;
		reg [1:0] state, nextState;
		parameter [3:0] MAXCOUNT = 12;
		
		wire instr, dataHigh, dataLow, chipEn;
		wire saveInstr, saveDataHigh;
		
		wire [15:0] ROMinstOut;
		
		wire [31:0] memoryAddress;
		
		always @(posedge clk50, posedge reset)
		if (reset)
			begin
				counter <= 4'b0;
				instructionReg <= 16'b0;
				dataHighReg <= 16'b0;
				clkCPU <= 0;
			end
		else
			begin
				counter <= (counter == MAXCOUNT) ? 4'b0 : counter + 1;
				instructionReg <= (saveInstr) ? MT_DATA : instructionReg;
				dataHighReg <= (saveDataHigh) ? MT_DATA : dataHighReg;
				clkCPU <= (counter == 4'd6) ? 0 : (counter == 4'd12) ? 1 : clkCPU;
			end
		
		assign chipEn = (counter == 4'd0);
		assign instr = (counter == 4'd1) | (counter == 4'd2) | (counter == 4'd3) | (counter == 4'd4);
		assign dataHigh = (counter == 4'd5) | (counter == 4'd6) | (counter == 4'd7) | (counter == 4'd8);
		assign dataLow = (counter == 4'd9) | (counter == 4'd10) | (counter == 4'd11) | (counter == 4'd12);
		
		assign saveInstr = (counter == 4'd4);
		assign saveDataHigh = (counter == 4'd8);
		
		assign memoryAddress = (instr) ? iAddress
									: (dataHigh) ? dAddress
									: dAddress + 1;
		
		assign MT_OE = 1'b0;
		assign MT_WE = ~(dWrite&(dataHigh | (dataLow & d32bit)));
		assign MT_ADV = 1'b0;
		assign MT_CLK = 1'b0;
		assign MT_UB = 1'b0;
		assign MT_LB = 1'b0;
		assign MT_CE = chipEn;
		assign MT_CRE = 1'b0;
		
		assign MT_ADDR = memoryAddress + baseAddress;
		assign MT_DATA = (MT_WE==1'b1) ? 16'bZ
							: (dataHigh & d32bit) ? dDataIn[31:16]
							: dDataIn[15:0];
		assign dDataOut = (d32bit) ? {dataHighReg, MT_DATA}
							: {{16{dataHighReg[15]}}, dataHighReg};
		
		InstructionMem IMem (.clka(clk50), .addra(iAddress[8:0]), .douta(ROMinstOut));
		//wire [15:0] memData;
		//MainMem MMem(.clka(clk50), .wea(dWrite), .addra(dAddress[12:0]), .dina(dDataIn), .douta(memData));
		//assign dDataOut = {{16{memData[15]}}, memData};
		
		assign iDataOut = (state == 2'b10) ? instructionReg : ROMinstOut;
		
		// State machine
		
		always @(posedge clk50, posedge reset)
		if (reset)
			state <= 2'b00;
		else
			state <= nextState;

		always @(*)
		case (state)
		2'b00: nextState = (iAddress == 32'b0) ? 2'b00 : 2'b01;
		2'b01: nextState = (iAddress == 32'b0) ? 2'b10 : 2'b01;
		2'b10: nextState = 2'b10;
		default: nextState = 2'b00;
		endcase

endmodule
