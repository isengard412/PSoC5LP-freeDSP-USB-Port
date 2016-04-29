/*******************************************************************************
* File Name: cyapicallbacks.h
*
* Version: 1.0
*
* Description:
*  This is the header file of the MIDI code example project. The file contains 
*  defines and prototypes for callback functions.
*
********************************************************************************
* Copyright 2012-2015, Cypress Semiconductor Corporation. All rights reserved.
* This software is owned by Cypress Semiconductor Corporation and is protected
* by and subject to worldwide patent and copyright laws and treaties.
* Therefore, you may use this software only as provided in the license agreement
* accompanying the software package from which you obtained this software.
* CYPRESS AND ITS SUPPLIERS MAKE NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* WITH REGARD TO THIS SOFTWARE, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT,
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*******************************************************************************/
#if !defined(USBFS_MIDI_CYAPICALLBACKS_H)
#define USBFS_MIDI_CYAPICALLBACKS_H

#define USB_MIDI1_PROCESS_USB_OUT_ENTRY_CALLBACK
void USB_MIDI1_ProcessUsbOut_EntryCallback(void);

#define USB_MIDI1_PROCESS_USB_OUT_EXIT_CALLBACK
void USB_MIDI1_ProcessUsbOut_ExitCallback(void);

#define USB_MIDI2_PROCESS_USB_OUT_ENTRY_CALLBACK
void USB_MIDI2_ProcessUsbOut_EntryCallback(void);

#define USB_MIDI2_PROCESS_USB_OUT_EXIT_CALLBACK
void USB_MIDI2_ProcessUsbOut_ExitCallback(void);

#define MIDI1_UART_RXISR_ENTRY_CALLBACK
void MIDI1_UART_RXISR_EntryCallback(void);

#define MIDI1_UART_RXISR_EXIT_CALLBACK
void MIDI1_UART_RXISR_ExitCallback(void);

#define MIDI2_UART_RXISR_ENTRY_CALLBACK
void MIDI2_UART_RXISR_EntryCallback(void);

#define MIDI2_UART_RXISR_EXIT_CALLBACK
void MIDI2_UART_RXISR_ExitCallback(void);


#endif /*USBFS_MIDI_CYAPICALLBACKS_H*/    
/* [] END OF FILE */
