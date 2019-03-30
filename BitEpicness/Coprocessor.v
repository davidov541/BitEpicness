// Coprocessor.v
//
// Handles operating system calls. For example reading ports, writing to ports,
// reading and writing system registers, enabling and disabling interrupts, and
// software interrupts
module Coprocessor(
	input clock, input reset,
    input [31:0] regData,
    input [6:0] syscallCode,
	 input [31:0] currentAddress,
    output [31:0] dataOut,
    input interuptIn,
    output interuptOut,
	 input enable,
	 input [4:0] interuptAddress,
	 inout [31:0] portData,
	 output [4:0] portAddress,
	 output readPort, output writePort,
	 output interuptEnable,
	 output interuptDisable,
	 output reg [31:0] interuptMask,
	 output reg [31:0] baseRegister
    );
	 
	 
	 reg [31:0] epc, cause, osTemp, mode;
	 
	 wire [2:0] funcCode;
	 wire [3:0] address;
	 wire writeReg, readReg, softwareInterupt;
	 wire [31:0] regOutput;
	 
	 assign funcCode = syscallCode[2:0];
	 assign address = syscallCode[6:3];
	 
	 assign writeReg = (funcCode == 3'b000) & enable;
	 assign readReg = (funcCode == 3'b001) & enable;
	 assign readPort = (funcCode == 3'b011) & enable;
	 assign writePort = (funcCode == 3'b010) & enable;
	 assign interuptEnable = (funcCode==3'b101) & enable;
	 assign interuptDisable = ((funcCode == 3'b100) & enable) | softwareInterupt;
	 assign softwareInterupt = (funcCode == 3'b110) & enable;
	 
	 assign regOutput = (address == 4'b0000) ? epc
								: (address == 4'b0001) ? cause
								: (address == 4'b0010) ? baseRegister
								: (address == 4'b0011) ? interuptMask
								: (address == 4'b0100) ? osTemp
								: (address == 4'b0101) ? mode
								: 32'bX;
	 assign dataOut = (readReg) ? regOutput : (readPort) ? portData : 32'bX;
	 
	 assign portData = (writePort) ? regData : 32'bZ;
	 assign portAddress = {1'b0, address};
	 
	 assign interuptOut = interuptIn | softwareInterupt;	 
	 
	 always @(posedge clock, posedge reset)
	 if (reset==1)
		begin
			epc <= 32'b0;
			cause <= 32'b0;
			baseRegister <= 32'b0;
			interuptMask <= 32'hFFFFFFFF;
			osTemp <= 32'b0;
			mode <= 32'b0;
		end
	 else
		begin
			epc <= (interuptOut) ? currentAddress : epc;
			cause <= (interuptIn) ? interuptAddress : (softwareInterupt) ? regData : cause;
			baseRegister <= (interuptOut) ? 32'd256 : (writeReg & (address == 4'b0010)) ? regData : baseRegister;
			interuptMask <= (writeReg & (address == 4'b0011)) ? regData : interuptMask;
			osTemp <= (writeReg & (address == 4'b0100)) ? regData : osTemp;
			mode <= (writeReg & (address == 4'b0101)) ? regData : mode;
		end


endmodule
