/*******************************************************************************
* File Name: USBFS_descr.c
* Version 2.50
*
* Description:
*  USB descriptors and storage.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "USBFS.h"


/*****************************************************************************
*  User supplied descriptors.  If you want to specify your own descriptors,
*  remove the comments around the define USER_SUPPLIED_DESCRIPTORS below and
*  add your descriptors.
*****************************************************************************/
/* `#START USER_DESCRIPTORS_DECLARATIONS` Place your declaration here */

/* `#END` */


/***************************************
*  USB Customizer Generated Descriptors
***************************************/

#if !defined(USER_SUPPLIED_DESCRIPTORS)
/*********************************************************************
* Device Descriptors
*********************************************************************/
const uint8 CYCODE USBFS_DEVICE0_DESCR[] = {
/* Descriptor Length                       */ 0x12u,
/* DescriptorType: DEVICE                  */ 0x01u,
/* bcdUSB (ver 2.0)                        */ 0x00u, 0x02u,
/* bDeviceClass                            */ 0x00u,
/* bDeviceSubClass                         */ 0x00u,
/* bDeviceProtocol                         */ 0x00u,
/* bMaxPacketSize0                         */ 0x08u,
/* idVendor                                */ 0xA1u, 0x0Au,
/* idProduct                               */ 0x11u, 0x11u,
/* bcdDevice                               */ 0x00u, 0x10u,
/* iManufacturer                           */ 0x0Du,
/* iProduct                                */ 0x0Eu,
/* iSerialNumber                           */ 0x80u,
/* bNumConfigurations                      */ 0x01u
};
/*********************************************************************
* Config Descriptor  
*********************************************************************/
const uint8 CYCODE USBFS_DEVICE0_CONFIGURATION0_DESCR[] = {
/*  Config Descriptor Length               */ 0x09u,
/*  DescriptorType: CONFIG                 */ 0x02u,
/*  wTotalLength                           */ 0x0Eu, 0x01u,
/*  bNumInterfaces                         */ 0x04u,
/*  bConfigurationValue                    */ 0x01u,
/*  iConfiguration                         */ 0x0Au,
/*  bmAttributes                           */ 0x80u,
/*  bMaxPower                              */ 0x32u,
/*********************************************************************
* AudioControl Interface Descriptor
*********************************************************************/
/*  Interface Descriptor Length            */ 0x09u,
/*  DescriptorType: INTERFACE              */ 0x04u,
/*  bInterfaceNumber                       */ 0x00u,
/*  bAlternateSetting                      */ 0x00u,
/*  bNumEndpoints                          */ 0x01u,
/*  bInterfaceClass                        */ 0x01u,
/*  bInterfaceSubClass                     */ 0x01u,
/*  bInterfaceProtocol                     */ 0x00u,
/*  iInterface                             */ 0x0Eu,
/*********************************************************************
* AC Header Descriptor
*********************************************************************/
/*  AC Header Descriptor Length            */ 0x0Au,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x01u,
/*  bcdADC                                 */ 0x00u, 0x01u,
/*  wTotalLength                           */ 0x3Eu, 0x00u,
/*  bInCollection                          */ 0x02u,
/*  baInterfaceNr                          */ 0x01u, 0x02u,
/*********************************************************************
* AC Feature Unit Descriptor
*********************************************************************/
/*  AC Feature Unit Descriptor Length      */ 0x0Au,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x06u,
/*  bUnitID                                */ 0x02u,
/*  bSourceID                              */ 0x01u,
/*  bControlSize                           */ 0x01u,
/*  bmaControls                            */ 0x02u, 
                                              0x02u, 
                                              0x02u,
/*  iFeature                               */ 0x00u,
/*********************************************************************
* AC Input Terminal Descriptor
*********************************************************************/
/*  AC Input Terminal Descriptor Length    */ 0x0Cu,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x02u,
/*  bTerminalID                            */ 0x01u,
/*  wTerminalType                          */ 0x01u, 0x01u,
/*  bAssocTerminal                         */ 0x00u,
/*  bNrChannels                            */ 0x02u,
/*  wChannelConfig                         */ 0x03u, 0x00u,
/*  iChannelNames                          */ 0x00u,
/*  iTerminal                              */ 0x06u,
/*********************************************************************
* AC Output Terminal Descriptor
*********************************************************************/
/*  AC Output Terminal Descriptor Length   */ 0x09u,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x03u,
/*  bTerminalID                            */ 0x03u,
/*  wTerminalType                          */ 0x01u, 0x03u,
/*  bAssocTerminal                         */ 0x00u,
/*  bSourceID                              */ 0x02u,
/*  iTerminal                              */ 0x05u,
/*********************************************************************
* AC Input Terminal Descriptor
*********************************************************************/
/*  AC Input Terminal Descriptor Length    */ 0x0Cu,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x02u,
/*  bTerminalID                            */ 0x04u,
/*  wTerminalType                          */ 0x01u, 0x02u,
/*  bAssocTerminal                         */ 0x00u,
/*  bNrChannels                            */ 0x02u,
/*  wChannelConfig                         */ 0x03u, 0x00u,
/*  iChannelNames                          */ 0x00u,
/*  iTerminal                              */ 0x04u,
/*********************************************************************
* AC Output Terminal Descriptor
*********************************************************************/
/*  AC Output Terminal Descriptor Length   */ 0x09u,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x03u,
/*  bTerminalID                            */ 0x05u,
/*  wTerminalType                          */ 0x01u, 0x01u,
/*  bAssocTerminal                         */ 0x00u,
/*  bSourceID                              */ 0x04u,
/*  iTerminal                              */ 0x06u,
/*********************************************************************
* Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x09u,
/*  DescriptorType: ENDPOINT               */ 0x05u,
/*  bEndpointAddress                       */ 0x86u,
/*  bmAttributes                           */ 0x03u,
/*  wMaxPacketSize                         */ 0x02u, 0x00u,
/*  bInterval                              */ 0x1Eu,
/*  bRefresh                               */ 0x00u,
/*  bSynchAddress                          */ 0x00u,
/*********************************************************************
* AudioStreaming Interface Descriptor
*********************************************************************/
/*  Interface Descriptor Length            */ 0x09u,
/*  DescriptorType: INTERFACE              */ 0x04u,
/*  bInterfaceNumber                       */ 0x01u,
/*  bAlternateSetting                      */ 0x00u,
/*  bNumEndpoints                          */ 0x00u,
/*  bInterfaceClass                        */ 0x01u,
/*  bInterfaceSubClass                     */ 0x02u,
/*  bInterfaceProtocol                     */ 0x00u,
/*  iInterface                             */ 0x0Eu,
/*********************************************************************
* AudioStreaming Interface Descriptor
*********************************************************************/
/*  Interface Descriptor Length            */ 0x09u,
/*  DescriptorType: INTERFACE              */ 0x04u,
/*  bInterfaceNumber                       */ 0x01u,
/*  bAlternateSetting                      */ 0x01u,
/*  bNumEndpoints                          */ 0x01u,
/*  bInterfaceClass                        */ 0x01u,
/*  bInterfaceSubClass                     */ 0x02u,
/*  bInterfaceProtocol                     */ 0x00u,
/*  iInterface                             */ 0x08u,
/*********************************************************************
* AS General Descriptor
*********************************************************************/
/*  AS General Descriptor Length           */ 0x07u,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x01u,
/*  bTerminalLink                          */ 0x01u,
/*  bDelay                                 */ 0x01u,
/*  wFormatTag                             */ 0x01u, 0x00u,
/*********************************************************************
* AS Format Type I Descriptor
*********************************************************************/
/*  AS Format Type I Descriptor Length     */ 0x0Eu,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x02u,
/*  bFormatType                            */ 0x01u,
/*  bNrChannels                            */ 0x02u,
/*  bSubframeSize                          */ 0x02u,
/*  bBitResolution                         */ 0x10u,
/*  bSamFreqType                           */ 0x02u,
/*  tSamFreq                               */ 0x44u, 0xACu, 0x00u, 
                                              0x80u, 0xBBu, 0x00u,
/*********************************************************************
* Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x09u,
/*  DescriptorType: ENDPOINT               */ 0x05u,
/*  bEndpointAddress                       */ 0x01u,
/*  bmAttributes                           */ 0x01u,
/*  wMaxPacketSize                         */ 0xC0u, 0x00u,
/*  bInterval                              */ 0x01u,
/*  bRefresh                               */ 0x00u,
/*  bSynchAddress                          */ 0x00u,
/*********************************************************************
* AS Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x07u,
/*  DescriptorType: CS_ENDPOINT            */ 0x25u,
/*  bDescriptorSubtype                     */ 0x01u,
/*  bmAttributes                           */ 0x01u,
/*  bLockDelayUnits                        */ 0x01u,
/*  wLockDelay                             */ 0x01u, 0x00u,
/*********************************************************************
* AudioStreaming Interface Descriptor
*********************************************************************/
/*  Interface Descriptor Length            */ 0x09u,
/*  DescriptorType: INTERFACE              */ 0x04u,
/*  bInterfaceNumber                       */ 0x01u,
/*  bAlternateSetting                      */ 0x02u,
/*  bNumEndpoints                          */ 0x01u,
/*  bInterfaceClass                        */ 0x01u,
/*  bInterfaceSubClass                     */ 0x02u,
/*  bInterfaceProtocol                     */ 0x00u,
/*  iInterface                             */ 0x09u,
/*********************************************************************
* AS General Descriptor
*********************************************************************/
/*  AS General Descriptor Length           */ 0x07u,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x01u,
/*  bTerminalLink                          */ 0x01u,
/*  bDelay                                 */ 0x01u,
/*  wFormatTag                             */ 0x01u, 0x00u,
/*********************************************************************
* AS Format Type I Descriptor
*********************************************************************/
/*  AS Format Type I Descriptor Length     */ 0x0Eu,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x02u,
/*  bFormatType                            */ 0x01u,
/*  bNrChannels                            */ 0x02u,
/*  bSubframeSize                          */ 0x03u,
/*  bBitResolution                         */ 0x18u,
/*  bSamFreqType                           */ 0x02u,
/*  tSamFreq                               */ 0x44u, 0xACu, 0x00u, 
                                              0x80u, 0xBBu, 0x00u,
/*********************************************************************
* Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x09u,
/*  DescriptorType: ENDPOINT               */ 0x05u,
/*  bEndpointAddress                       */ 0x01u,
/*  bmAttributes                           */ 0x0Du,
/*  wMaxPacketSize                         */ 0x20u, 0x01u,
/*  bInterval                              */ 0x01u,
/*  bRefresh                               */ 0x00u,
/*  bSynchAddress                          */ 0x00u,
/*********************************************************************
* AS Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x07u,
/*  DescriptorType: CS_ENDPOINT            */ 0x25u,
/*  bDescriptorSubtype                     */ 0x01u,
/*  bmAttributes                           */ 0x01u,
/*  bLockDelayUnits                        */ 0x01u,
/*  wLockDelay                             */ 0x01u, 0x00u,
/*********************************************************************
* AudioStreaming Interface Descriptor
*********************************************************************/
/*  Interface Descriptor Length            */ 0x09u,
/*  DescriptorType: INTERFACE              */ 0x04u,
/*  bInterfaceNumber                       */ 0x02u,
/*  bAlternateSetting                      */ 0x00u,
/*  bNumEndpoints                          */ 0x00u,
/*  bInterfaceClass                        */ 0x01u,
/*  bInterfaceSubClass                     */ 0x02u,
/*  bInterfaceProtocol                     */ 0x00u,
/*  iInterface                             */ 0x0Eu,
/*********************************************************************
* AudioStreaming Interface Descriptor
*********************************************************************/
/*  Interface Descriptor Length            */ 0x09u,
/*  DescriptorType: INTERFACE              */ 0x04u,
/*  bInterfaceNumber                       */ 0x02u,
/*  bAlternateSetting                      */ 0x01u,
/*  bNumEndpoints                          */ 0x01u,
/*  bInterfaceClass                        */ 0x01u,
/*  bInterfaceSubClass                     */ 0x02u,
/*  bInterfaceProtocol                     */ 0x00u,
/*  iInterface                             */ 0x08u,
/*********************************************************************
* AS General Descriptor
*********************************************************************/
/*  AS General Descriptor Length           */ 0x07u,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x01u,
/*  bTerminalLink                          */ 0x05u,
/*  bDelay                                 */ 0x01u,
/*  wFormatTag                             */ 0x01u, 0x00u,
/*********************************************************************
* AS Format Type I Descriptor
*********************************************************************/
/*  AS Format Type I Descriptor Length     */ 0x0Eu,
/*  DescriptorType: AUDIO                  */ 0x24u,
/*  bDescriptorSubtype                     */ 0x02u,
/*  bFormatType                            */ 0x01u,
/*  bNrChannels                            */ 0x02u,
/*  bSubframeSize                          */ 0x02u,
/*  bBitResolution                         */ 0x10u,
/*  bSamFreqType                           */ 0x02u,
/*  tSamFreq                               */ 0x44u, 0xACu, 0x00u, 
                                              0x80u, 0xBBu, 0x00u,
/*********************************************************************
* Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x09u,
/*  DescriptorType: ENDPOINT               */ 0x05u,
/*  bEndpointAddress                       */ 0x82u,
/*  bmAttributes                           */ 0x0Du,
/*  wMaxPacketSize                         */ 0xC0u, 0x00u,
/*  bInterval                              */ 0x01u,
/*  bRefresh                               */ 0x00u,
/*  bSynchAddress                          */ 0x00u,
/*********************************************************************
* AS Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x07u,
/*  DescriptorType: CS_ENDPOINT            */ 0x25u,
/*  bDescriptorSubtype                     */ 0x01u,
/*  bmAttributes                           */ 0x01u,
/*  bLockDelayUnits                        */ 0x01u,
/*  wLockDelay                             */ 0x01u, 0x00u,
/*********************************************************************
* Interface Descriptor
*********************************************************************/
/*  Interface Descriptor Length            */ 0x09u,
/*  DescriptorType: INTERFACE              */ 0x04u,
/*  bInterfaceNumber                       */ 0x03u,
/*  bAlternateSetting                      */ 0x00u,
/*  bNumEndpoints                          */ 0x01u,
/*  bInterfaceClass                        */ 0x03u,
/*  bInterfaceSubClass                     */ 0x00u,
/*  bInterfaceProtocol                     */ 0x00u,
/*  iInterface                             */ 0x0Bu,
/*********************************************************************
* HID Class Descriptor
*********************************************************************/
/*  HID Class Descriptor Length            */ 0x09u,
/*  DescriptorType: HID_CLASS              */ 0x21u,
/*  bcdHID                                 */ 0x11u, 0x01u,
/*  bCountryCode                           */ 0x00u,
/*  bNumDescriptors                        */ 0x01u,
/*  bDescriptorType                        */ 0x22u,
/*  wDescriptorLength (LSB)                */ USBFS_HID_RPT_1_SIZE_LSB,
/*  wDescriptorLength (MSB)                */ USBFS_HID_RPT_1_SIZE_MSB,
/*********************************************************************
* Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x07u,
/*  DescriptorType: ENDPOINT               */ 0x05u,
/*  bEndpointAddress                       */ 0x84u,
/*  bmAttributes                           */ 0x03u,
/*  wMaxPacketSize                         */ 0x01u, 0x00u,
/*  bInterval                              */ 0x28u
};

/*********************************************************************
* String Descriptor Table
*********************************************************************/
const uint8 CYCODE USBFS_STRING_DESCRIPTORS[] = {
/*********************************************************************
* Language ID Descriptor
*********************************************************************/
/* Descriptor Length                       */ 0x04u,
/* DescriptorType: STRING                  */ 0x03u,
/* Language Id                             */ 0x09u, 0x04u,
/*********************************************************************
* String Descriptor: "Cypress Semiconductor"
*********************************************************************/
/* Descriptor Length                       */ 0x2Cu,
/* DescriptorType: STRING                  */ 0x03u,
 'C', 0,'y', 0,'p', 0,'r', 0,'e', 0,'s', 0,'s', 0,' ', 0,'S', 0,'e', 0
,'m', 0,'i', 0,'c', 0,'o', 0,'n', 0,'d', 0,'u', 0,'c', 0,'t', 0,'o', 0
,'r', 0,
/*********************************************************************
* String Descriptor: "CypressAudioControl"
*********************************************************************/
/* Descriptor Length                       */ 0x28u,
/* DescriptorType: STRING                  */ 0x03u,
 'C', 0,'y', 0,'p', 0,'r', 0,'e', 0,'s', 0,'s', 0,'A', 0,'u', 0,'d', 0
,'i', 0,'o', 0,'C', 0,'o', 0,'n', 0,'t', 0,'r', 0,'o', 0,'l', 0,
/*********************************************************************
* String Descriptor: "ZeroBandwidth"
*********************************************************************/
/* Descriptor Length                       */ 0x1Cu,
/* DescriptorType: STRING                  */ 0x03u,
 'Z', 0,'e', 0,'r', 0,'o', 0,'B', 0,'a', 0,'n', 0,'d', 0,'w', 0,'i', 0
,'d', 0,'t', 0,'h', 0,
/*********************************************************************
* String Descriptor: "Microphone"
*********************************************************************/
/* Descriptor Length                       */ 0x16u,
/* DescriptorType: STRING                  */ 0x03u,
 'M', 0,'i', 0,'c', 0,'r', 0,'o', 0,'p', 0,'h', 0,'o', 0,'n', 0,'e', 0,
/*********************************************************************
* String Descriptor: "Speaker"
*********************************************************************/
/* Descriptor Length                       */ 0x10u,
/* DescriptorType: STRING                  */ 0x03u,
 'S', 0,'p', 0,'e', 0,'a', 0,'k', 0,'e', 0,'r', 0,
/*********************************************************************
* String Descriptor: "USB Streaming"
*********************************************************************/
/* Descriptor Length                       */ 0x1Cu,
/* DescriptorType: STRING                  */ 0x03u,
 'U', 0,'S', 0,'B', 0,' ', 0,'S', 0,'t', 0,'r', 0,'e', 0,'a', 0,'m', 0
,'i', 0,'n', 0,'g', 0,
/*********************************************************************
* String Descriptor: "Active"
*********************************************************************/
/* Descriptor Length                       */ 0x0Eu,
/* DescriptorType: STRING                  */ 0x03u,
 'A', 0,'c', 0,'t', 0,'i', 0,'v', 0,'e', 0,
/*********************************************************************
* String Descriptor: "Active 16 bit"
*********************************************************************/
/* Descriptor Length                       */ 0x1Cu,
/* DescriptorType: STRING                  */ 0x03u,
 'A', 0,'c', 0,'t', 0,'i', 0,'v', 0,'e', 0,' ', 0,'1', 0,'6', 0,' ', 0
,'b', 0,'i', 0,'t', 0,
/*********************************************************************
* String Descriptor: "Active 24 bit"
*********************************************************************/
/* Descriptor Length                       */ 0x1Cu,
/* DescriptorType: STRING                  */ 0x03u,
 'A', 0,'c', 0,'t', 0,'i', 0,'v', 0,'e', 0,' ', 0,'2', 0,'4', 0,' ', 0
,'b', 0,'i', 0,'t', 0,
/*********************************************************************
* String Descriptor: "Mac"
*********************************************************************/
/* Descriptor Length                       */ 0x08u,
/* DescriptorType: STRING                  */ 0x03u,
 'M', 0,'a', 0,'c', 0,
/*********************************************************************
* String Descriptor: "PlaylistControl"
*********************************************************************/
/* Descriptor Length                       */ 0x20u,
/* DescriptorType: STRING                  */ 0x03u,
 'P', 0,'l', 0,'a', 0,'y', 0,'l', 0,'i', 0,'s', 0,'t', 0,'C', 0,'o', 0
,'n', 0,'t', 0,'r', 0,'o', 0,'l', 0,
/*********************************************************************
* String Descriptor: "Cypress Digital Audio DVK"
*********************************************************************/
/* Descriptor Length                       */ 0x34u,
/* DescriptorType: STRING                  */ 0x03u,
 'C', 0,'y', 0,'p', 0,'r', 0,'e', 0,'s', 0,'s', 0,' ', 0,'D', 0,'i', 0
,'g', 0,'i', 0,'t', 0,'a', 0,'l', 0,' ', 0,'A', 0,'u', 0,'d', 0,'i', 0
,'o', 0,' ', 0,'D', 0,'V', 0,'K', 0,
/*********************************************************************
* String Descriptor: "Lukas Creutzburg"
*********************************************************************/
/* Descriptor Length                       */ 0x22u,
/* DescriptorType: STRING                  */ 0x03u,
 'L', 0,'u', 0,'k', 0,'a', 0,'s', 0,' ', 0,'C', 0,'r', 0,'e', 0,'u', 0
,'t', 0,'z', 0,'b', 0,'u', 0,'r', 0,'g', 0,
/*********************************************************************
* String Descriptor: "FreeDSP USB"
*********************************************************************/
/* Descriptor Length                       */ 0x18u,
/* DescriptorType: STRING                  */ 0x03u,
 'F', 0,'r', 0,'e', 0,'e', 0,'D', 0,'S', 0,'P', 0,' ', 0,'U', 0,'S', 0
,'B', 0,
/*********************************************************************/
/* Marks the end of the list.              */ 0x00u};
/*********************************************************************/

/*********************************************************************
* Serial Number String Descriptor
*********************************************************************/
const uint8 CYCODE USBFS_SN_STRING_DESCRIPTOR[] = {
/* Descriptor Length                       */ 0x02u,
/* DescriptorType: STRING                  */ 0x03u
};

/*********************************************************************
* HID Report Descriptor: AudioPlaybackControl
*********************************************************************/
const uint8 CYCODE USBFS_HIDREPORT_DESCRIPTOR1[] = {
/*  Descriptor Size (Not part of descriptor)*/ USBFS_HID_RPT_1_SIZE_LSB,
USBFS_HID_RPT_1_SIZE_MSB,
/* USAGE_PAGE                              */ 0x05u, 0x0Cu, 
/* USAGE                                   */ 0x09u, 0x01u, 
/* COLLECTION                              */ 0xA1u, 0x01u, 
/* LOGICAL_MINIMUM                         */ 0x15u, 0x00u, 
/* LOGICAL_MAXIMUM                         */ 0x25u, 0x01u, 
/* REPORT_SIZE                             */ 0x75u, 0x01u, 
/* REPORT_COUNT                            */ 0x95u, 0x01u, 
/* USAGE                                   */ 0x09u, 0xCDu, 
/* INPUT                                   */ 0x81u, 0x02u, 
/* REPORT_COUNT                            */ 0x95u, 0x07u, 
/* INPUT                                   */ 0x81u, 0x01u, 
/* END_COLLECTION                          */ 0xC0u, 
/*********************************************************************/
/* End of the HID Report Descriptor        */ 0x00u, 0x00u};
/*********************************************************************/

#if !defined(USER_DEFINE_USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_ALTERNATE0_HID_HID_RPT_STORAGE)
/*********************************************************************
* HID Input Report Storage
*********************************************************************/
T_USBFS_XFER_STATUS_BLOCK USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_ALTERNATE0_HID_IN_RPT_SCB;
uint8 USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_ALTERNATE0_HID_IN_BUF[
            USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_ALTERNATE0_HID_IN_BUF_SIZE];

/*********************************************************************
* HID Input Report TD Table
*********************************************************************/
const T_USBFS_TD CYCODE USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_ALTERNATE0_HID_IN_RPT_TABLE[] = {
    {USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_ALTERNATE0_HID_IN_BUF_SIZE,
    &USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_ALTERNATE0_HID_IN_BUF[0],
    &USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_ALTERNATE0_HID_IN_RPT_SCB},
};
/*********************************************************************
* HID Report Look Up Table         This table has four entries:
*                                        IN Report Table
*                                        OUT Report Table
*                                        Feature Report Table
*                                        HID Report Descriptor
*                                        HID Class Descriptor
*********************************************************************/
const T_USBFS_LUT CYCODE USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_ALTERNATE0_HID_TABLE[] = {
    {0x00u,     &USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_ALTERNATE0_HID_IN_RPT_TABLE},
    {0x00u,    NULL},
    {0x00u,    NULL},
    {0x01u,     (void *)&USBFS_HIDREPORT_DESCRIPTOR1[0]},
    {0x01u,     (void *)&USBFS_DEVICE0_CONFIGURATION0_DESCR[254]}
};
#endif /* USER_DEFINE_USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_ALTERNATE0_HID_HID_RPT_STORAGE */

/*********************************************************************
* Interface Dispatch Table -- Points to the Class Dispatch Tables
*********************************************************************/
const T_USBFS_LUT CYCODE USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_TABLE[] = {
    {USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_ALTERNATE0_HID_COUNT, 
    &USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_ALTERNATE0_HID_TABLE}
};
/*********************************************************************
* Endpoint Setting Table -- This table contain the endpoint setting
*                           for each endpoint in the configuration. It
*                           contains the necessary information to
*                           configure the endpoint hardware for each
*                           interface and alternate setting.
*********************************************************************/
const T_USBFS_EP_SETTINGS_BLOCK CYCODE USBFS_DEVICE0_CONFIGURATION0_EP_SETTINGS_TABLE[] = {
/* IFC  ALT    EPAddr bmAttr MaxPktSize Class ********************/
{0x00u, 0x00u, 0x86u, 0x03u, 0x0002u,   0x01u},
{0x01u, 0x01u, 0x01u, 0x01u, 0x00C0u,   0x01u},
{0x01u, 0x02u, 0x01u, 0x0Du, 0x0120u,   0x01u},
{0x02u, 0x01u, 0x82u, 0x0Du, 0x00C0u,   0x01u},
{0x03u, 0x00u, 0x84u, 0x03u, 0x0001u,   0x03u}
};
const uint8 CYCODE USBFS_DEVICE0_CONFIGURATION0_INTERFACE_CLASS[] = {
0x01u, 0x01u, 0x01u, 0x03u
};
/*********************************************************************
* Config Dispatch Table -- Points to the Config Descriptor and each of
*                          and endpoint setup table and to each
*                          interface table if it specifies a USB Class
*********************************************************************/
const T_USBFS_LUT CYCODE USBFS_DEVICE0_CONFIGURATION0_TABLE[] = {
    {0x01u,     &USBFS_DEVICE0_CONFIGURATION0_DESCR},
    {0x05u,     &USBFS_DEVICE0_CONFIGURATION0_EP_SETTINGS_TABLE},
    {0x00u,    NULL},
    {0x00u,    NULL},
    {0x00u,    NULL},
    {0x01u,     &USBFS_DEVICE0_CONFIGURATION0_INTERFACE3_TABLE},
    {0x00u,     &USBFS_DEVICE0_CONFIGURATION0_INTERFACE_CLASS}
};
/*********************************************************************
* Device Dispatch Table -- Points to the Device Descriptor and each of
*                          and Configuration Tables for this Device 
*********************************************************************/
const T_USBFS_LUT CYCODE USBFS_DEVICE0_TABLE[] = {
    {0x01u,     &USBFS_DEVICE0_DESCR},
    {0x01u,     &USBFS_DEVICE0_CONFIGURATION0_TABLE}
};
/*********************************************************************
* Device Table -- Indexed by the device number.
*********************************************************************/
const T_USBFS_LUT CYCODE USBFS_TABLE[] = {
    {0x01u,     &USBFS_DEVICE0_TABLE}
};

#endif /* USER_SUPPLIED_DESCRIPTORS */

#if defined(USBFS_ENABLE_MSOS_STRING)

    /******************************************************************************
    *  USB Microsoft OS String Descriptor
    *  "MSFT" identifies a Microsoft host
    *  "100" specifies version 1.00
    *  USBFS_GET_EXTENDED_CONFIG_DESCRIPTOR becomes the bRequest value
    *  in a host vendor device/class request
    ******************************************************************************/

    const uint8 CYCODE USBFS_MSOS_DESCRIPTOR[] = {
    /* Descriptor Length                       */   0x12u,
    /* DescriptorType: STRING                  */   0x03u,
    /* qwSignature */                               'M', 0, 'S', 0, 'F', 0, 'T', 0, '1', 0, '0', 0, '0', 0,
    /* bMS_VendorCode:                         */   USBFS_GET_EXTENDED_CONFIG_DESCRIPTOR,
    /* bPad                                    */   0x00u
    };

    /* Extended Configuration Descriptor */

    const uint8 CYCODE USBFS_MSOS_CONFIGURATION_DESCR[] = {
    /*  Length of the descriptor 4 bytes       */   0x28u, 0x00u, 0x00u, 0x00u,
    /*  Version of the descriptor 2 bytes      */   0x00u, 0x01u,
    /*  wIndex - Fixed:INDEX_CONFIG_DESCRIPTOR */   0x04u, 0x00u,
    /*  bCount - Count of device functions.    */   0x01u,
    /*  Reserved : 7 bytes                     */   0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    /*  bFirstInterfaceNumber                  */   0x00u,
    /*  Reserved                               */   0x01u,
    /*  compatibleID    - "CYUSB\0\0"          */   'C', 'Y', 'U', 'S', 'B', 0x00, 0x00u, 0x00u,
    /*  subcompatibleID - "00001\0\0"          */   '0', '0', '0', '0', '1', 0x00, 0x00u, 0x00u,
    /*  Reserved : 6 bytes                     */   0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u
    };

#endif /* USBFS_ENABLE_MSOS_STRING */


/* [] END OF FILE */
