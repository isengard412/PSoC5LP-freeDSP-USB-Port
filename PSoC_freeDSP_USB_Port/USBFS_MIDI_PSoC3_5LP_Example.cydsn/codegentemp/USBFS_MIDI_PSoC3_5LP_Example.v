// ======================================================================
// USBFS_MIDI_PSoC3_5LP_Example.v generated from TopDesign.cysch
// 04/29/2016 at 14:23
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

/* -- WARNING: The following section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_DIE_LEOPARD 1
`define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
`define CYDEV_CHIP_REV_LEOPARD_ES3 3
`define CYDEV_CHIP_REV_LEOPARD_ES2 1
`define CYDEV_CHIP_REV_LEOPARD_ES1 0
`define CYDEV_CHIP_DIE_TMA4 2
`define CYDEV_CHIP_REV_TMA4_PRODUCTION 17
`define CYDEV_CHIP_REV_TMA4_ES 17
`define CYDEV_CHIP_REV_TMA4_ES2 33
`define CYDEV_CHIP_DIE_PSOC4A 3
`define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17
`define CYDEV_CHIP_REV_PSOC4A_ES0 17
`define CYDEV_CHIP_DIE_PSOC5LP 4
`define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC5LP_ES0 0
`define CYDEV_CHIP_DIE_PANTHER 5
`define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1
`define CYDEV_CHIP_REV_PANTHER_ES1 1
`define CYDEV_CHIP_REV_PANTHER_ES0 0
`define CYDEV_CHIP_DIE_EXPECT 4
`define CYDEV_CHIP_REV_EXPECT 0
`define CYDEV_CHIP_DIE_ACTUAL 4
/* -- WARNING: The previous section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_MEMBER_4G 2
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 3
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 4
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 5
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 6
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 7
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 8
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 9
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 10
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 11
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4F 12
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4M 13
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 14
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 15
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4C 16
`define CYDEV_CHIP_REVISION_4C_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_MEMBER_5B 17
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 18
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_FAMILY_USED 3
`define CYDEV_CHIP_MEMBER_USED 17
`define CYDEV_CHIP_REVISION_USED 0
// SleepTimer_v3_20(EnableInt=true, Interval=2, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMPONENT_NAME=SleepTimer_v3_20, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=SleepTimer, CY_INSTANCE_SHORT_NAME=SleepTimer, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=20, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 SP1, INSTANCE_NAME=SleepTimer, )
module SleepTimer_v3_20_0 (
    interrupt);
    output      interrupt;




	cy_gsref_v1_0
		#(.guid("0335EFD7-9943-4db5-B556-454A5AD8A118"))
		gsRef_1
		 (.sig_out(interrupt));




endmodule

// Component: not_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\not_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\not_v1_0\not_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\not_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\not_v1_0\not_v1_0.v"
`endif

// Component: cy_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`endif

// Component: B_UART_v2_50
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\B_UART_v2_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\B_UART_v2_50\B_UART_v2_50.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\B_UART_v2_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\B_UART_v2_50\B_UART_v2_50.v"
`endif

// UART_v2_50(Address1=0, Address2=0, BaudRate=38400, BreakBitsRX=13, BreakBitsTX=13, BreakDetect=false, CRCoutputsEn=false, Enable_RX=1, Enable_RXIntInterrupt=1, Enable_TX=1, Enable_TXIntInterrupt=1, EnableHWAddress=0, EnIntRXInterrupt=true, EnIntTXInterrupt=true, FlowControl=0, HalfDuplexEn=false, HwTXEnSignal=false, InternalClock=false, InternalClockToleranceMinus=5.25315789473684, InternalClockTolerancePlus=3.93736842105263, InternalClockUsed=0, InterruptOnAddDetect=0, InterruptOnAddressMatch=0, InterruptOnBreak=0, InterruptOnByteRcvd=1, InterruptOnOverrunError=0, InterruptOnParityError=0, InterruptOnStopError=0, InterruptOnTXComplete=false, InterruptOnTXFifoEmpty=true, InterruptOnTXFifoFull=false, InterruptOnTXFifoNotFull=false, IntOnAddressDetect=false, IntOnAddressMatch=false, IntOnBreak=false, IntOnByteRcvd=true, IntOnOverrunError=false, IntOnParityError=false, IntOnStopError=false, NumDataBits=8, NumStopBits=1, OverSamplingRate=8, ParityType=0, ParityTypeSw=false, RequiredClock=307200, RXAddressMode=0, RXBufferSize=255, RxBuffRegSizeReplacementString=uint8, RXEnable=true, TXBitClkGenDP=true, TXBufferSize=255, TxBuffRegSizeReplacementString=uint8, TXEnable=true, Use23Polling=false, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMPONENT_NAME=UART_v2_50, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=MIDI1_UART, CY_INSTANCE_SHORT_NAME=MIDI1_UART, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=50, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 SP1, INSTANCE_NAME=MIDI1_UART, )
module UART_v2_50_1 (
    rx_clk,
    rx_data,
    tx_clk,
    tx_data,
    rx_interrupt,
    tx_interrupt,
    tx,
    tx_en,
    rts_n,
    reset,
    cts_n,
    clock,
    rx);
    output      rx_clk;
    output      rx_data;
    output      tx_clk;
    output      tx_data;
    output      rx_interrupt;
    output      tx_interrupt;
    output      tx;
    output      tx_en;
    output      rts_n;
    input       reset;
    input       cts_n;
    input       clock;
    input       rx;

    parameter Address1 = 0;
    parameter Address2 = 0;
    parameter EnIntRXInterrupt = 1;
    parameter EnIntTXInterrupt = 1;
    parameter FlowControl = 0;
    parameter HalfDuplexEn = 0;
    parameter HwTXEnSignal = 0;
    parameter NumDataBits = 8;
    parameter NumStopBits = 1;
    parameter ParityType = 0;
    parameter RXEnable = 1;
    parameter TXEnable = 1;

          wire  Net_289;
          wire  Net_61;
          wire  Net_9;


	cy_isr_v1_0
		#(.int_type(2'b10))
		TXInternalInterrupt
		 (.int_signal(tx_interrupt));



	cy_isr_v1_0
		#(.int_type(2'b10))
		RXInternalInterrupt
		 (.int_signal(rx_interrupt));


	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_61 = clock;

    B_UART_v2_50 BUART (
        .cts_n(cts_n),
        .tx(tx),
        .rts_n(rts_n),
        .tx_en(tx_en),
        .clock(Net_61),
        .reset(reset),
        .rx(rx),
        .tx_interrupt(tx_interrupt),
        .rx_interrupt(rx_interrupt),
        .tx_data(tx_data),
        .tx_clk(tx_clk),
        .rx_data(rx_data),
        .rx_clk(rx_clk));
    defparam BUART.Address1 = 0;
    defparam BUART.Address2 = 0;
    defparam BUART.BreakBitsRX = 13;
    defparam BUART.BreakBitsTX = 13;
    defparam BUART.BreakDetect = 0;
    defparam BUART.CRCoutputsEn = 0;
    defparam BUART.FlowControl = 0;
    defparam BUART.HalfDuplexEn = 0;
    defparam BUART.HwTXEnSignal = 0;
    defparam BUART.NumDataBits = 8;
    defparam BUART.NumStopBits = 1;
    defparam BUART.OverSampleCount = 8;
    defparam BUART.ParityType = 0;
    defparam BUART.ParityTypeSw = 0;
    defparam BUART.RXAddressMode = 0;
    defparam BUART.RXEnable = 1;
    defparam BUART.RXStatusIntEnable = 1;
    defparam BUART.TXBitClkGenDP = 1;
    defparam BUART.TXEnable = 1;
    defparam BUART.Use23Polling = 0;



endmodule

// UART_v2_50(Address1=0, Address2=0, BaudRate=38400, BreakBitsRX=13, BreakBitsTX=13, BreakDetect=false, CRCoutputsEn=false, Enable_RX=1, Enable_RXIntInterrupt=1, Enable_TX=1, Enable_TXIntInterrupt=1, EnableHWAddress=0, EnIntRXInterrupt=true, EnIntTXInterrupt=true, FlowControl=0, HalfDuplexEn=false, HwTXEnSignal=false, InternalClock=false, InternalClockToleranceMinus=5.25315789473684, InternalClockTolerancePlus=3.93736842105263, InternalClockUsed=0, InterruptOnAddDetect=0, InterruptOnAddressMatch=0, InterruptOnBreak=0, InterruptOnByteRcvd=1, InterruptOnOverrunError=0, InterruptOnParityError=0, InterruptOnStopError=0, InterruptOnTXComplete=false, InterruptOnTXFifoEmpty=true, InterruptOnTXFifoFull=false, InterruptOnTXFifoNotFull=false, IntOnAddressDetect=false, IntOnAddressMatch=false, IntOnBreak=false, IntOnByteRcvd=true, IntOnOverrunError=false, IntOnParityError=false, IntOnStopError=false, NumDataBits=8, NumStopBits=1, OverSamplingRate=8, ParityType=0, ParityTypeSw=false, RequiredClock=307200, RXAddressMode=0, RXBufferSize=255, RxBuffRegSizeReplacementString=uint8, RXEnable=true, TXBitClkGenDP=true, TXBufferSize=255, TxBuffRegSizeReplacementString=uint8, TXEnable=true, Use23Polling=false, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMPONENT_NAME=UART_v2_50, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=MIDI2_UART, CY_INSTANCE_SHORT_NAME=MIDI2_UART, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=50, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 SP1, INSTANCE_NAME=MIDI2_UART, )
module UART_v2_50_2 (
    rx_clk,
    rx_data,
    tx_clk,
    tx_data,
    rx_interrupt,
    tx_interrupt,
    tx,
    tx_en,
    rts_n,
    reset,
    cts_n,
    clock,
    rx);
    output      rx_clk;
    output      rx_data;
    output      tx_clk;
    output      tx_data;
    output      rx_interrupt;
    output      tx_interrupt;
    output      tx;
    output      tx_en;
    output      rts_n;
    input       reset;
    input       cts_n;
    input       clock;
    input       rx;

    parameter Address1 = 0;
    parameter Address2 = 0;
    parameter EnIntRXInterrupt = 1;
    parameter EnIntTXInterrupt = 1;
    parameter FlowControl = 0;
    parameter HalfDuplexEn = 0;
    parameter HwTXEnSignal = 0;
    parameter NumDataBits = 8;
    parameter NumStopBits = 1;
    parameter ParityType = 0;
    parameter RXEnable = 1;
    parameter TXEnable = 1;

          wire  Net_289;
          wire  Net_61;
          wire  Net_9;


	cy_isr_v1_0
		#(.int_type(2'b10))
		TXInternalInterrupt
		 (.int_signal(tx_interrupt));



	cy_isr_v1_0
		#(.int_type(2'b10))
		RXInternalInterrupt
		 (.int_signal(rx_interrupt));


	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_61 = clock;

    B_UART_v2_50 BUART (
        .cts_n(cts_n),
        .tx(tx),
        .rts_n(rts_n),
        .tx_en(tx_en),
        .clock(Net_61),
        .reset(reset),
        .rx(rx),
        .tx_interrupt(tx_interrupt),
        .rx_interrupt(rx_interrupt),
        .tx_data(tx_data),
        .tx_clk(tx_clk),
        .rx_data(rx_data),
        .rx_clk(rx_clk));
    defparam BUART.Address1 = 0;
    defparam BUART.Address2 = 0;
    defparam BUART.BreakBitsRX = 13;
    defparam BUART.BreakBitsTX = 13;
    defparam BUART.BreakDetect = 0;
    defparam BUART.CRCoutputsEn = 0;
    defparam BUART.FlowControl = 0;
    defparam BUART.HalfDuplexEn = 0;
    defparam BUART.HwTXEnSignal = 0;
    defparam BUART.NumDataBits = 8;
    defparam BUART.NumStopBits = 1;
    defparam BUART.OverSampleCount = 8;
    defparam BUART.ParityType = 0;
    defparam BUART.ParityTypeSw = 0;
    defparam BUART.RXAddressMode = 0;
    defparam BUART.RXEnable = 1;
    defparam BUART.RXStatusIntEnable = 1;
    defparam BUART.TXBitClkGenDP = 1;
    defparam BUART.TXEnable = 1;
    defparam BUART.Use23Polling = 0;



endmodule

// Component: ZeroTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\3.3\PSoC Creator\psoc\content\cyprimitives\CyPrimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`endif

// USBFS_v3_0(AudioDescriptors=<?xml version="1.0" encoding="utf-16"?> <Tree xmlns:CustomizerVersion="2_20">   <Tree_x0020_Descriptors>     <DescriptorNode Key="Audio">       <Nodes />     </DescriptorNode>   </Tree_x0020_Descriptors> </Tree>, CDCDescriptors=<?xml version="1.0" encoding="utf-16"?> <Tree xmlns:CustomizerVersion="2_20">   <Tree_x0020_Descriptors>     <DescriptorNode Key="CDC">       <Nodes />     </DescriptorNode>   </Tree_x0020_Descriptors> </Tree>, DeviceDescriptors=<?xml version="1.0" encoding="utf-16"?> <Tree xmlns:CustomizerVersion="2_20">   <Tree_x0020_Descriptors>     <DescriptorNode Key="Device">       <Nodes>         <DescriptorNode Key="USBDescriptor762">           <Value d6p1:type="DeviceDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">             <bDescriptorType>DEVICE</bDescriptorType>             <bLength>18</bLength>             <iwManufacturer>789</iwManufacturer>             <iwProduct>790</iwProduct>             <sManufacturer>Cypress</sManufacturer>             <sProduct>USB MIDI</sProduct>             <bDeviceClass>0</bDeviceClass>             <bDeviceSubClass>0</bDeviceSubClass>             <bDeviceProtocol>0</bDeviceProtocol>             <bMaxPacketSize0>0</bMaxPacketSize0>             <idVendor>1204</idVendor>             <idProduct>53810</idProduct>             <bcdDevice>0</bcdDevice>             <iManufacturer>1</iManufacturer>             <iProduct>2</iProduct>             <iSerialNumber>128</iSerialNumber>             <bNumConfigurations>1</bNumConfigurations>             <bMemoryMgmt>0</bMemoryMgmt>             <bMemoryAlloc>0</bMemoryAlloc>           </Value>           <Nodes>             <DescriptorNode Key="USBDescriptor763">               <Value d8p1:type="ConfigDescriptor" xmlns:d8p1="http://www.w3.org/2001/XMLSchema-instance">                 <bDescriptorType>CONFIGURATION</bDescriptorType>                 <bLength>9</bLength>                 <iwConfiguration>790</iwConfiguration>                 <sConfiguration>USB MIDI</sConfiguration>                 <wTotalLength>133</wTotalLength>                 <bNumInterfaces>2</bNumInterfaces>                 <bConfigurationValue>0</bConfigurationValue>                 <iConfiguration>2</iConfiguration>                 <bmAttributes>128</bmAttributes>                 <bMaxPower>50</bMaxPower>               </Value>               <Nodes>                 <DescriptorNode Key="Interface773">                   <Value d10p1:type="InterfaceGeneralDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">                     <bDescriptorType>ALTERNATE</bDescriptorType>                     <bLength>0</bLength>                     <DisplayName>MIDI Interface Control</DisplayName>                   </Value>                   <Nodes>                     <DescriptorNode Key="USBDescriptor772">                       <Value d12p1:type="CyAudioInterfaceDescriptor" xmlns:d12p1="http://www.w3.org/2001/XMLSchema-instance">                         <bDescriptorType>INTERFACE</bDescriptorType>                         <bLength>9</bLength>                         <iwInterface>794</iwInterface>                         <bInterfaceClass>1</bInterfaceClass>                         <bNumEndpoints>0</bNumEndpoints>                         <bInterfaceSubClass>1</bInterfaceSubClass>                         <bInterfaceProtocol>0</bInterfaceProtocol>                         <iInterface>6</iInterface>                         <sInterface>MIDI Interface</sInterface>                       </Value>                       <Nodes>                         <DescriptorNode Key="USBDescriptor774">                           <Value d14p1:type="CyACHeaderDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">                             <bDescriptorType>AUDIO</bDescriptorType>                             <bLength>9</bLength>                             <bDescriptorSubtype>HEADER</bDescriptorSubtype>                             <bcdADC>256</bcdADC>                             <wTotalLength>9</wTotalLength>                             <bInCollection>1</bInCollection>                             <baInterfaceNr>AQ==</baInterfaceNr>                           </Value>                           <Nodes />                         </DescriptorNode>                       </Nodes>                     </DescriptorNode>                   </Nodes>                 </DescriptorNode>                 <DescriptorNode Key="Interface786">                   <Value d10p1:type="InterfaceGeneralDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">                     <bDescriptorType>ALTERNATE</bDescriptorType>                     <bLength>0</bLength>                     <DisplayName>MIDI Interface Streaming</DisplayName>                   </Value>                   <Nodes>                     <DescriptorNode Key="USBDescriptor775">                       <Value d12p1:type="CyAudioInterfaceDescriptor" xmlns:d12p1="http://www.w3.org/2001/XMLSchema-instance">                         <bDescriptorType>INTERFACE</bDescriptorType>                         <bLength>9</bLength>                         <iwInterface>793</iwInterface>                         <bInterfaceClass>1</bInterfaceClass>                         <bInterfaceNumber>1</bInterfaceNumber>                         <bNumEndpoints>2</bNumEndpoints>                         <bInterfaceSubClass>3</bInterfaceSubClass>                         <bInterfaceProtocol>0</bInterfaceProtocol>                         <iInterface>5</iInterface>                         <sInterface>MIDI Streaming Intf</sInterface>                       </Value>                       <Nodes>                         <DescriptorNode Key="USBDescriptor776">                           <Value d14p1:type="CyMSHeaderDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">                             <bDescriptorType>AUDIO</bDescriptorType>                             <bLength>7</bLength>                             <bDescriptorSubtype>MS_HEADER</bDescriptorSubtype>                             <wTotalLength>67</wTotalLength>                           </Value>                           <Nodes />                         </DescriptorNode>                         <DescriptorNode Key="USBDescriptor787">                           <Value d14p1:type="CyMSInJackDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">                             <bDescriptorType>AUDIO</bDescriptorType>                             <bLength>6</bLength>                             <iwJack>791</iwJack>                             <bDescriptorSubtype>MIDI_IN_JACK</bDescriptorSubtype>                             <bJackType>EMBEDDED</bJackType>                             <bJackID>1</bJackID>                             <iJack>3</iJack>                             <sJack>MIDI IN</sJack>                           </Value>                           <Nodes />                         </DescriptorNode>                         <DescriptorNode Key="USBDescriptor788">                           <Value d14p1:type="CyMSInJackDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">                             <bDescriptorType>AUDIO</bDescriptorType>                             <bLength>6</bLength>                             <iwJack>791</iwJack>                             <bDescriptorSubtype>MIDI_IN_JACK</bDescriptorSubtype>                             <bJackType>EXTERNAL</bJackType>                             <bJackID>2</bJackID>                             <iJack>3</iJack>                             <sJack>MIDI IN</sJack>                           </Value>                           <Nodes />                         </DescriptorNode>                         <DescriptorNode Key="USBDescriptor779">                           <Value d14p1:type="CyMSOutJackDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">                             <bDescriptorType>AUDIO</bDescriptorType>                             <bLength>9</bLength>                             <iwJack>792</iwJack>                             <bDescriptorSubtype>MIDI_OUT_JACK</bDescriptorSubtype>                             <bJackType>EMBEDDED</bJackType>                             <bJackID>3</bJackID>                             <bNrInputPins>1</bNrInputPins>                             <baSourceID>Ag==</baSourceID>                             <baSourcePin>AQ==</baSourcePin>                             <iJack>4</iJack>                             <sJack>MIDI OUT</sJack>                           </Value>                           <Nodes />                         </DescriptorNode>                         <DescriptorNode Key="USBDescriptor780">                           <Value d14p1:type="CyMSOutJackDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">                             <bDescriptorType>AUDIO</bDescriptorType>                             <bLength>9</bLength>                             <iwJack>792</iwJack>                             <bDescriptorSubtype>MIDI_OUT_JACK</bDescriptorSubtype>                             <bJackType>EXTERNAL</bJackType>                             <bJackID>4</bJackID>                             <bNrInputPins>1</bNrInputPins>                             <baSourceID>AQ==</baSourceID>                             <baSourcePin>AQ==</baSourcePin>                             <iJack>4</iJack>                             <sJack>MIDI OUT</sJack>                           </Value>                           <Nodes />                         </DescriptorNode>                         <DescriptorNode Key="USBDescriptor781">                           <Value d14p1:type="CyAudioEndpointDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">                             <bDescriptorType>ENDPOINT</bDescriptorType>                             <bLength>9</bLength>                             <DoubleBuffer>false</DoubleBuffer>                             <bInterval>0</bInterval>                             <bEndpointAddress>129</bEndpointAddress>                             <bmAttributes>2</bmAttributes>                             <wMaxPacketSize>32</wMaxPacketSize>                           </Value>                           <Nodes>                             <DescriptorNode Key="USBDescriptor782">                               <Value d16p1:type="CyMSEndpointDescriptor" xmlns:d16p1="http://www.w3.org/2001/XMLSchema-instance">                                 <bDescriptorType>CS_ENDPOINT</bDescriptorType>                                 <bLength>6</bLength>                                 <bDescriptorSubtype>MS_GENERAL</bDescriptorSubtype>                                 <bNumEmbMIDIJack>2</bNumEmbMIDIJack>                                 <baAssocJackID>Awc=</baAssocJackID>                               </Value>                               <Nodes />                             </DescriptorNode>                           </Nodes>                         </DescriptorNode>                         <DescriptorNode Key="USBDescriptor783">                           <Value d14p1:type="CyAudioEndpointDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">                             <bDescriptorType>ENDPOINT</bDescriptorType>                             <bLength>9</bLength>                             <DoubleBuffer>false</DoubleBuffer>                             <bInterval>0</bInterval>                             <bEndpointAddress>2</bEndpointAddress>                             <bmAttributes>2</bmAttributes>                             <wMaxPacketSize>32</wMaxPacketSize>                           </Value>                           <Nodes>                             <DescriptorNode Key="USBDescriptor784">                               <Value d16p1:type="CyMSEndpointDescriptor" xmlns:d16p1="http://www.w3.org/2001/XMLSchema-instance">                                 <bDescriptorType>CS_ENDPOINT</bDescriptorType>                                 <bLength>6</bLength>                                 <bDescriptorSubtype>MS_GENERAL</bDescriptorSubtype>                                 <bNumEmbMIDIJack>2</bNumEmbMIDIJack>                                 <baAssocJackID>AQU=</baAssocJackID>                               </Value>                               <Nodes />                             </DescriptorNode>                           </Nodes>                         </DescriptorNode>                         <DescriptorNode Key="USBDescriptor859">                           <Value d14p1:type="CyMSInJackDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">                             <bDescriptorType>AUDIO</bDescriptorType>                             <bLength>6</bLength>                             <iwJack>861</iwJack>                             <bDescriptorSubtype>MIDI_IN_JACK</bDescriptorSubtype>                             <bJackType>EMBEDDED</bJackType>                             <bJackID>5</bJackID>                             <iJack>7</iJack>                             <sJack>MIDI IN 2</sJack>                           </Value>                           <Nodes />                         </DescriptorNode>                         <DescriptorNode Key="USBDescriptor860">                           <Value d14p1:type="CyMSInJackDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">                             <bDescriptorType>AUDIO</bDescriptorType>                             <bLength>6</bLength>                             <iwJack>861</iwJack>                             <bDescriptorSubtype>MIDI_IN_JACK</bDescriptorSubtype>                             <bJackType>EXTERNAL</bJackType>                             <bJackID>6</bJackID>                             <iJack>7</iJack>                             <sJack>MIDI IN 2</sJack>                           </Value>                           <Nodes />                         </DescriptorNode>                         <DescriptorNode Key="USBDescriptor864">                           <Value d14p1:type="CyMSOutJackDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">                             <bDescriptorType>AUDIO</bDescriptorType>                             <bLength>9</bLength>                             <iwJack>792</iwJack>                             <bDescriptorSubtype>MIDI_OUT_JACK</bDescriptorSubtype>                             <bJackType>EMBEDDED</bJackType>                             <bJackID>7</bJackID>                             <bNrInputPins>1</bNrInputPins>                             <baSourceID>Bg==</baSourceID>                             <baSourcePin>AQ==</baSourcePin>                             <iJack>4</iJack>                             <sJack>MIDI OUT</sJack>                           </Value>                           <Nodes />                         </DescriptorNode>                         <DescriptorNode Key="USBDescriptor865">                           <Value d14p1:type="CyMSOutJackDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">                             <bDescriptorType>AUDIO</bDescriptorType>                             <bLength>9</bLength>                             <iwJack>862</iwJack>                             <bDescriptorSubtype>MIDI_OUT_JACK</bDescriptorSubtype>                             <bJackType>EXTERNAL</bJackType>                             <bJackID>8</bJackID>                             <bNrInputPins>1</bNrInputPins>                             <baSourceID>BQ==</baSourceID>                             <baSourcePin>AQ==</baSourcePin>                             <iJack>8</iJack>                             <sJack>MIDI OUT 2</sJack>                           </Value>                           <Nodes />                         </DescriptorNode>                       </Nodes>                     </DescriptorNode>                   </Nodes>                 </DescriptorNode>               </Nodes>             </DescriptorNode>           </Nodes>         </DescriptorNode>       </Nodes>     </DescriptorNode>   </Tree_x0020_Descriptors> </Tree>, DmaChannelPriority=3, DW_Hide_DmaAuto=true, DW_Hide_Usbv2Regs=true, DW_RegSize=8, DW_USB_CHGDET_CTRL=CR0, DW_USB_INTR_CAUSE_HI=CR0, DW_USB_INTR_CAUSE_LO=CR0, DW_USB_INTR_CAUSE_MED=CR0, DW_USB_INTR_LVL_SEL=CR0, DW_USB_INTR_SIE=CR0, DW_USB_INTR_SIE_MASK=CR0, DW_USB_LPM_CTRL=CR0, DW_USB_LPM_STAT=CR0, DW_USB_POWER_CTRL=CR0, EnableBatteryChargDetect=false, EnableCDCApi=false, EnableMidiApi=true, endpointMA=0, endpointMM=0, epDMAautoOptimization=false, extern_cls=false, extern_vbus=false, extern_vnd=false, extJackCount=2, Gen16bitEpAccessApi=true, HandleMscRequests=true, HIDReportDescriptors=<?xml version="1.0" encoding="utf-16"?> <Tree xmlns:CustomizerVersion="2_20">   <Tree_x0020_Descriptors>     <DescriptorNode Key="HIDReport">       <Nodes />     </DescriptorNode>   </Tree_x0020_Descriptors> </Tree>, isrGroupArbiter=0, isrGroupBusReset=2, isrGroupEp0=1, isrGroupEp1=1, isrGroupEp2=1, isrGroupEp3=1, isrGroupEp4=1, isrGroupEp5=1, isrGroupEp6=1, isrGroupEp7=1, isrGroupEp8=1, isrGroupLpm=0, isrGroupSof=2, M0S8USBDSS_BLOCK_COUNT_1=0, max_interfaces_num=2, MidiDescriptors=<?xml version="1.0" encoding="utf-16"?> <Tree xmlns:CustomizerVersion="2_20">   <Tree_x0020_Descriptors>     <DescriptorNode Key="Midi">       <Nodes>         <DescriptorNode Key="Interface773">           <Value d6p1:type="InterfaceGeneralDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">             <bDescriptorType>ALTERNATE</bDescriptorType>             <bLength>0</bLength>             <DisplayName>MIDI Interface Control</DisplayName>           </Value>           <Nodes>             <DescriptorNode Key="USBDescriptor772">               <Value d8p1:type="CyAudioInterfaceDescriptor" xmlns:d8p1="http://www.w3.org/2001/XMLSchema-instance">                 <bDescriptorType>INTERFACE</bDescriptorType>                 <bLength>9</bLength>                 <iwInterface>794</iwInterface>                 <bInterfaceClass>1</bInterfaceClass>                 <bNumEndpoints>0</bNumEndpoints>                 <bInterfaceSubClass>1</bInterfaceSubClass>                 <bInterfaceProtocol>0</bInterfaceProtocol>                 <iInterface>6</iInterface>                 <sInterface>MIDI Interface</sInterface>               </Value>               <Nodes>                 <DescriptorNode Key="USBDescriptor774">                   <Value d10p1:type="CyACHeaderDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">                     <bDescriptorType>AUDIO</bDescriptorType>                     <bLength>9</bLength>                     <bDescriptorSubtype>HEADER</bDescriptorSubtype>                     <bcdADC>256</bcdADC>                     <wTotalLength>9</wTotalLength>                     <bInCollection>1</bInCollection>                     <baInterfaceNr>AQ==</baInterfaceNr>                   </Value>                   <Nodes />                 </DescriptorNode>               </Nodes>             </DescriptorNode>           </Nodes>         </DescriptorNode>         <DescriptorNode Key="Interface786">           <Value d6p1:type="InterfaceGeneralDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">             <bDescriptorType>ALTERNATE</bDescriptorType>             <bLength>0</bLength>             <DisplayName>MIDI Interface Streaming</DisplayName>           </Value>           <Nodes>             <DescriptorNode Key="USBDescriptor775">               <Value d8p1:type="CyAudioInterfaceDescriptor" xmlns:d8p1="http://www.w3.org/2001/XMLSchema-instance">                 <bDescriptorType>INTERFACE</bDescriptorType>                 <bLength>9</bLength>                 <iwInterface>793</iwInterface>                 <bInterfaceClass>1</bInterfaceClass>                 <bInterfaceNumber>1</bInterfaceNumber>                 <bNumEndpoints>2</bNumEndpoints>                 <bInterfaceSubClass>3</bInterfaceSubClass>                 <bInterfaceProtocol>0</bInterfaceProtocol>                 <iInterface>5</iInterface>                 <sInterface>MIDI Streaming Intf</sInterface>               </Value>               <Nodes>                 <DescriptorNode Key="USBDescriptor776">                   <Value d10p1:type="CyMSHeaderDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">                     <bDescriptorType>AUDIO</bDescriptorType>                     <bLength>7</bLength>                     <bDescriptorSubtype>MS_HEADER</bDescriptorSubtype>                     <wTotalLength>67</wTotalLength>                   </Value>                   <Nodes />                 </DescriptorNode>                 <DescriptorNode Key="USBDescriptor787">                   <Value d10p1:type="CyMSInJackDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">                     <bDescriptorType>AUDIO</bDescriptorType>                     <bLength>6</bLength>                     <iwJack>791</iwJack>                     <bDescriptorSubtype>MIDI_IN_JACK</bDescriptorSubtype>                     <bJackType>EMBEDDED</bJackType>                     <bJackID>1</bJackID>                     <iJack>3</iJack>                     <sJack>MIDI IN</sJack>                   </Value>                   <Nodes />                 </DescriptorNode>                 <DescriptorNode Key="USBDescriptor788">                   <Value d10p1:type="CyMSInJackDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">                     <bDescriptorType>AUDIO</bDescriptorType>                     <bLength>6</bLength>                     <iwJack>791</iwJack>                     <bDescriptorSubtype>MIDI_IN_JACK</bDescriptorSubtype>                     <bJackType>EXTERNAL</bJackType>                     <bJackID>2</bJackID>                     <iJack>3</iJack>                     <sJack>MIDI IN</sJack>                   </Value>                   <Nodes />                 </DescriptorNode>                 <DescriptorNode Key="USBDescriptor779">                   <Value d10p1:type="CyMSOutJackDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">                     <bDescriptorType>AUDIO</bDescriptorType>                     <bLength>9</bLength>                     <iwJack>792</iwJack>                     <bDescriptorSubtype>MIDI_OUT_JACK</bDescriptorSubtype>                     <bJackType>EMBEDDED</bJackType>                     <bJackID>3</bJackID>                     <bNrInputPins>1</bNrInputPins>                     <baSourceID>Ag==</baSourceID>                     <baSourcePin>AQ==</baSourcePin>                     <iJack>4</iJack>                     <sJack>MIDI OUT</sJack>                   </Value>                   <Nodes />                 </DescriptorNode>                 <DescriptorNode Key="USBDescriptor780">                   <Value d10p1:type="CyMSOutJackDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">                     <bDescriptorType>AUDIO</bDescriptorType>                     <bLength>9</bLength>                     <iwJack>792</iwJack>                     <bDescriptorSubtype>MIDI_OUT_JACK</bDescriptorSubtype>                     <bJackType>EXTERNAL</bJackType>                     <bJackID>4</bJackID>                     <bNrInputPins>1</bNrInputPins>                     <baSourceID>AQ==</baSourceID>                     <baSourcePin>AQ==</baSourcePin>                     <iJack>4</iJack>                     <sJack>MIDI OUT</sJack>                   </Value>                   <Nodes />                 </DescriptorNode>                 <DescriptorNode Key="USBDescriptor781">                   <Value d10p1:type="CyAudioEndpointDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">                     <bDescriptorType>ENDPOINT</bDescriptorType>                     <bLength>9</bLength>                     <DoubleBuffer>false</DoubleBuffer>                     <bInterval>0</bInterval>                     <bEndpointAddress>129</bEndpointAddress>                     <bmAttributes>2</bmAttributes>                     <wMaxPacketSize>32</wMaxPacketSize>                   </Value>                   <Nodes>                     <DescriptorNode Key="USBDescriptor782">                       <Value d12p1:type="CyMSEndpointDescriptor" xmlns:d12p1="http://www.w3.org/2001/XMLSchema-instance">                         <bDescriptorType>CS_ENDPOINT</bDescriptorType>                         <bLength>6</bLength>                         <bDescriptorSubtype>MS_GENERAL</bDescriptorSubtype>                         <bNumEmbMIDIJack>2</bNumEmbMIDIJack>                         <baAssocJackID>Awc=</baAssocJackID>                       </Value>                       <Nodes />                     </DescriptorNode>                   </Nodes>                 </DescriptorNode>                 <DescriptorNode Key="USBDescriptor783">                   <Value d10p1:type="CyAudioEndpointDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">                     <bDescriptorType>ENDPOINT</bDescriptorType>                     <bLength>9</bLength>                     <DoubleBuffer>false</DoubleBuffer>                     <bInterval>0</bInterval>                     <bEndpointAddress>2</bEndpointAddress>                     <bmAttributes>2</bmAttributes>                     <wMaxPacketSize>32</wMaxPacketSize>                   </Value>                   <Nodes>                     <DescriptorNode Key="USBDescriptor784">                       <Value d12p1:type="CyMSEndpointDescriptor" xmlns:d12p1="http://www.w3.org/2001/XMLSchema-instance">                         <bDescriptorType>CS_ENDPOINT</bDescriptorType>                         <bLength>6</bLength>                         <bDescriptorSubtype>MS_GENERAL</bDescriptorSubtype>                         <bNumEmbMIDIJack>2</bNumEmbMIDIJack>                         <baAssocJackID>AQU=</baAssocJackID>                       </Value>                       <Nodes />                     </DescriptorNode>                   </Nodes>                 </DescriptorNode>                 <DescriptorNode Key="USBDescriptor859">                   <Value d10p1:type="CyMSInJackDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">                     <bDescriptorType>AUDIO</bDescriptorType>                     <bLength>6</bLength>                     <iwJack>861</iwJack>                     <bDescriptorSubtype>MIDI_IN_JACK</bDescriptorSubtype>                     <bJackType>EMBEDDED</bJackType>                     <bJackID>5</bJackID>                     <iJack>7</iJack>                     <sJack>MIDI IN 2</sJack>                   </Value>                   <Nodes />                 </DescriptorNode>                 <DescriptorNode Key="USBDescriptor860">                   <Value d10p1:type="CyMSInJackDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">                     <bDescriptorType>AUDIO</bDescriptorType>                     <bLength>6</bLength>                     <iwJack>861</iwJack>                     <bDescriptorSubtype>MIDI_IN_JACK</bDescriptorSubtype>                     <bJackType>EXTERNAL</bJackType>                     <bJackID>6</bJackID>                     <iJack>7</iJack>                     <sJack>MIDI IN 2</sJack>                   </Value>                   <Nodes />                 </DescriptorNode>                 <DescriptorNode Key="USBDescriptor864">                   <Value d10p1:type="CyMSOutJackDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">                     <bDescriptorType>AUDIO</bDescriptorType>                     <bLength>9</bLength>                     <iwJack>792</iwJack>                     <bDescriptorSubtype>MIDI_OUT_JACK</bDescriptorSubtype>                     <bJackType>EMBEDDED</bJackType>                     <bJackID>7</bJackID>                     <bNrInputPins>1</bNrInputPins>                     <baSourceID>Bg==</baSourceID>                     <baSourcePin>AQ==</baSourcePin>                     <iJack>4</iJack>                     <sJack>MIDI OUT</sJack>                   </Value>                   <Nodes />                 </DescriptorNode>                 <DescriptorNode Key="USBDescriptor865">                   <Value d10p1:type="CyMSOutJackDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">                     <bDescriptorType>AUDIO</bDescriptorType>                     <bLength>9</bLength>                     <iwJack>862</iwJack>                     <bDescriptorSubtype>MIDI_OUT_JACK</bDescriptorSubtype>                     <bJackType>EXTERNAL</bJackType>                     <bJackID>8</bJackID>                     <bNrInputPins>1</bNrInputPins>                     <baSourceID>BQ==</baSourceID>                     <baSourcePin>AQ==</baSourcePin>                     <iJack>8</iJack>                     <sJack>MIDI OUT 2</sJack>                   </Value>                   <Nodes />                 </DescriptorNode>               </Nodes>             </DescriptorNode>           </Nodes>         </DescriptorNode>       </Nodes>     </DescriptorNode>   </Tree_x0020_Descriptors> </Tree>, Mode=true, mon_vbus=false, MscDescriptors=, MscLogicalUnitsNum=1, out_sof=false, Pid=F232, powerpad_vbus=false, PRIMITIVE_INSTANCE=USB, ProdactName=, ProdactRevision=, REG_SIZE=reg8, RemoveDmaAutoOpt=true, RemoveVbusPin=true, rm_arb_int=false, rm_dma_1=true, rm_dma_2=true, rm_dma_3=true, rm_dma_4=true, rm_dma_5=true, rm_dma_6=true, rm_dma_7=true, rm_dma_8=true, rm_dp_int=false, rm_ep_isr_0=false, rm_ep_isr_1=false, rm_ep_isr_2=false, rm_ep_isr_3=true, rm_ep_isr_4=true, rm_ep_isr_5=true, rm_ep_isr_6=true, rm_ep_isr_7=true, rm_ep_isr_8=true, rm_lpm_int=true, rm_ord_int=true, rm_sof_int=false, rm_usb_int=false, SofTermEnable=false, StringDescriptors=<?xml version="1.0" encoding="utf-16"?> <Tree xmlns:CustomizerVersion="2_20">   <Tree_x0020_Descriptors>     <DescriptorNode Key="String">       <Nodes>         <DescriptorNode Key="LANGID">           <Value d6p1:type="StringZeroDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">             <bDescriptorType>STRING</bDescriptorType>             <bLength>4</bLength>             <wLANGID>1033</wLANGID>           </Value>           <Nodes />         </DescriptorNode>         <DescriptorNode Key="USBDescriptor789">           <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">             <bDescriptorType>STRING</bDescriptorType>             <bLength>16</bLength>             <snType>USER_ENTERED_TEXT</snType>             <bString>Cypress</bString>             <bUsed>false</bUsed>           </Value>           <Nodes />         </DescriptorNode>         <DescriptorNode Key="USBDescriptor790">           <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">             <bDescriptorType>STRING</bDescriptorType>             <bLength>18</bLength>             <snType>USER_ENTERED_TEXT</snType>             <bString>USB MIDI</bString>             <bUsed>false</bUsed>           </Value>           <Nodes />         </DescriptorNode>         <DescriptorNode Key="USBDescriptor791">           <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">             <bDescriptorType>STRING</bDescriptorType>             <bLength>16</bLength>             <snType>USER_ENTERED_TEXT</snType>             <bString>MIDI IN</bString>             <bUsed>false</bUsed>           </Value>           <Nodes />         </DescriptorNode>         <DescriptorNode Key="USBDescriptor792">           <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">             <bDescriptorType>STRING</bDescriptorType>             <bLength>18</bLength>             <snType>USER_ENTERED_TEXT</snType>             <bString>MIDI OUT</bString>             <bUsed>false</bUsed>           </Value>           <Nodes />         </DescriptorNode>         <DescriptorNode Key="USBDescriptor793">           <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">             <bDescriptorType>STRING</bDescriptorType>             <bLength>40</bLength>             <snType>USER_ENTERED_TEXT</snType>             <bString>MIDI Streaming Intf</bString>             <bUsed>false</bUsed>           </Value>           <Nodes />         </DescriptorNode>         <DescriptorNode Key="USBDescriptor794">           <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">             <bDescriptorType>STRING</bDescriptorType>             <bLength>30</bLength>             <snType>USER_ENTERED_TEXT</snType>             <bString>MIDI Interface</bString>             <bUsed>false</bUsed>           </Value>           <Nodes />         </DescriptorNode>         <DescriptorNode Key="USBDescriptor861">           <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">             <bDescriptorType>STRING</bDescriptorType>             <bLength>20</bLength>             <snType>USER_ENTERED_TEXT</snType>             <bString>MIDI IN 2</bString>             <bUsed>false</bUsed>           </Value>           <Nodes />         </DescriptorNode>         <DescriptorNode Key="USBDescriptor862">           <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">             <bDescriptorType>STRING</bDescriptorType>             <bLength>22</bLength>             <snType>USER_ENTERED_TEXT</snType>             <bString>MIDI OUT 2</bString>             <bUsed>false</bUsed>           </Value>           <Nodes />         </DescriptorNode>       </Nodes>     </DescriptorNode>     <DescriptorNode Key="SpecialString">       <Nodes>         <DescriptorNode Key="Serial">           <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">             <bDescriptorType>STRING</bDescriptorType>             <bLength>2</bLength>             <snType>SILICON_NUMBER</snType>             <bUsed>true</bUsed>           </Value>           <Nodes />         </DescriptorNode>         <DescriptorNode Key="EE">           <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">             <bDescriptorType>STRING</bDescriptorType>             <bLength>16</bLength>             <snType>USER_ENTERED_TEXT</snType>             <bString>MSFT100</bString>             <bUsed>true</bUsed>           </Value>           <Nodes />         </DescriptorNode>       </Nodes>     </DescriptorNode>   </Tree_x0020_Descriptors> </Tree>, UINT_TYPE=uint8, VbusDetectTermEnable=false, VendorName=, Vid=04B4, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMPONENT_NAME=USBFS_v3_0, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=USB, CY_INSTANCE_SHORT_NAME=USB, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=0, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  3.3 SP1, INSTANCE_NAME=USB, )
module USBFS_v3_0_3 (
    sof,
    vbusdet);
    output      sof;
    input       vbusdet;

    parameter epDMAautoOptimization = 0;

          wire  Net_1914;
          wire  Net_1915;
          wire  Net_1916;
          wire  Net_1917;
          wire  Net_1918;
          wire  Net_1919;
          wire [7:0] dma_request;
          wire  Net_1920;
          wire  Net_1921;
          wire  Net_1922;
          wire [7:0] Net_2039;
          wire  Net_2038;
          wire  Net_2037;
          wire  EPs_1_to_7_dma_complete;
          wire  Net_2036;
          wire  Net_2035;
          wire  Net_2034;
          wire  Net_2033;
          wire  Net_2032;
          wire  Net_2031;
          wire  Net_2030;
          wire  Net_2029;
          wire  Net_2028;
          wire  Net_2027;
          wire  Net_2026;
          wire  Net_2025;
          wire  Net_2024;
          wire [7:0] Net_1940;
          wire  Net_1939;
          wire  Net_1938;
          wire  Net_1937;
          wire  Net_1936;
          wire  Net_1935;
          wire  Net_1934;
          wire  Net_1933;
          wire  Net_1932;
          wire  Net_2047;
          wire  Net_1202;
          wire  dma_terminate;
          wire [7:0] Net_2040;
          wire  Net_1010;
    electrical  Net_1000;
    electrical  Net_597;
          wire  Net_1495;
          wire  Net_1498;
          wire  Net_1559;
          wire  Net_1567;
          wire  Net_1576;
          wire  Net_1579;
          wire  Net_1591;
          wire [7:0] dma_complete;
          wire  Net_1588;
          wire  Net_1876;
          wire [8:0] ep_int;
          wire  Net_1889;
          wire  busClk;
          wire  Net_95;


	cy_isr_v1_0
		#(.int_type(2'b10))
		dp_int
		 (.int_signal(Net_1010));


	wire [0:0] tmpOE__Dm_net;
	wire [0:0] tmpFB_0__Dm_net;
	wire [0:0] tmpIO_0__Dm_net;
	wire [0:0] tmpINTERRUPT_0__Dm_net;
	electrical [0:0] tmpSIOVREF__Dm_net;

	cy_psoc3_pins_v1_10
		#(.id("207de35d-96fa-4d9c-93e8-b56a5d18b7b9/8b77a6c4-10a0-4390-971c-672353e2a49c"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("NONCONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(1),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Dm
		 (.oe(tmpOE__Dm_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Dm_net[0:0]}),
		  .analog({Net_597}),
		  .io({tmpIO_0__Dm_net[0:0]}),
		  .siovref(tmpSIOVREF__Dm_net),
		  .interrupt({tmpINTERRUPT_0__Dm_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Dm_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Dp_net;
	wire [0:0] tmpFB_0__Dp_net;
	wire [0:0] tmpIO_0__Dp_net;
	electrical [0:0] tmpSIOVREF__Dp_net;

	cy_psoc3_pins_v1_10
		#(.id("207de35d-96fa-4d9c-93e8-b56a5d18b7b9/618a72fc-5ddd-4df5-958f-a3d55102db42"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b10),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Dp
		 (.oe(tmpOE__Dp_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Dp_net[0:0]}),
		  .analog({Net_1000}),
		  .io({tmpIO_0__Dp_net[0:0]}),
		  .siovref(tmpSIOVREF__Dp_net),
		  .interrupt({Net_1010}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Dp_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    cy_psoc3_usb_v1_0 USB (
        .dp(Net_1000),
        .dm(Net_597),
        .sof_int(sof),
        .arb_int(Net_1889),
        .usb_int(Net_1876),
        .ept_int(ep_int[8:0]),
        .ord_int(Net_95),
        .dma_req(dma_request[7:0]),
        .dma_termin(dma_terminate));


	cy_isr_v1_0
		#(.int_type(2'b10))
		ep_2
		 (.int_signal(ep_int[2]));



	cy_isr_v1_0
		#(.int_type(2'b10))
		ep_1
		 (.int_signal(ep_int[1]));



	cy_isr_v1_0
		#(.int_type(2'b10))
		ep_0
		 (.int_signal(ep_int[0]));



	cy_isr_v1_0
		#(.int_type(2'b10))
		bus_reset
		 (.int_signal(Net_1876));



	cy_isr_v1_0
		#(.int_type(2'b10))
		arb_int
		 (.int_signal(Net_1889));



	cy_isr_v1_0
		#(.int_type(2'b10))
		sof_int
		 (.int_signal(sof));


	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign dma_complete[0] = Net_1922;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_1922));

	// VirtualMux_2 (cy_virtualmux_v1_0)
	assign dma_complete[1] = Net_1921;

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_1921));

	// VirtualMux_3 (cy_virtualmux_v1_0)
	assign dma_complete[2] = Net_1920;

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_1920));

	// VirtualMux_4 (cy_virtualmux_v1_0)
	assign dma_complete[3] = Net_1919;

    ZeroTerminal ZeroTerminal_4 (
        .z(Net_1919));

	// VirtualMux_5 (cy_virtualmux_v1_0)
	assign dma_complete[4] = Net_1918;

	// VirtualMux_6 (cy_virtualmux_v1_0)
	assign dma_complete[5] = Net_1917;

    ZeroTerminal ZeroTerminal_5 (
        .z(Net_1918));

    ZeroTerminal ZeroTerminal_6 (
        .z(Net_1917));

	// VirtualMux_7 (cy_virtualmux_v1_0)
	assign dma_complete[6] = Net_1916;

	// VirtualMux_8 (cy_virtualmux_v1_0)
	assign dma_complete[7] = Net_1915;

    ZeroTerminal ZeroTerminal_7 (
        .z(Net_1916));

    ZeroTerminal ZeroTerminal_8 (
        .z(Net_1915));



endmodule

// top
module top ;

    electrical  Net_705;
    electrical  Net_704;
    electrical  Net_703;
    electrical  Net_702;
    electrical  Net_701;
    electrical  Net_700;
          wire  Net_699;
          wire  Net_698;
          wire  Net_697;
          wire  Net_696;
          wire  Net_695;
          wire  Net_694;
          wire  Net_693;
          wire  Net_692;
          wire  Net_691;
          wire  Net_690;
          wire  Net_689;
          wire  Net_688;
          wire  Net_687;
          wire  Net_686;
          wire  Net_685;
          wire  Net_684;
          wire  Net_683;
          wire  Net_682;
          wire  Net_681;
          wire  Net_680;
          wire  Net_679;
          wire  Net_678;
          wire  Net_677;
          wire  Net_676;
          wire  Net_675;
          wire  Net_674;
          wire  Net_673;
          wire  Net_672;
          wire  Net_671;
          wire  Net_317;
    electrical  Net_390;
    electrical  Net_386;
    electrical  Net_492;
    electrical  Net_407;
    electrical  Net_493;
    electrical  Net_582;
    electrical  Net_583;
    electrical  Net_365;
    electrical  Net_364;
    electrical  Net_372;
          wire  Net_355;
    electrical  Net_420;
    electrical  Net_456;
    electrical  Net_426;
    electrical  Net_441;
    electrical  Net_427;
    electrical  Net_433;
    electrical  Net_446;
    electrical  Net_449;
    electrical  Net_447;
    electrical  Net_448;
    electrical  Net_459;
    electrical  Net_461;
    electrical  Net_414;
    electrical  Net_413;
    electrical  Net_412;
    electrical  Net_409;
    electrical  Net_402;
    electrical  Net_389;
    electrical  Net_354;
    electrical  Net_352;
    electrical  Net_349;
    electrical  Net_346;
    electrical  Net_2671;

	wire [0:0] tmpOE__SW2_net;
	wire [0:0] tmpFB_0__SW2_net;
	wire [0:0] tmpIO_0__SW2_net;
	wire [0:0] tmpINTERRUPT_0__SW2_net;
	electrical [0:0] tmpSIOVREF__SW2_net;

	cy_psoc3_pins_v1_10
		#(.id("77c9720d-76e8-4e06-9af8-359f579c4b31"),
		  .drive_mode(3'b010),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b1),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		SW2
		 (.oe(tmpOE__SW2_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__SW2_net[0:0]}),
		  .io({tmpIO_0__SW2_net[0:0]}),
		  .siovref(tmpSIOVREF__SW2_net),
		  .interrupt({tmpINTERRUPT_0__SW2_net[0:0]}),
		  .annotation({Net_364}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__SW2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    SleepTimer_v3_20_0 SleepTimer (
        .interrupt(Net_317));

	wire [0:0] tmpOE__SW1_net;
	wire [0:0] tmpFB_0__SW1_net;
	wire [0:0] tmpIO_0__SW1_net;
	wire [0:0] tmpINTERRUPT_0__SW1_net;
	electrical [0:0] tmpSIOVREF__SW1_net;

	cy_psoc3_pins_v1_10
		#(.id("5e92a984-3b11-44ae-9f60-7d92fa6d9c1e"),
		  .drive_mode(3'b010),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b1),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		SW1
		 (.oe(tmpOE__SW1_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__SW1_net[0:0]}),
		  .io({tmpIO_0__SW1_net[0:0]}),
		  .siovref(tmpSIOVREF__SW1_net),
		  .interrupt({tmpINTERRUPT_0__SW1_net[0:0]}),
		  .annotation({Net_365}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__SW1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


    assign Net_672 = ~Net_671;


    assign Net_674 = ~Net_673;

	wire [0:0] tmpOE__MIDI_PWR_net;
	wire [0:0] tmpFB_0__MIDI_PWR_net;
	wire [0:0] tmpIO_0__MIDI_PWR_net;
	wire [0:0] tmpINTERRUPT_0__MIDI_PWR_net;
	electrical [0:0] tmpSIOVREF__MIDI_PWR_net;

	cy_psoc3_pins_v1_10
		#(.id("12f75402-8258-4a24-b9e9-c367efce01c5"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b1),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		MIDI_PWR
		 (.oe(tmpOE__MIDI_PWR_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__MIDI_PWR_net[0:0]}),
		  .io({tmpIO_0__MIDI_PWR_net[0:0]}),
		  .siovref(tmpSIOVREF__MIDI_PWR_net),
		  .interrupt({tmpINTERRUPT_0__MIDI_PWR_net[0:0]}),
		  .annotation({Net_459}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__MIDI_PWR_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__LED_OutB_net;
	wire [0:0] tmpFB_0__LED_OutB_net;
	wire [0:0] tmpIO_0__LED_OutB_net;
	wire [0:0] tmpINTERRUPT_0__LED_OutB_net;
	electrical [0:0] tmpSIOVREF__LED_OutB_net;

	cy_psoc3_pins_v1_10
		#(.id("f8bc0318-1f79-4017-96b4-8202b2c6e937"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b1),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LED_OutB
		 (.oe(tmpOE__LED_OutB_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__LED_OutB_net[0:0]}),
		  .io({tmpIO_0__LED_OutB_net[0:0]}),
		  .siovref(tmpSIOVREF__LED_OutB_net),
		  .interrupt({tmpINTERRUPT_0__LED_OutB_net[0:0]}),
		  .annotation({Net_352}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LED_OutB_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__LED_InB_net;
	wire [0:0] tmpFB_0__LED_InB_net;
	wire [0:0] tmpIO_0__LED_InB_net;
	wire [0:0] tmpINTERRUPT_0__LED_InB_net;
	electrical [0:0] tmpSIOVREF__LED_InB_net;

	cy_psoc3_pins_v1_10
		#(.id("29ba3e40-8057-417d-8bf3-2c71587c0d14"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b1),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LED_InB
		 (.oe(tmpOE__LED_InB_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__LED_InB_net[0:0]}),
		  .io({tmpIO_0__LED_InB_net[0:0]}),
		  .siovref(tmpSIOVREF__LED_InB_net),
		  .interrupt({tmpINTERRUPT_0__LED_InB_net[0:0]}),
		  .annotation({Net_349}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LED_InB_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__LED_OutA_net;
	wire [0:0] tmpFB_0__LED_OutA_net;
	wire [0:0] tmpIO_0__LED_OutA_net;
	wire [0:0] tmpINTERRUPT_0__LED_OutA_net;
	electrical [0:0] tmpSIOVREF__LED_OutA_net;

	cy_psoc3_pins_v1_10
		#(.id("0689c1e7-85fd-44ea-a9f9-bed96995ce5c"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b1),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LED_OutA
		 (.oe(tmpOE__LED_OutA_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__LED_OutA_net[0:0]}),
		  .io({tmpIO_0__LED_OutA_net[0:0]}),
		  .siovref(tmpSIOVREF__LED_OutA_net),
		  .interrupt({tmpINTERRUPT_0__LED_OutA_net[0:0]}),
		  .annotation({Net_346}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LED_OutA_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__LED_InA_net;
	wire [0:0] tmpFB_0__LED_InA_net;
	wire [0:0] tmpIO_0__LED_InA_net;
	wire [0:0] tmpINTERRUPT_0__LED_InA_net;
	electrical [0:0] tmpSIOVREF__LED_InA_net;

	cy_psoc3_pins_v1_10
		#(.id("ed092b9b-d398-4703-be89-cebf998501f6"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b1),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LED_InA
		 (.oe(tmpOE__LED_InA_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__LED_InA_net[0:0]}),
		  .io({tmpIO_0__LED_InA_net[0:0]}),
		  .siovref(tmpSIOVREF__LED_InA_net),
		  .interrupt({tmpINTERRUPT_0__LED_InA_net[0:0]}),
		  .annotation({Net_2671}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LED_InA_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__MIDI_OUT1_net;
	wire [0:0] tmpFB_0__MIDI_OUT1_net;
	wire [0:0] tmpIO_0__MIDI_OUT1_net;
	wire [0:0] tmpINTERRUPT_0__MIDI_OUT1_net;
	electrical [0:0] tmpSIOVREF__MIDI_OUT1_net;

	cy_psoc3_pins_v1_10
		#(.id("b9e1db07-a07e-4cf5-8771-93eb2ff0ddc0"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b1),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		MIDI_OUT1
		 (.oe(tmpOE__MIDI_OUT1_net),
		  .y({Net_674}),
		  .fb({tmpFB_0__MIDI_OUT1_net[0:0]}),
		  .io({tmpIO_0__MIDI_OUT1_net[0:0]}),
		  .siovref(tmpSIOVREF__MIDI_OUT1_net),
		  .interrupt({tmpINTERRUPT_0__MIDI_OUT1_net[0:0]}),
		  .annotation({Net_492}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__MIDI_OUT1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__MIDI_IN1_net;
	wire [0:0] tmpIO_0__MIDI_IN1_net;
	wire [0:0] tmpINTERRUPT_0__MIDI_IN1_net;
	electrical [0:0] tmpSIOVREF__MIDI_IN1_net;

	cy_psoc3_pins_v1_10
		#(.id("6c474820-c2f5-46c6-aa01-7db6a7b6db1f"),
		  .drive_mode(3'b010),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b1),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		MIDI_IN1
		 (.oe(tmpOE__MIDI_IN1_net),
		  .y({1'b0}),
		  .fb({Net_675}),
		  .io({tmpIO_0__MIDI_IN1_net[0:0]}),
		  .siovref(tmpSIOVREF__MIDI_IN1_net),
		  .interrupt({tmpINTERRUPT_0__MIDI_IN1_net[0:0]}),
		  .annotation({Net_583}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__MIDI_IN1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    UART_v2_50_1 MIDI1_UART (
        .cts_n(1'b0),
        .tx(Net_673),
        .rts_n(Net_677),
        .tx_en(Net_678),
        .clock(Net_355),
        .reset(1'b0),
        .rx(Net_675),
        .tx_interrupt(Net_680),
        .rx_interrupt(Net_681),
        .tx_data(Net_682),
        .tx_clk(Net_683),
        .rx_data(Net_684),
        .rx_clk(Net_685));
    defparam MIDI1_UART.Address1 = 0;
    defparam MIDI1_UART.Address2 = 0;
    defparam MIDI1_UART.EnIntRXInterrupt = 1;
    defparam MIDI1_UART.EnIntTXInterrupt = 1;
    defparam MIDI1_UART.FlowControl = 0;
    defparam MIDI1_UART.HalfDuplexEn = 0;
    defparam MIDI1_UART.HwTXEnSignal = 0;
    defparam MIDI1_UART.NumDataBits = 8;
    defparam MIDI1_UART.NumStopBits = 1;
    defparam MIDI1_UART.ParityType = 0;
    defparam MIDI1_UART.RXEnable = 1;
    defparam MIDI1_UART.TXEnable = 1;

	wire [0:0] tmpOE__MIDI_OUT2_net;
	wire [0:0] tmpFB_0__MIDI_OUT2_net;
	wire [0:0] tmpIO_0__MIDI_OUT2_net;
	wire [0:0] tmpINTERRUPT_0__MIDI_OUT2_net;
	electrical [0:0] tmpSIOVREF__MIDI_OUT2_net;

	cy_psoc3_pins_v1_10
		#(.id("16e2c6df-bfa9-4d60-8902-0c211b69d05a"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b1),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		MIDI_OUT2
		 (.oe(tmpOE__MIDI_OUT2_net),
		  .y({Net_672}),
		  .fb({tmpFB_0__MIDI_OUT2_net[0:0]}),
		  .io({tmpIO_0__MIDI_OUT2_net[0:0]}),
		  .siovref(tmpSIOVREF__MIDI_OUT2_net),
		  .interrupt({tmpINTERRUPT_0__MIDI_OUT2_net[0:0]}),
		  .annotation({Net_493}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__MIDI_OUT2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__MIDI_IN2_net;
	wire [0:0] tmpIO_0__MIDI_IN2_net;
	wire [0:0] tmpINTERRUPT_0__MIDI_IN2_net;
	electrical [0:0] tmpSIOVREF__MIDI_IN2_net;

	cy_psoc3_pins_v1_10
		#(.id("1425177d-0d0e-4468-8bcc-e638e5509a9b"),
		  .drive_mode(3'b010),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b1),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		MIDI_IN2
		 (.oe(tmpOE__MIDI_IN2_net),
		  .y({1'b0}),
		  .fb({Net_686}),
		  .io({tmpIO_0__MIDI_IN2_net[0:0]}),
		  .siovref(tmpSIOVREF__MIDI_IN2_net),
		  .interrupt({tmpINTERRUPT_0__MIDI_IN2_net[0:0]}),
		  .annotation({Net_582}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__MIDI_IN2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    UART_v2_50_2 MIDI2_UART (
        .cts_n(1'b0),
        .tx(Net_671),
        .rts_n(Net_688),
        .tx_en(Net_689),
        .clock(Net_355),
        .reset(1'b0),
        .rx(Net_686),
        .tx_interrupt(Net_691),
        .rx_interrupt(Net_692),
        .tx_data(Net_693),
        .tx_clk(Net_694),
        .rx_data(Net_695),
        .rx_clk(Net_696));
    defparam MIDI2_UART.Address1 = 0;
    defparam MIDI2_UART.Address2 = 0;
    defparam MIDI2_UART.EnIntRXInterrupt = 1;
    defparam MIDI2_UART.EnIntTXInterrupt = 1;
    defparam MIDI2_UART.FlowControl = 0;
    defparam MIDI2_UART.HalfDuplexEn = 0;
    defparam MIDI2_UART.HwTXEnSignal = 0;
    defparam MIDI2_UART.NumDataBits = 8;
    defparam MIDI2_UART.NumStopBits = 1;
    defparam MIDI2_UART.ParityType = 0;
    defparam MIDI2_UART.RXEnable = 1;
    defparam MIDI2_UART.TXEnable = 1;


	cy_clock_v1_0
		#(.id("cae5798c-7ee3-44d1-9fb6-9cadf8f651f4"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("4000000000"),
		  .is_direct(0),
		  .is_digital(1))
		Clock_1
		 (.clock_out(Net_355));


    USBFS_v3_0_3 USB (
        .sof(Net_698),
        .vbusdet(1'b0));
    defparam USB.epDMAautoOptimization = 0;


	cy_isr_v1_0
		#(.int_type(2'b10))
		Sleep_isr
		 (.int_signal(Net_317));


    cy_annotation_universal_v1_0 SW_1 (
        .connect({
            Net_372,
            Net_365
        })
    );
    defparam SW_1.comp_name = "SwitchSPST_v1_0";
    defparam SW_1.port_names = "T1, T2";
    defparam SW_1.width = 2;

    cy_annotation_universal_v1_0 GND_1 (
        .connect({
            Net_372
        })
    );
    defparam GND_1.comp_name = "Gnd_v1_0";
    defparam GND_1.port_names = "T1";
    defparam GND_1.width = 1;

    cy_annotation_universal_v1_0 SW_2 (
        .connect({
            Net_372,
            Net_364
        })
    );
    defparam SW_2.comp_name = "SwitchSPST_v1_0";
    defparam SW_2.port_names = "T1, T2";
    defparam SW_2.width = 2;

    cy_annotation_universal_v1_0 LED1 (
        .connect({
            Net_2671,
            Net_700
        })
    );
    defparam LED1.comp_name = "LED_v1_0";
    defparam LED1.port_names = "A, K";
    defparam LED1.width = 2;

    cy_annotation_universal_v1_0 R25 (
        .connect({
            Net_354,
            Net_700
        })
    );
    defparam R25.comp_name = "Resistor_v1_0";
    defparam R25.port_names = "T1, T2";
    defparam R25.width = 2;

    cy_annotation_universal_v1_0 LED2 (
        .connect({
            Net_346,
            Net_701
        })
    );
    defparam LED2.comp_name = "LED_v1_0";
    defparam LED2.port_names = "A, K";
    defparam LED2.width = 2;

    cy_annotation_universal_v1_0 R25_1 (
        .connect({
            Net_354,
            Net_701
        })
    );
    defparam R25_1.comp_name = "Resistor_v1_0";
    defparam R25_1.port_names = "T1, T2";
    defparam R25_1.width = 2;

    cy_annotation_universal_v1_0 LED3 (
        .connect({
            Net_349,
            Net_702
        })
    );
    defparam LED3.comp_name = "LED_v1_0";
    defparam LED3.port_names = "A, K";
    defparam LED3.width = 2;

    cy_annotation_universal_v1_0 R25_2 (
        .connect({
            Net_354,
            Net_702
        })
    );
    defparam R25_2.comp_name = "Resistor_v1_0";
    defparam R25_2.port_names = "T1, T2";
    defparam R25_2.width = 2;

    cy_annotation_universal_v1_0 LED4 (
        .connect({
            Net_352,
            Net_703
        })
    );
    defparam LED4.comp_name = "LED_v1_0";
    defparam LED4.port_names = "A, K";
    defparam LED4.width = 2;

    cy_annotation_universal_v1_0 R25_3 (
        .connect({
            Net_354,
            Net_703
        })
    );
    defparam R25_3.comp_name = "Resistor_v1_0";
    defparam R25_3.port_names = "T1, T2";
    defparam R25_3.width = 2;

    cy_annotation_universal_v1_0 GND_6 (
        .connect({
            Net_354
        })
    );
    defparam GND_6.comp_name = "Gnd_v1_0";
    defparam GND_6.port_names = "T1";
    defparam GND_6.width = 1;

    cy_annotation_universal_v1_0 Q_1 (
        .connect({
            Net_386,
            Net_704,
            Net_389
        })
    );
    defparam Q_1.comp_name = "NPN_v1_0";
    defparam Q_1.port_names = "B, C, E";
    defparam Q_1.width = 3;

    cy_annotation_universal_v1_0 R_1 (
        .connect({
            Net_492,
            Net_386
        })
    );
    defparam R_1.comp_name = "Resistor_v1_0";
    defparam R_1.port_names = "T1, T2";
    defparam R_1.width = 2;

    cy_annotation_universal_v1_0 R_2 (
        .connect({
            Net_386,
            Net_389
        })
    );
    defparam R_2.comp_name = "Resistor_v1_0";
    defparam R_2.port_names = "T1, T2";
    defparam R_2.width = 2;

    cy_annotation_universal_v1_0 GND_2 (
        .connect({
            Net_389
        })
    );
    defparam GND_2.comp_name = "Gnd_v1_0";
    defparam GND_2.port_names = "T1";
    defparam GND_2.width = 1;

    cy_annotation_universal_v1_0 R_3 (
        .connect({
            Net_704,
            Net_390
        })
    );
    defparam R_3.comp_name = "Resistor_v1_0";
    defparam R_3.port_names = "T1, T2";
    defparam R_3.width = 2;

    cy_annotation_universal_v1_0 R_4 (
        .connect({
            Net_402,
            Net_414
        })
    );
    defparam R_4.comp_name = "Resistor_v1_0";
    defparam R_4.port_names = "T1, T2";
    defparam R_4.width = 2;

    cy_annotation_universal_v1_0 PWR_1 (
        .connect({
            Net_414
        })
    );
    defparam PWR_1.comp_name = "Power_v1_0";
    defparam PWR_1.port_names = "T1";
    defparam PWR_1.width = 1;

    cy_annotation_universal_v1_0 Q_2 (
        .connect({
            Net_407,
            Net_705,
            Net_409
        })
    );
    defparam Q_2.comp_name = "NPN_v1_0";
    defparam Q_2.port_names = "B, C, E";
    defparam Q_2.width = 3;

    cy_annotation_universal_v1_0 R_5 (
        .connect({
            Net_493,
            Net_407
        })
    );
    defparam R_5.comp_name = "Resistor_v1_0";
    defparam R_5.port_names = "T1, T2";
    defparam R_5.width = 2;

    cy_annotation_universal_v1_0 R_6 (
        .connect({
            Net_407,
            Net_409
        })
    );
    defparam R_6.comp_name = "Resistor_v1_0";
    defparam R_6.port_names = "T1, T2";
    defparam R_6.width = 2;

    cy_annotation_universal_v1_0 GND_3 (
        .connect({
            Net_409
        })
    );
    defparam GND_3.comp_name = "Gnd_v1_0";
    defparam GND_3.port_names = "T1";
    defparam GND_3.width = 1;

    cy_annotation_universal_v1_0 R_7 (
        .connect({
            Net_705,
            Net_412
        })
    );
    defparam R_7.comp_name = "Resistor_v1_0";
    defparam R_7.port_names = "T1, T2";
    defparam R_7.width = 2;

    cy_annotation_universal_v1_0 R_8 (
        .connect({
            Net_413,
            Net_414
        })
    );
    defparam R_8.comp_name = "Resistor_v1_0";
    defparam R_8.port_names = "T1, T2";
    defparam R_8.width = 2;

    cy_annotation_universal_v1_0 PWR_2 (
        .connect({
            Net_461
        })
    );
    defparam PWR_2.comp_name = "Power_v1_0";
    defparam PWR_2.port_names = "T1";
    defparam PWR_2.width = 1;

    cy_annotation_universal_v1_0 R_9 (
        .connect({
            Net_426,
            Net_427
        })
    );
    defparam R_9.comp_name = "Resistor_v1_0";
    defparam R_9.port_names = "T1, T2";
    defparam R_9.width = 2;

    cy_annotation_universal_v1_0 Q_3 (
        .connect({
            Net_456,
            Net_433
        })
    );
    defparam Q_3.comp_name = "PhotoTrans_v1_0";
    defparam Q_3.port_names = "C, E";
    defparam Q_3.width = 2;

    cy_annotation_universal_v1_0 D_1 (
        .connect({
            Net_441,
            Net_427
        })
    );
    defparam D_1.comp_name = "Diode_v1_0";
    defparam D_1.port_names = "A, K";
    defparam D_1.width = 2;

    cy_annotation_universal_v1_0 D_2 (
        .connect({
            Net_427,
            Net_441
        })
    );
    defparam D_2.comp_name = "Diode_v1_0";
    defparam D_2.port_names = "A, K";
    defparam D_2.width = 2;

    cy_annotation_universal_v1_0 GND_4 (
        .connect({
            Net_433
        })
    );
    defparam GND_4.comp_name = "Gnd_v1_0";
    defparam GND_4.port_names = "T1";
    defparam GND_4.width = 1;

    cy_annotation_universal_v1_0 R_10 (
        .connect({
            Net_446,
            Net_447
        })
    );
    defparam R_10.comp_name = "Resistor_v1_0";
    defparam R_10.port_names = "T1, T2";
    defparam R_10.width = 2;

    cy_annotation_universal_v1_0 Q_4 (
        .connect({
            Net_420,
            Net_448
        })
    );
    defparam Q_4.comp_name = "PhotoTrans_v1_0";
    defparam Q_4.port_names = "C, E";
    defparam Q_4.width = 2;

    cy_annotation_universal_v1_0 D_3 (
        .connect({
            Net_449,
            Net_447
        })
    );
    defparam D_3.comp_name = "Diode_v1_0";
    defparam D_3.port_names = "A, K";
    defparam D_3.width = 2;

    cy_annotation_universal_v1_0 D_4 (
        .connect({
            Net_447,
            Net_449
        })
    );
    defparam D_4.comp_name = "Diode_v1_0";
    defparam D_4.port_names = "A, K";
    defparam D_4.width = 2;

    cy_annotation_universal_v1_0 GND_5 (
        .connect({
            Net_448
        })
    );
    defparam GND_5.comp_name = "Gnd_v1_0";
    defparam GND_5.port_names = "T1";
    defparam GND_5.width = 1;

    cy_annotation_universal_v1_0 R_11 (
        .connect({
            Net_456,
            Net_583
        })
    );
    defparam R_11.comp_name = "Resistor_v1_0";
    defparam R_11.port_names = "T1, T2";
    defparam R_11.width = 2;

    cy_annotation_universal_v1_0 R_12 (
        .connect({
            Net_420,
            Net_582
        })
    );
    defparam R_12.comp_name = "Resistor_v1_0";
    defparam R_12.port_names = "T1, T2";
    defparam R_12.width = 2;

    cy_annotation_universal_v1_0 Q_5 (
        .connect({
            Net_461,
            Net_459,
            Net_414
        })
    );
    defparam Q_5.comp_name = "PFET_En_v1_0";
    defparam Q_5.port_names = "D, G, S";
    defparam Q_5.width = 3;

    cy_annotation_universal_v1_0 R_13 (
        .connect({
            Net_459,
            Net_461
        })
    );
    defparam R_13.comp_name = "Resistor_v1_0";
    defparam R_13.port_names = "T1, T2";
    defparam R_13.width = 2;



endmodule

