<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="clk" />
        <signal name="reset" />
        <signal name="REG" />
        <signal name="ONE" />
        <signal name="ZERO" />
        <signal name="REG_Mask" />
        <signal name="EX_Mask" />
        <signal name="MEM_Mask" />
        <signal name="XLXN_7(4:0)" />
        <signal name="XLXN_8(2:0)" />
        <signal name="EX(11:0)" />
        <signal name="MEM(6:0)" />
        <signal name="WB(4:0)" />
        <signal name="ReadReg1(3:0)" />
        <signal name="ReadReg2(3:0)" />
        <signal name="ReadReg3(3:0)" />
        <signal name="Imm(6:0)" />
        <signal name="JTarget(10:0)" />
        <signal name="OutReg1(15:0)" />
        <signal name="OutReg2(15:0)" />
        <signal name="OutReg3(15:0)" />
        <signal name="REG_Instruction(15:0)" />
        <signal name="XLXN_52(15:0)" />
        <signal name="XLXN_75(8:0)" />
        <signal name="XLXN_77(8:0)" />
        <signal name="JTarget(8:0)" />
        <signal name="XLXN_78" />
        <port polarity="Input" name="clk" />
        <port polarity="Input" name="reset" />
        <port polarity="Output" name="REG" />
        <port polarity="Output" name="REG_Mask" />
        <port polarity="Output" name="EX_Mask" />
        <port polarity="Output" name="MEM_Mask" />
        <port polarity="Output" name="EX(11:0)" />
        <port polarity="Output" name="MEM(6:0)" />
        <port polarity="Output" name="WB(4:0)" />
        <port polarity="Output" name="Imm(6:0)" />
        <port polarity="Output" name="JTarget(10:0)" />
        <port polarity="Output" name="OutReg1(15:0)" />
        <port polarity="Output" name="OutReg2(15:0)" />
        <port polarity="Output" name="OutReg3(15:0)" />
        <port polarity="Output" name="REG_Instruction(15:0)" />
        <blockdef name="PCControl">
            <timestamp>2010-11-27T21:59:30</timestamp>
            <rect width="400" x="64" y="-640" height="640" />
            <line x2="0" y1="-608" y2="-608" x1="64" />
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="0" y="-364" height="24" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <rect width="64" x="0" y="-300" height="24" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="528" y1="-608" y2="-608" x1="464" />
            <line x2="528" y1="-416" y2="-416" x1="464" />
            <line x2="528" y1="-224" y2="-224" x1="464" />
            <rect width="64" x="464" y="-44" height="24" />
            <line x2="528" y1="-32" y2="-32" x1="464" />
        </blockdef>
        <blockdef name="Control">
            <timestamp>2010-11-26T20:46:42</timestamp>
            <rect width="256" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <rect width="64" x="320" y="-172" height="24" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="InstructionTranslate">
            <timestamp>2010-11-26T20:50:35</timestamp>
            <rect width="352" x="64" y="-448" height="448" />
            <rect width="64" x="0" y="-428" height="24" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="416" y="-428" height="24" />
            <line x2="480" y1="-416" y2="-416" x1="416" />
            <rect width="64" x="416" y="-364" height="24" />
            <line x2="480" y1="-352" y2="-352" x1="416" />
            <rect width="64" x="416" y="-300" height="24" />
            <line x2="480" y1="-288" y2="-288" x1="416" />
            <rect width="64" x="416" y="-236" height="24" />
            <line x2="480" y1="-224" y2="-224" x1="416" />
            <rect width="64" x="416" y="-172" height="24" />
            <line x2="480" y1="-160" y2="-160" x1="416" />
            <rect width="64" x="416" y="-108" height="24" />
            <line x2="480" y1="-96" y2="-96" x1="416" />
            <rect width="64" x="416" y="-44" height="24" />
            <line x2="480" y1="-32" y2="-32" x1="416" />
        </blockdef>
        <blockdef name="vcc">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-64" x1="64" />
            <line x2="64" y1="0" y2="-32" x1="64" />
            <line x2="32" y1="-64" y2="-64" x1="96" />
        </blockdef>
        <blockdef name="gnd">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-96" x1="64" />
            <line x2="52" y1="-48" y2="-48" x1="76" />
            <line x2="60" y1="-32" y2="-32" x1="68" />
            <line x2="40" y1="-64" y2="-64" x1="88" />
            <line x2="64" y1="-64" y2="-80" x1="64" />
            <line x2="64" y1="-128" y2="-96" x1="64" />
        </blockdef>
        <blockdef name="RegisterFile">
            <timestamp>2010-11-27T20:30:34</timestamp>
            <rect width="256" x="64" y="-512" height="512" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <rect width="64" x="0" y="-300" height="24" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-492" height="24" />
            <line x2="384" y1="-480" y2="-480" x1="320" />
            <rect width="64" x="320" y="-268" height="24" />
            <line x2="384" y1="-256" y2="-256" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="Reg16">
            <timestamp>2010-11-27T21:1:50</timestamp>
            <rect width="320" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="384" y="-236" height="24" />
            <line x2="448" y1="-224" y2="-224" x1="384" />
        </blockdef>
        <blockdef name="Reg9">
            <timestamp>2010-11-27T21:57:48</timestamp>
            <rect width="304" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="368" y="-236" height="24" />
            <line x2="432" y1="-224" y2="-224" x1="368" />
        </blockdef>
        <blockdef name="InstructionMemory">
            <timestamp>2010-11-27T22:3:25</timestamp>
            <rect width="320" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="384" y="-108" height="24" />
            <line x2="448" y1="-96" y2="-96" x1="384" />
        </blockdef>
        <block symbolname="PCControl" name="XLXI_2">
            <blockpin signalname="REG" name="Jump" />
            <blockpin signalname="ZERO" name="JumpRegister" />
            <blockpin signalname="ZERO" name="Branch" />
            <blockpin signalname="ZERO" name="ALUOverflow" />
            <blockpin signalname="XLXN_77(8:0)" name="Old_PC(8:0)" />
            <blockpin signalname="JTarget(8:0)" name="JumpTarget(8:0)" />
            <blockpin name="JumpRegisterTarget(8:0)" />
            <blockpin name="BranchType(1:0)" />
            <blockpin name="ALUOutput(15:0)" />
            <blockpin name="BranchTarget(12:0)" />
            <blockpin signalname="REG_Mask" name="REG_Mask" />
            <blockpin signalname="EX_Mask" name="EX_Mask" />
            <blockpin signalname="MEM_Mask" name="MEM_Mask" />
            <blockpin signalname="XLXN_75(8:0)" name="pc(8:0)" />
        </block>
        <block symbolname="vcc" name="XLXI_5">
            <blockpin signalname="ONE" name="P" />
        </block>
        <block symbolname="gnd" name="XLXI_6">
            <blockpin signalname="ZERO" name="G" />
        </block>
        <block symbolname="Control" name="XLXI_3">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="reset" name="Reset" />
            <blockpin signalname="XLXN_7(4:0)" name="OpCode(4:0)" />
            <blockpin signalname="XLXN_8(2:0)" name="FuncCode(2:0)" />
            <blockpin signalname="REG" name="REG" />
            <blockpin signalname="EX(11:0)" name="EX(11:0)" />
            <blockpin signalname="MEM(6:0)" name="MEM(6:0)" />
            <blockpin signalname="WB(4:0)" name="WB(4:0)" />
        </block>
        <block symbolname="RegisterFile" name="XLXI_7">
            <blockpin signalname="ZERO" name="WriteEnable" />
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="reset" name="Reset" />
            <blockpin signalname="ReadReg1(3:0)" name="Read1(3:0)" />
            <blockpin signalname="ReadReg2(3:0)" name="Read2(3:0)" />
            <blockpin signalname="ReadReg3(3:0)" name="Read3(3:0)" />
            <blockpin name="WriteReg(3:0)" />
            <blockpin name="Data(15:0)" />
            <blockpin signalname="OutReg1(15:0)" name="Out1(15:0)" />
            <blockpin signalname="OutReg2(15:0)" name="Out2(15:0)" />
            <blockpin signalname="OutReg3(15:0)" name="Out3(15:0)" />
        </block>
        <block symbolname="InstructionTranslate" name="XLXI_4">
            <blockpin signalname="REG_Instruction(15:0)" name="Instruction(15:0)" />
            <blockpin signalname="XLXN_7(4:0)" name="OpCode(4:0)" />
            <blockpin signalname="XLXN_8(2:0)" name="FuncCode(2:0)" />
            <blockpin signalname="ReadReg1(3:0)" name="ReadReg1(3:0)" />
            <blockpin signalname="ReadReg2(3:0)" name="ReadReg2(3:0)" />
            <blockpin signalname="ReadReg3(3:0)" name="ReadReg3(3:0)" />
            <blockpin signalname="Imm(6:0)" name="Imm(6:0)" />
            <blockpin signalname="JTarget(10:0)" name="JTarget(10:0)" />
        </block>
        <block symbolname="Reg16" name="XLXI_11">
            <blockpin signalname="ONE" name="writeReg" />
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="reset" name="reset" />
            <blockpin signalname="XLXN_52(15:0)" name="writeData(15:0)" />
            <blockpin signalname="REG_Instruction(15:0)" name="outData(15:0)" />
        </block>
        <block symbolname="Reg9" name="XLXI_14">
            <blockpin signalname="ONE" name="writeReg" />
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="reset" name="reset" />
            <blockpin signalname="XLXN_75(8:0)" name="writeData(8:0)" />
            <blockpin signalname="XLXN_77(8:0)" name="outData(8:0)" />
        </block>
        <block symbolname="InstructionMemory" name="XLXI_15">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="XLXN_75(8:0)" name="Address(8:0)" />
            <blockpin signalname="XLXN_52(15:0)" name="Instruction(15:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="7040" height="5440">
        <branch name="clk">
            <wire x2="592" y1="1296" y2="1296" x1="80" />
            <wire x2="656" y1="1184" y2="1184" x1="592" />
            <wire x2="592" y1="1184" y2="1296" x1="592" />
        </branch>
        <iomarker fontsize="28" x="80" y="1296" name="clk" orien="R180" />
        <branch name="reset">
            <wire x2="1280" y1="944" y2="944" x1="112" />
            <wire x2="1280" y1="736" y2="944" x1="1280" />
            <wire x2="2448" y1="736" y2="736" x1="1280" />
        </branch>
        <iomarker fontsize="28" x="112" y="944" name="reset" orien="R180" />
        <instance x="96" y="112" name="XLXI_5" orien="R0" />
        <instance x="304" y="224" name="XLXI_6" orien="R0" />
        <branch name="ONE">
            <attrtext style="alignment:SOFT-TVCENTER" attrname="Name" x="160" y="183" type="branch" />
            <wire x2="160" y1="112" y2="183" x1="160" />
            <wire x2="160" y1="183" y2="208" x1="160" />
        </branch>
        <branch name="ZERO">
            <attrtext style="alignment:SOFT-TVCENTER" attrname="Name" x="368" y="74" type="branch" />
            <wire x2="368" y1="48" y2="74" x1="368" />
            <wire x2="368" y1="74" y2="96" x1="368" />
        </branch>
        <branch name="REG_Mask">
            <wire x2="3328" y1="272" y2="272" x1="1200" />
        </branch>
        <branch name="EX_Mask">
            <wire x2="3328" y1="464" y2="464" x1="1200" />
        </branch>
        <branch name="MEM_Mask">
            <wire x2="2256" y1="656" y2="656" x1="1200" />
            <wire x2="2256" y1="544" y2="656" x1="2256" />
            <wire x2="3328" y1="544" y2="544" x1="2256" />
        </branch>
        <branch name="REG">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="512" y="272" type="branch" />
            <wire x2="672" y1="272" y2="272" x1="512" />
        </branch>
        <branch name="clk">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="2272" y="672" type="branch" />
            <wire x2="2448" y1="672" y2="672" x1="2272" />
        </branch>
        <instance x="2448" y="896" name="XLXI_3" orien="R0">
        </instance>
        <branch name="XLXN_7(4:0)">
            <wire x2="2368" y1="800" y2="992" x1="2368" />
            <wire x2="3056" y1="992" y2="992" x1="2368" />
            <wire x2="3056" y1="992" y2="1104" x1="3056" />
            <wire x2="2448" y1="800" y2="800" x1="2368" />
            <wire x2="3056" y1="1104" y2="1104" x1="2944" />
        </branch>
        <branch name="XLXN_8(2:0)">
            <wire x2="2448" y1="864" y2="864" x1="2432" />
            <wire x2="2432" y1="864" y2="960" x1="2432" />
            <wire x2="2992" y1="960" y2="960" x1="2432" />
            <wire x2="2992" y1="960" y2="1168" x1="2992" />
            <wire x2="2992" y1="1168" y2="1168" x1="2944" />
        </branch>
        <branch name="REG">
            <wire x2="3360" y1="672" y2="672" x1="2832" />
        </branch>
        <branch name="EX(11:0)">
            <wire x2="3360" y1="736" y2="736" x1="2832" />
        </branch>
        <branch name="MEM(6:0)">
            <wire x2="3360" y1="800" y2="800" x1="2832" />
        </branch>
        <branch name="WB(4:0)">
            <wire x2="3360" y1="864" y2="864" x1="2832" />
        </branch>
        <branch name="ReadReg1(3:0)">
            <wire x2="3680" y1="1232" y2="1232" x1="2944" />
        </branch>
        <branch name="ReadReg2(3:0)">
            <wire x2="3680" y1="1296" y2="1296" x1="2944" />
        </branch>
        <branch name="ReadReg3(3:0)">
            <wire x2="3680" y1="1360" y2="1360" x1="2944" />
        </branch>
        <branch name="Imm(6:0)">
            <wire x2="3344" y1="1424" y2="1424" x1="2944" />
        </branch>
        <branch name="JTarget(10:0)">
            <wire x2="3344" y1="1488" y2="1488" x1="2944" />
        </branch>
        <instance x="3680" y="1520" name="XLXI_7" orien="R0">
        </instance>
        <branch name="reset">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="3568" y="1168" type="branch" />
            <wire x2="3680" y1="1168" y2="1168" x1="3568" />
        </branch>
        <branch name="clk">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="3584" y="1104" type="branch" />
            <wire x2="3680" y1="1104" y2="1104" x1="3584" />
        </branch>
        <branch name="ZERO">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="3568" y="1040" type="branch" />
            <wire x2="3680" y1="1040" y2="1040" x1="3568" />
        </branch>
        <branch name="OutReg1(15:0)">
            <wire x2="4176" y1="1040" y2="1040" x1="4064" />
        </branch>
        <branch name="OutReg2(15:0)">
            <wire x2="4176" y1="1264" y2="1264" x1="4064" />
        </branch>
        <branch name="OutReg3(15:0)">
            <wire x2="4192" y1="1488" y2="1488" x1="4064" />
        </branch>
        <instance x="2464" y="1520" name="XLXI_4" orien="R0">
        </instance>
        <iomarker fontsize="28" x="3360" y="672" name="REG" orien="R0" />
        <iomarker fontsize="28" x="3360" y="736" name="EX(11:0)" orien="R0" />
        <iomarker fontsize="28" x="3360" y="800" name="MEM(6:0)" orien="R0" />
        <iomarker fontsize="28" x="3360" y="864" name="WB(4:0)" orien="R0" />
        <iomarker fontsize="28" x="3344" y="1424" name="Imm(6:0)" orien="R0" />
        <iomarker fontsize="28" x="3344" y="1488" name="JTarget(10:0)" orien="R0" />
        <iomarker fontsize="28" x="3328" y="464" name="EX_Mask" orien="R0" />
        <iomarker fontsize="28" x="3328" y="544" name="MEM_Mask" orien="R0" />
        <iomarker fontsize="28" x="3328" y="272" name="REG_Mask" orien="R0" />
        <iomarker fontsize="28" x="4176" y="1040" name="OutReg1(15:0)" orien="R0" />
        <iomarker fontsize="28" x="4176" y="1264" name="OutReg2(15:0)" orien="R0" />
        <iomarker fontsize="28" x="4192" y="1488" name="OutReg3(15:0)" orien="R0" />
        <branch name="REG_Instruction(15:0)">
            <wire x2="2208" y1="1104" y2="1104" x1="2048" />
            <wire x2="2464" y1="1104" y2="1104" x1="2208" />
            <wire x2="2208" y1="1104" y2="1600" x1="2208" />
            <wire x2="2352" y1="1600" y2="1600" x1="2208" />
        </branch>
        <branch name="XLXN_52(15:0)">
            <wire x2="1168" y1="1184" y2="1184" x1="1104" />
            <wire x2="1360" y1="1104" y2="1104" x1="1168" />
            <wire x2="1360" y1="1104" y2="1296" x1="1360" />
            <wire x2="1600" y1="1296" y2="1296" x1="1360" />
            <wire x2="1168" y1="1104" y2="1184" x1="1168" />
        </branch>
        <instance x="1600" y="1328" name="XLXI_11" orien="R0">
        </instance>
        <branch name="ONE">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="1488" y="1104" type="branch" />
            <wire x2="1600" y1="1104" y2="1104" x1="1488" />
        </branch>
        <branch name="clk">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="1488" y="1168" type="branch" />
            <wire x2="1600" y1="1168" y2="1168" x1="1488" />
        </branch>
        <branch name="reset">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="1488" y="1232" type="branch" />
            <wire x2="1600" y1="1232" y2="1232" x1="1488" />
        </branch>
        <instance x="672" y="880" name="XLXI_2" orien="R0">
        </instance>
        <branch name="ZERO">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="512" y="336" type="branch" />
            <wire x2="672" y1="336" y2="336" x1="512" />
        </branch>
        <branch name="clk">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="80" y="592" type="branch" />
            <wire x2="112" y1="592" y2="592" x1="80" />
            <wire x2="128" y1="592" y2="592" x1="112" />
        </branch>
        <branch name="ONE">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="80" y="528" type="branch" />
            <wire x2="112" y1="528" y2="528" x1="80" />
            <wire x2="128" y1="528" y2="528" x1="112" />
        </branch>
        <branch name="reset">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="96" y="656" type="branch" />
            <wire x2="112" y1="656" y2="656" x1="96" />
            <wire x2="128" y1="656" y2="656" x1="112" />
        </branch>
        <branch name="ZERO">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="528" y="400" type="branch" />
            <wire x2="672" y1="400" y2="400" x1="528" />
        </branch>
        <branch name="ZERO">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="528" y="464" type="branch" />
            <wire x2="672" y1="464" y2="464" x1="528" />
        </branch>
        <instance x="128" y="752" name="XLXI_14" orien="R0">
        </instance>
        <branch name="XLXN_75(8:0)">
            <wire x2="128" y1="720" y2="720" x1="80" />
            <wire x2="80" y1="720" y2="896" x1="80" />
            <wire x2="416" y1="896" y2="896" x1="80" />
            <wire x2="1264" y1="896" y2="896" x1="416" />
            <wire x2="416" y1="896" y2="1104" x1="416" />
            <wire x2="592" y1="1104" y2="1104" x1="416" />
            <wire x2="624" y1="1104" y2="1104" x1="592" />
            <wire x2="624" y1="1104" y2="1248" x1="624" />
            <wire x2="656" y1="1248" y2="1248" x1="624" />
            <wire x2="1264" y1="848" y2="848" x1="1200" />
            <wire x2="1264" y1="848" y2="896" x1="1264" />
        </branch>
        <branch name="XLXN_77(8:0)">
            <wire x2="672" y1="528" y2="528" x1="560" />
        </branch>
        <branch name="JTarget(8:0)">
            <attrtext style="alignment:SOFT-BCENTER" attrname="Name" x="625" y="592" type="branch" />
            <wire x2="625" y1="592" y2="592" x1="608" />
            <wire x2="672" y1="592" y2="592" x1="625" />
        </branch>
        <instance x="656" y="1280" name="XLXI_15" orien="R0">
        </instance>
        <iomarker fontsize="28" x="2352" y="1600" name="REG_Instruction(15:0)" orien="R0" />
    </sheet>
</drawing>