/*******************************************************************************
* File Name: USBFS_std.c
* Version 2.50
*
* Description:
*  USB Standard request handler.
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "USBFS.h"


/***************************************
* External references
***************************************/

extern const uint8 CYCODE USBFS_DEVICE0_DESCR[];
extern const uint8 CYCODE USBFS_DEVICE0_CONFIGURATION0_DESCR[];
extern const uint8 CYCODE USBFS_STRING_DESCRIPTORS[];
extern const uint8 CYCODE USBFS_MSOS_DESCRIPTOR[];
extern const uint8 CYCODE USBFS_SN_STRING_DESCRIPTOR[];

extern volatile uint8 USBFS_device;
extern volatile uint8 USBFS_configuration;
extern volatile uint8 USBFS_configurationChanged;
extern volatile uint8 USBFS_interfaceNumber;
extern volatile uint8 USBFS_interfaceSetting[];
extern volatile uint8 USBFS_interfaceSetting_last[];
extern volatile uint8 USBFS_deviceAddress;
extern volatile uint8 USBFS_deviceStatus;
extern volatile uint8 USBFS_interfaceStatus[];
extern uint8 CYCODE *USBFS_interfaceClass;
extern const T_USBFS_LUT CYCODE USBFS_TABLE[];
extern volatile T_USBFS_EP_CTL_BLOCK USBFS_EP[];
extern volatile T_USBFS_TD USBFS_currentTD;
#if defined(USBFS_ENABLE_CDC_CLASS)
    extern volatile uint8 USBFS_cdc_data_in_ep;
    extern volatile uint8 USBFS_cdc_data_out_ep;
#endif  /* End USBFS_ENABLE_CDC_CLASS*/
#if defined(USBFS_ENABLE_MIDI_STREAMING)
    extern volatile uint8 USBFS_midi_in_ep;
    extern volatile uint8 USBFS_midi_out_ep;
#endif /* End USBFS_ENABLE_MIDI_STREAMING */


/***************************************
*         Forward references
***************************************/

uint8 USBFS_InitControlRead(void) ;
uint8 USBFS_InitControlWrite(void) ;
uint8 USBFS_InitNoDataControlTransfer(void) ;
uint8 USBFS_DispatchClassRqst(void) ;

void USBFS_Config(uint8 clearAltSetting) ;
void USBFS_ConfigAltChanged(void) ;
T_USBFS_LUT *USBFS_GetConfigTablePtr(uint8 c)
                                                            ;
T_USBFS_LUT *USBFS_GetDeviceTablePtr(void)
                                                            ;
uint8 USBFS_ClearEndpointHalt(void) ;
uint8 USBFS_SetEndpointHalt(void) ;
uint8 USBFS_ValidateAlternateSetting(void) ;

/*DIE ID string descriptor for 8 bytes ID*/
#if defined(USBFS_ENABLE_IDSN_STRING)
    void USBFS_ReadDieID(uint8 *descr) ;
    uint8 USBFS_idSerialNumberStringDescriptor[0x22u]={0x22u, USBFS_DESCR_STRING};
#endif /* USBFS_ENABLE_IDSN_STRING */

#if(USBFS_EP_MM != USBFS__EP_MANUAL)
    void USBFS_Stop_DMA(uint8 epNumber) ;
#endif   /* End USBFS_EP_MM != USBFS__EP_MANUAL */
uint8 CYCODE *USBFS_GetInterfaceClassTablePtr(void)
                                                    ;


/***************************************
* Global data allocation
***************************************/

volatile uint8 USBFS_tBuffer[USBFS_EP_STATUS_LENGTH > USBFS_DEVICE_STATUS_LENGTH ? \
                               USBFS_EP_STATUS_LENGTH : USBFS_DEVICE_STATUS_LENGTH];
volatile uint8 *USBFS_fwSerialNumberStringDescriptor;
volatile uint8 USBFS_snStringConfirm = USBFS_FALSE;


/*******************************************************************************
* Function Name: USBFS_SerialNumString
********************************************************************************
*
* Summary:
*  Application firmware may supply the source of the USB device descriptors
*  serial number string during runtime.
*
* Parameters:
*  snString:  pointer to string.
*
* Return:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void  USBFS_SerialNumString(uint8 *snString) 
{
    #if defined(USBFS_ENABLE_FWSN_STRING)
        USBFS_snStringConfirm = USBFS_FALSE;
        if(snString != NULL)
        {
            USBFS_fwSerialNumberStringDescriptor = snString;
            /* check descriptor validation */
            if( (USBFS_fwSerialNumberStringDescriptor[0u] > 1u ) &&  \
                (USBFS_fwSerialNumberStringDescriptor[1u] == USBFS_DESCR_STRING) )
            {
                USBFS_snStringConfirm = USBFS_TRUE;
            }
        }
    #else
        snString = snString;
    #endif  /* USBFS_ENABLE_FWSN_STRING */
}


/*******************************************************************************
* Function Name: USBFS_HandleStandardRqst
********************************************************************************
*
* Summary:
*  This Routine dispatches standard requests
*
* Parameters:
*  None.
*
* Return:
*  TRUE if request handled.
*
* Reentrant:
*  No.
*
*******************************************************************************/
uint8 USBFS_HandleStandardRqst(void) 
{
    uint8 requestHandled = USBFS_FALSE;
    #if defined(USBFS_ENABLE_STRINGS)
        volatile uint8 *pStr = 0u;
        #if defined(USBFS_ENABLE_DESCRIPTOR_STRINGS)
            uint8 nStr;
        #endif /* USBFS_ENABLE_DESCRIPTOR_STRINGS */
    #endif /* USBFS_ENABLE_STRINGS */
    uint16 count;

    T_USBFS_LUT *pTmp;
    USBFS_currentTD.count = 0u;

    if ((CY_GET_REG8(USBFS_bmRequestType) & USBFS_RQST_DIR_MASK) == USBFS_RQST_DIR_D2H)
    {
        /* Control Read */
        switch (CY_GET_REG8(USBFS_bRequest))
        {
            case USBFS_GET_DESCRIPTOR:
                if (CY_GET_REG8(USBFS_wValueHi) == USBFS_DESCR_DEVICE)
                {
                    pTmp = USBFS_GetDeviceTablePtr();
                    USBFS_currentTD.pData = pTmp->p_list;
                    USBFS_currentTD.count = USBFS_DEVICE_DESCR_LENGTH;
                    requestHandled  = USBFS_InitControlRead();
                }
                else if (CY_GET_REG8(USBFS_wValueHi) == USBFS_DESCR_CONFIG)
                {
                    pTmp = USBFS_GetConfigTablePtr(CY_GET_REG8(USBFS_wValueLo));
                    USBFS_currentTD.pData = pTmp->p_list;
                    count = ((uint16)(USBFS_currentTD.pData)[ \
                                      USBFS_CONFIG_DESCR_TOTAL_LENGTH_HI] << 8u) | \
                                     (USBFS_currentTD.pData)[USBFS_CONFIG_DESCR_TOTAL_LENGTH_LOW];
                    USBFS_currentTD.count = count;
                    requestHandled  = USBFS_InitControlRead();
                }
                #if defined(USBFS_ENABLE_STRINGS)
                else if (CY_GET_REG8(USBFS_wValueHi) == USBFS_DESCR_STRING)
                {
                    /* Descriptor Strings*/
                    #if defined(USBFS_ENABLE_DESCRIPTOR_STRINGS)
                        nStr = 0u;
                        pStr = (volatile uint8 *)&USBFS_STRING_DESCRIPTORS[0u];
                        while ( (CY_GET_REG8(USBFS_wValueLo) > nStr) && (*pStr != 0u ))
                        {
                            pStr += *pStr;
                            nStr++;
                        };
                    #endif /* End USBFS_ENABLE_DESCRIPTOR_STRINGS */
                    /* Microsoft OS String*/
                    #if defined(USBFS_ENABLE_MSOS_STRING)
                        if( CY_GET_REG8(USBFS_wValueLo) == USBFS_STRING_MSOS )
                        {
                            pStr = (volatile uint8 *)&USBFS_MSOS_DESCRIPTOR[0u];
                        }
                    #endif /* End USBFS_ENABLE_MSOS_STRING*/
                    /* SN string*/
                    #if defined(USBFS_ENABLE_SN_STRING)
                        if( (CY_GET_REG8(USBFS_wValueLo) != 0) && 
                            (CY_GET_REG8(USBFS_wValueLo) == 
                            USBFS_DEVICE0_DESCR[USBFS_DEVICE_DESCR_SN_SHIFT]) )
                        {
                            pStr = (volatile uint8 *)&USBFS_SN_STRING_DESCRIPTOR[0u];
                            if(USBFS_snStringConfirm != USBFS_FALSE)
                            {
                                pStr = USBFS_fwSerialNumberStringDescriptor;
                            }
                            #if defined(USBFS_ENABLE_IDSN_STRING)
                                /* Read DIE ID and genarete string descriptor in RAM*/
                                USBFS_ReadDieID(USBFS_idSerialNumberStringDescriptor);
                                pStr = USBFS_idSerialNumberStringDescriptor;
                            #endif    /* End USBFS_ENABLE_IDSN_STRING */
                        }
                    #endif    /* End USBFS_ENABLE_SN_STRING */
                    if (*pStr != 0u)
                    {
                        USBFS_currentTD.count = *pStr;
                        USBFS_currentTD.pData = pStr;
                        requestHandled  = USBFS_InitControlRead();
                    }
                }
                #endif /* End USBFS_ENABLE_STRINGS */
                else
                {
                    requestHandled = USBFS_DispatchClassRqst();
                }
                break;
            case USBFS_GET_STATUS:
                switch ((CY_GET_REG8(USBFS_bmRequestType) & USBFS_RQST_RCPT_MASK))
                {
                    case USBFS_RQST_RCPT_EP:
                        USBFS_currentTD.count = USBFS_EP_STATUS_LENGTH;
                        USBFS_tBuffer[0] = USBFS_EP[ \
                                        CY_GET_REG8(USBFS_wIndexLo) & USBFS_DIR_UNUSED].hwEpState;
                        USBFS_tBuffer[1] = 0u;
                        USBFS_currentTD.pData = &USBFS_tBuffer[0u];
                        requestHandled  = USBFS_InitControlRead();
                        break;
                    case USBFS_RQST_RCPT_DEV:
                        USBFS_currentTD.count = USBFS_DEVICE_STATUS_LENGTH;
                        USBFS_tBuffer[0u] = USBFS_deviceStatus;
                        USBFS_tBuffer[1u] = 0u;
                        USBFS_currentTD.pData = &USBFS_tBuffer[0u];
                        requestHandled  = USBFS_InitControlRead();
                        break;
                    default:    /* requestHandled is initialezed as FALSE by default */
                        break;
                }
                break;
            case USBFS_GET_CONFIGURATION:
                USBFS_currentTD.count = 1u;
                USBFS_currentTD.pData = (uint8 *)&USBFS_configuration;
                requestHandled  = USBFS_InitControlRead();
                break;
            case USBFS_GET_INTERFACE:
                USBFS_currentTD.count = 1u;
                USBFS_currentTD.pData = (uint8 *)&USBFS_interfaceSetting[ \
                                                                            CY_GET_REG8(USBFS_wIndexLo)];
                requestHandled  = USBFS_InitControlRead();
                break;
            default: /* requestHandled is initialezed as FALSE by default */
                break;
        }
    }
    else {
        /* Control Write */
        switch (CY_GET_REG8(USBFS_bRequest))
        {
            case USBFS_SET_ADDRESS:
                USBFS_deviceAddress = CY_GET_REG8(USBFS_wValueLo);
                requestHandled = USBFS_InitNoDataControlTransfer();
                break;
            case USBFS_SET_CONFIGURATION:
                USBFS_configuration = CY_GET_REG8(USBFS_wValueLo);
                USBFS_configurationChanged = USBFS_TRUE;
                USBFS_Config(USBFS_TRUE);
                requestHandled = USBFS_InitNoDataControlTransfer();
                break;
            case USBFS_SET_INTERFACE:
                if (USBFS_ValidateAlternateSetting())
                {
                    USBFS_interfaceNumber = CY_GET_REG8(USBFS_wIndexLo);
                    USBFS_configurationChanged = USBFS_TRUE;
                    #if ((USBFS_EP_MA == USBFS__MA_DYNAMIC) && \
                         (USBFS_EP_MM == USBFS__EP_MANUAL) )
                        USBFS_Config(USBFS_FALSE);
                    #else
                        USBFS_ConfigAltChanged();
                    #endif /* End (USBFS_EP_MA == USBFS__MA_DYNAMIC) */
                    /* Update handled Alt setting changes status */
                    USBFS_interfaceSetting_last[USBFS_interfaceNumber] = 
                         USBFS_interfaceSetting[USBFS_interfaceNumber];
                    requestHandled = USBFS_InitNoDataControlTransfer();
                }
                break;
            case USBFS_CLEAR_FEATURE:
                switch (CY_GET_REG8(USBFS_bmRequestType) & USBFS_RQST_RCPT_MASK)
                {
                    case USBFS_RQST_RCPT_EP:
                        if (CY_GET_REG8(USBFS_wValueLo) == USBFS_ENDPOINT_HALT)
                        {
                            requestHandled = USBFS_ClearEndpointHalt();
                        }
                        break;
                    case USBFS_RQST_RCPT_DEV:
                        /* Clear device REMOTE_WAKEUP */
                        if (CY_GET_REG8(USBFS_wValueLo) == USBFS_DEVICE_REMOTE_WAKEUP)
                        {
                            USBFS_deviceStatus &= ~USBFS_DEVICE_STATUS_REMOTE_WAKEUP;
                            requestHandled = USBFS_InitNoDataControlTransfer();
                        }
                        break;
                    case USBFS_RQST_RCPT_IFC:
                        /* Validate interfaceNumber */
                        if (CY_GET_REG8(USBFS_wIndexLo) < USBFS_MAX_INTERFACES_NUMBER)
                        {
                            USBFS_interfaceStatus[CY_GET_REG8(USBFS_wIndexLo)] &= \
                                                                ~(CY_GET_REG8(USBFS_wValueLo)) ;
                            requestHandled = USBFS_InitNoDataControlTransfer();
                        }
                        break;
                    default:    /* requestHandled is initialezed as FALSE by default */
                        break;
                }
                break;
            case USBFS_SET_FEATURE:
                switch (CY_GET_REG8(USBFS_bmRequestType) & USBFS_RQST_RCPT_MASK)
                {
                    case USBFS_RQST_RCPT_EP:
                        if (CY_GET_REG8(USBFS_wValueLo) == USBFS_ENDPOINT_HALT)
                        {
                            requestHandled = USBFS_SetEndpointHalt();
                        }
                        break;
                    case USBFS_RQST_RCPT_DEV:
                        /* Set device REMOTE_WAKEUP */
                        if (CY_GET_REG8(USBFS_wValueLo) == USBFS_DEVICE_REMOTE_WAKEUP)
                        {
                            USBFS_deviceStatus |= USBFS_DEVICE_STATUS_REMOTE_WAKEUP;
                            requestHandled = USBFS_InitNoDataControlTransfer();
                        }
                        break;
                    case USBFS_RQST_RCPT_IFC:
                        /* Validate interfaceNumber */
                        if (CY_GET_REG8(USBFS_wIndexLo) < USBFS_MAX_INTERFACES_NUMBER)
                        {
                            USBFS_interfaceStatus[CY_GET_REG8(USBFS_wIndexLo)] &= \
                                                                ~(CY_GET_REG8(USBFS_wValueLo)) ;
                            requestHandled = USBFS_InitNoDataControlTransfer();
                        }
                        break;
                    default:    /* requestHandled is initialezed as FALSE by default */
                        break;
                }
                break;
            default:    /* requestHandled is initialezed as FALSE by default */
                break;
        }
    }
    return(requestHandled);
}


#if defined(USBFS_ENABLE_IDSN_STRING)

    /***************************************************************************
    * Function Name: USBFS_ReadDieID
    ****************************************************************************
    *
    * Summary:
    *  This routine read Die ID and genarete Serian Number string descriptor.
    *
    * Parameters:
    *  descr:  pointer on string descriptor.
    *
    * Return:
    *  None.
    *
    * Reentrant:
    *  No.
    *
    ***************************************************************************/
    void USBFS_ReadDieID(uint8 *descr) 
    {
        uint8 i,j;
        uint8 value;
        static char8 const hex[16u] = "0123456789ABCDEF";

        /* check descriptor validation */
        if( (descr[0u] > 1u ) && (descr[1u] == USBFS_DESCR_STRING) )
        {
            /* fill descriptor */
            for(j = 0u, i = 2u; i < descr[0u]; i += 2u)
            {
                value = CY_GET_XTND_REG8((void CYFAR *)(USBFS_DIE_ID + j++));
                descr[i] = (uint8)hex[value >> 4u];
                i += 2u;
                descr[i] = (uint8)hex[value & 0x0Fu];
            }
        }
    }

#endif /* End $INSTANCE_NAME`_ENABLE_IDSN_STRING*/


/*******************************************************************************
* Function Name: USBFS_ConfigReg
********************************************************************************
*
* Summary:
*  This routine configures hardware registers from the variables.
*  It is called from USBFS_Config() function and from RestoreConfig
*  after Wakeup.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void USBFS_ConfigReg(void) 
{
    uint8 ep;
    uint8 i;
    #if(USBFS_EP_MM == USBFS__EP_DMAAUTO)
        uint8 ep_type = 0u;
    #endif /* End USBFS_EP_MM == USBFS__EP_DMAAUTO */

    /* Set the endpoint buffer addresses */
    ep = USBFS_EP1;
    for (i = 0u; i < 0x80u; i+= 0x10u)
    {
        CY_SET_REG8(&USBFS_ARB_EP1_CFG_PTR[i], USBFS_ARB_EPX_CFG_CRC_BYPASS |
                                                          USBFS_ARB_EPX_CFG_RESET);

        #if(USBFS_EP_MM != USBFS__EP_MANUAL)
            /* Enable all Arbiter EP Interrupts : err, buf under, buf over, dma gnt(mode2 only), in buf full */
            USBFS_ARB_EP1_INT_EN_PTR[i] = USBFS_ARB_EPX_INT_MASK;
        #endif   /* End USBFS_EP_MM != USBFS__EP_MANUAL */

        if(USBFS_EP[ep].epMode != USBFS_MODE_DISABLE)
        {
            if((USBFS_EP[ep].addr & USBFS_DIR_IN) != 0u )
            {
                CY_SET_REG8(&USBFS_SIE_EP1_CR0_PTR[i], USBFS_MODE_NAK_IN);
            }
            else
            {
                CY_SET_REG8(&USBFS_SIE_EP1_CR0_PTR[i], USBFS_MODE_NAK_OUT);
                /* Prepare EP type mask for automatic memory allocation */
                #if(USBFS_EP_MM == USBFS__EP_DMAAUTO)
                    ep_type |= 0x01u << (ep - USBFS_EP1);
                #endif /* End USBFS_EP_MM == USBFS__EP_DMAAUTO */
            }
        }
        else
        {
            CY_SET_REG8(&USBFS_SIE_EP1_CR0_PTR[i], USBFS_MODE_STALL_DATA_EP);
        }

        #if(USBFS_EP_MM != USBFS__EP_DMAAUTO)
            CY_SET_REG8(&USBFS_SIE_EP1_CNT0_PTR[i],   USBFS_EP[ep].bufferSize >> 8u);
            CY_SET_REG8(&USBFS_SIE_EP1_CNT1_PTR[i],   USBFS_EP[ep].bufferSize & 0xFFu);

            CY_SET_REG8(&USBFS_ARB_RW1_RA_PTR[i],     USBFS_EP[ep].buffOffset & 0xFFu);
            CY_SET_REG8(&USBFS_ARB_RW1_RA_MSB_PTR[i], USBFS_EP[ep].buffOffset >> 8u);
            CY_SET_REG8(&USBFS_ARB_RW1_WA_PTR[i],     USBFS_EP[ep].buffOffset & 0xFFu);
            CY_SET_REG8(&USBFS_ARB_RW1_WA_MSB_PTR[i], USBFS_EP[ep].buffOffset >> 8u);
        #endif /* End USBFS_EP_MM != USBFS__EP_DMAAUTO */

        ep++;
    }

    #if(USBFS_EP_MM == USBFS__EP_DMAAUTO)
         /* BUF_SIZE depend on DMA_THRESS value: 55-32 bytes  44-16 bytes 33-8 bytes 22-4 bytes 11-2 bytes */
        USBFS_BUF_SIZE_REG = USBFS_DMA_BUF_SIZE;
        USBFS_DMA_THRES_REG = USBFS_DMA_BYTES_PER_BURST;   /* DMA burst threshold */
        USBFS_DMA_THRES_MSB_REG = 0u;
        USBFS_EP_ACTIVE_REG = USBFS_ARB_INT_MASK;
        USBFS_EP_TYPE_REG = ep_type;
        /* Cfg_cmp bit set to 1 once configuration is complete. */
        USBFS_ARB_CFG_REG = USBFS_ARB_CFG_AUTO_DMA | USBFS_ARB_CFG_AUTO_MEM |
                                       USBFS_ARB_CFG_CFG_CPM;
        /* Cfg_cmp bit set to 0 during configuration of PFSUSB Registers. */
        USBFS_ARB_CFG_REG = USBFS_ARB_CFG_AUTO_DMA | USBFS_ARB_CFG_AUTO_MEM;
    #endif /* End USBFS_EP_MM == USBFS__EP_DMAAUTO */

    CY_SET_REG8(USBFS_SIE_EP_INT_EN_PTR, 0xFFu);
}


/*******************************************************************************
* Function Name: USBFS_Config
********************************************************************************
*
* Summary:
*  This routine configures endpoints for the entire configuration by scanning
*  the configuration descriptor.
*
* Parameters:
*  clearAltSetting: It configures the bAlternateSetting 0 for each interface.
*
* Return:
*  None.
*
* USBFS_interfaceClass - Initialized class array for each interface.
*   It is used for hangling Class specific requests depend on interface class.
*   Different classes in multiple Alternate settings does not supported.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void USBFS_Config(uint8 clearAltSetting) 
{
    uint8 ep;
    uint8 cur_ep;
    uint8 i;
    uint8 iso;
    uint8 *pDescr;
    #if(USBFS_EP_MM != USBFS__EP_DMAAUTO)
        uint16 count = 0u;
    #endif /* End USBFS_EP_MM != USBFS__EP_DMAAUTO */
    
    T_USBFS_LUT *pTmp;
    T_USBFS_EP_SETTINGS_BLOCK *pEP;

    /* Clear all of the endpoints */
    for (ep = 0u; ep < USBFS_MAX_EP; ep++)
    {
        USBFS_EP[ep].attrib = 0u;
        USBFS_EP[ep].hwEpState = 0u;
        USBFS_EP[ep].apiEpState = USBFS_NO_EVENT_PENDING;
        USBFS_EP[ep].epToggle = 0u;
        USBFS_EP[ep].epMode = USBFS_MODE_DISABLE;
        USBFS_EP[ep].bufferSize = 0u;
        USBFS_EP[ep].interface = 0u;

    }

    /* Clear Alternate settings for all interfaces */
    if(clearAltSetting != 0u)
    {
        for (i = 0u; i < USBFS_MAX_INTERFACES_NUMBER; i++)
        {
            USBFS_interfaceSetting[i] = 0x00u;
            USBFS_interfaceSetting_last[i] = 0x00u;
        }
    }

    /* Init Endpoints and Device Status if configured */
    if(USBFS_configuration > 0u)
    {
        pTmp = USBFS_GetConfigTablePtr(USBFS_configuration - 1u);
        /* Set Power status for current configuration */
        pDescr = (uint8 *)pTmp->p_list;
        if((pDescr[USBFS_CONFIG_DESCR_ATTRIB] & USBFS_CONFIG_DESCR_ATTRIB_SELF_POWERED) != 0u)
        {
            USBFS_deviceStatus |=  USBFS_DEVICE_STATUS_SELF_POWERED;
        }
        else
        {
            USBFS_deviceStatus &=  ~USBFS_DEVICE_STATUS_SELF_POWERED;
        }
        pTmp++;
        ep = pTmp->c;  /* For this table, c is the number of endpoints configurations  */

        #if ((USBFS_EP_MA == USBFS__MA_DYNAMIC) && \
             (USBFS_EP_MM == USBFS__EP_MANUAL) )
            /* Config for dynamic EP memory allocation */
            /* p_list points the endpoint setting table. */
            pEP = (T_USBFS_EP_SETTINGS_BLOCK *) pTmp->p_list;
            for (i = 0u; i < ep; i++, pEP++)
            {
                /* compate current Alternate setting with EP Alt*/
                if(USBFS_interfaceSetting[pEP->interface] == pEP->altSetting)
                {
                    cur_ep = pEP->addr & USBFS_DIR_UNUSED;
                    iso  = ((pEP->attributes & USBFS_EP_TYPE_MASK) == USBFS_EP_TYPE_ISOC);
                    if (pEP->addr & USBFS_DIR_IN)
                    {
                        /* IN Endpoint */
                        USBFS_EP[cur_ep].apiEpState = USBFS_EVENT_PENDING;
                        USBFS_EP[cur_ep].epMode = \
                                                (iso ? USBFS_MODE_ISO_IN : USBFS_MODE_ACK_IN);
                        #if defined(USBFS_ENABLE_CDC_CLASS)
                            if(((pEP->bMisc == USBFS_CLASS_CDC_DATA) ||
                                (pEP->bMisc == USBFS_CLASS_CDC)) &&
                                ((pEP->attributes & USBFS_EP_TYPE_MASK) != USBFS_EP_TYPE_INT))
                            {
                                USBFS_cdc_data_in_ep = cur_ep;
                            }
                        #endif  /* End USBFS_ENABLE_CDC_CLASS*/
                        #if defined(USBFS_ENABLE_MIDI_STREAMING)
                            if((pEP->bMisc == USBFS_CLASS_AUDIO) &&
                               ((pEP->attributes & USBFS_EP_TYPE_MASK) == USBFS_EP_TYPE_BULK))
                            {
                                USBFS_midi_in_ep = cur_ep;
                            }
                        #endif  /* End USBFS_ENABLE_MIDI_STREAMING*/
                    }
                    else
                    {
                        /* OUT Endpoint */
                        USBFS_EP[cur_ep].apiEpState = USBFS_NO_EVENT_PENDING;
                        USBFS_EP[cur_ep].epMode = \
                                                (iso ? USBFS_MODE_ISO_OUT : USBFS_MODE_ACK_OUT);
                        #if defined(USBFS_ENABLE_CDC_CLASS)
                            if(((pEP->bMisc == USBFS_CLASS_CDC_DATA) ||
                                (pEP->bMisc == USBFS_CLASS_CDC)) &&
                                ((pEP->attributes & USBFS_EP_TYPE_MASK) != USBFS_EP_TYPE_INT))
                            {
                                USBFS_cdc_data_out_ep = cur_ep;
                            }
                        #endif  /* End USBFS_ENABLE_CDC_CLASS*/
                        #if defined(USBFS_ENABLE_MIDI_STREAMING)
                            if((pEP->bMisc == USBFS_CLASS_AUDIO) &&
                               ((pEP->attributes & USBFS_EP_TYPE_MASK) == USBFS_EP_TYPE_BULK))
                            {
                                USBFS_midi_out_ep = cur_ep;
                            }
                        #endif  /* End USBFS_ENABLE_MIDI_STREAMING*/
                    }
                    USBFS_EP[cur_ep].bufferSize = pEP->bufferSize;
                    USBFS_EP[cur_ep].addr = pEP->addr;
                    USBFS_EP[cur_ep].attrib = pEP->attributes;
                }
            }
        #else /* Config for static EP memory allocation  */
            for (i = USBFS_EP1; i < USBFS_MAX_EP; i++)
            {
                /* and p_list points the endpoint setting table. */
                pEP = (T_USBFS_EP_SETTINGS_BLOCK *) pTmp->p_list;
                /* find max length for each EP and select it (length could be different in different Alt settings) */
                /* but other settings should be correct with regards to Interface alt Setting */
                for (cur_ep = 0u; cur_ep < ep; cur_ep++, pEP++)
                {
                    /* EP count is equal to EP # in table and we found larger EP length than have before*/
                    if(i == (pEP->addr & USBFS_DIR_UNUSED))
                    {
                        if(USBFS_EP[i].bufferSize < pEP->bufferSize)
                        {
                            USBFS_EP[i].bufferSize = pEP->bufferSize;
                        }
                        /* compate current Alternate setting with EP Alt*/
                        if(USBFS_interfaceSetting[pEP->interface] == pEP->altSetting)
                        {
                            iso  = ((pEP->attributes & USBFS_EP_TYPE_MASK) == USBFS_EP_TYPE_ISOC);
                            if (pEP->addr & USBFS_DIR_IN)
                            {
                                /* IN Endpoint */
                                USBFS_EP[i].apiEpState = USBFS_EVENT_PENDING;
                                USBFS_EP[i].epMode =
                                                    (iso ? USBFS_MODE_ISO_IN : USBFS_MODE_ACK_IN);
                                /* Find and init CDC IN endpoint number */
                                #if defined(USBFS_ENABLE_CDC_CLASS)
                                    if(((pEP->bMisc == USBFS_CLASS_CDC_DATA) ||
                                        (pEP->bMisc == USBFS_CLASS_CDC)) &&
                                        ((pEP->attributes & USBFS_EP_TYPE_MASK) !=
                                                                                        USBFS_EP_TYPE_INT))
                                    {
                                        USBFS_cdc_data_in_ep = i;
                                    }
                                #endif  /* End USBFS_ENABLE_CDC_CLASS*/
                                #if defined(USBFS_ENABLE_MIDI_STREAMING)
                                    if((pEP->bMisc == USBFS_CLASS_AUDIO) &&
                                       ((pEP->attributes & USBFS_EP_TYPE_MASK) ==
                                                                                        USBFS_EP_TYPE_BULK))
                                    {
                                        USBFS_midi_in_ep = i;
                                    }
                                #endif  /* End USBFS_ENABLE_MIDI_STREAMING*/
                            }
                            else
                            {
                                /* OUT Endpoint */
                                USBFS_EP[i].apiEpState = USBFS_NO_EVENT_PENDING;
                                USBFS_EP[i].epMode =
                                                (iso ? USBFS_MODE_ISO_OUT : USBFS_MODE_ACK_OUT);
                                /* Find and init CDC IN endpoint number */
                                #if defined(USBFS_ENABLE_CDC_CLASS)
                                    if(((pEP->bMisc == USBFS_CLASS_CDC_DATA) ||
                                        (pEP->bMisc == USBFS_CLASS_CDC)) &&
                                        ((pEP->attributes & USBFS_EP_TYPE_MASK) !=
                                                                                    USBFS_EP_TYPE_INT))
                                    {
                                        USBFS_cdc_data_out_ep = i;
                                    }
                                #endif  /* End USBFS_ENABLE_CDC_CLASS*/
                                #if defined(USBFS_ENABLE_MIDI_STREAMING)
                                    if((pEP->bMisc == USBFS_CLASS_AUDIO) &&
                                       ((pEP->attributes & USBFS_EP_TYPE_MASK) ==
                                                                                        USBFS_EP_TYPE_BULK))
                                    {
                                        USBFS_midi_out_ep = i;
                                    }
                                #endif  /* End USBFS_ENABLE_MIDI_STREAMING*/
                            }
                            USBFS_EP[i].addr = pEP->addr;
                            USBFS_EP[i].attrib = pEP->attributes;

                            #if(USBFS_EP_MM == USBFS__EP_DMAAUTO)
                                break;      /* use first EP setting in Auto memory managment */
                            #endif /* End USBFS_EP_MM == USBFS__EP_DMAAUTO */
                        }
                    }
                }
            }
        #endif /* End (USBFS_EP_MA == USBFS__MA_DYNAMIC) */

        /* Init class array for each interface and interface number for each EP.
        *  It is used for hangling Class specific requests directed to either an
        *  interface or the endpoint.
        */
        /* p_list points the endpoint setting table. */
        pEP = (T_USBFS_EP_SETTINGS_BLOCK *) pTmp->p_list;
        for (i = 0u; i < ep; i++, pEP++)
        {
            /* config interface number for each EP*/
            USBFS_EP[pEP->addr & USBFS_DIR_UNUSED].interface = pEP->interface;
        }
        /* init pointer on interface class table*/
        USBFS_interfaceClass = USBFS_GetInterfaceClassTablePtr();
        /* Set the endpoint buffer addresses */
        
        #if(USBFS_EP_MM != USBFS__EP_DMAAUTO)
            for (ep = USBFS_EP1; ep < USBFS_MAX_EP; ep++)
            {
                USBFS_EP[ep].buffOffset = count;
                 count += USBFS_EP[ep].bufferSize;
            }
        #endif /* End USBFS_EP_MM != USBFS__EP_DMAAUTO */

        /* Congigure hardware registers */
        USBFS_ConfigReg();
    } /* USBFS_configuration > 0 */
}


/*******************************************************************************
* Function Name: USBFS_ConfigAltChanged
********************************************************************************
*
* Summary:
*  This routine undate configuration for the required endpoints only.
*  It is called after SET_INTERFACE request when Static memory allocation used.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void USBFS_ConfigAltChanged() 
{
    uint8 ep,cur_ep,i;
    uint8 iso;
    uint8 ri;

    T_USBFS_LUT *pTmp;
    T_USBFS_EP_SETTINGS_BLOCK *pEP;


    /* Init Endpoints and Device Status if configured */
    if(USBFS_configuration > 0u)
    {
        pTmp = USBFS_GetConfigTablePtr(USBFS_configuration - 1u);
        pTmp++;
        ep = pTmp->c;  /* For this table, c is the number of endpoints configurations  */

        /* Do not touch EP wich doesn't need reconfiguration */
        /* When Alt setting chaged, the only required endpoints need to be reconfigured */
        /* p_list points the endpoint setting table. */
        pEP = (T_USBFS_EP_SETTINGS_BLOCK *) pTmp->p_list;
        for (i = 0u; i < ep; i++, pEP++)
        {
            /*If Alt setting changed and new is same with EP Alt */
            if((USBFS_interfaceSetting[pEP->interface] !=
                USBFS_interfaceSetting_last[pEP->interface] ) &&
               (USBFS_interfaceSetting[pEP->interface] == pEP->altSetting) &&
                pEP->interface == CY_GET_REG8(USBFS_wIndexLo))
            {
                cur_ep = pEP->addr & USBFS_DIR_UNUSED;
                ri = ((cur_ep - USBFS_EP1) << USBFS_EPX_CNTX_ADDR_SHIFT);
                iso  = ((pEP->attributes & USBFS_EP_TYPE_MASK) == USBFS_EP_TYPE_ISOC);
                if (pEP->addr & USBFS_DIR_IN)
                {
                    /* IN Endpoint */
                    USBFS_EP[cur_ep].apiEpState = USBFS_EVENT_PENDING;
                    USBFS_EP[cur_ep].epMode =
                                            (iso ? USBFS_MODE_ISO_IN : USBFS_MODE_ACK_IN);
                }
                else
                {
                    /* OUT Endpoint */
                    USBFS_EP[cur_ep].apiEpState = USBFS_NO_EVENT_PENDING;
                    USBFS_EP[cur_ep].epMode =
                                            (iso ? USBFS_MODE_ISO_OUT : USBFS_MODE_ACK_OUT);
                }
                 /* Change the SIE mode for the selected EP to NAK ALL */
                 CY_SET_REG8(&USBFS_SIE_EP1_CR0_PTR[ri], USBFS_MODE_NAK_IN_OUT);
                USBFS_EP[cur_ep].bufferSize = pEP->bufferSize;
                USBFS_EP[cur_ep].addr = pEP->addr;
                USBFS_EP[cur_ep].attrib = pEP->attributes;

                /* Clear the data toggle */
                USBFS_EP[cur_ep].epToggle = 0u;

                /* Dynamic reconfiguration for mode 3 transfer */
                #if((USBFS_EP_MM == USBFS__EP_DMAAUTO) && (!CY_PSOC5A) )
                    /* In_data_rdy for selected EP should be set to 0 */
                    USBFS_ARB_EP1_CFG_PTR[ri] &= ~USBFS_ARB_EPX_CFG_IN_DATA_RDY;

                    /* write the EP number for which reconfiguration is required */
                    USBFS_DYN_RECONFIG_REG = (cur_ep - USBFS_EP1) << 
                                                        USBFS_DYN_RECONFIG_EP_SHIFT;
                    /* Set the dyn_config_en bit in dynamic reconfiguration register */
                    USBFS_DYN_RECONFIG_REG |= USBFS_DYN_RECONFIG_ENABLE;
                    /* wait for the dyn_config_rdy bit to set by the block,
                    *  this bit will be set to 1 when block is ready for reconfiguration.
                    */
                    while((USBFS_DYN_RECONFIG_REG & USBFS_DYN_RECONFIG_RDY_STS) == 0u);
                    /* Once dyn_config_rdy bit is set, FW can change the EP configuration. */
                    /* Change EP Type with new direction */
                    if((pEP->addr & USBFS_DIR_IN) == 0)
                    {
                        USBFS_EP_TYPE_REG |= 0x01u << (cur_ep - USBFS_EP1);
                    }
                    else
                    {
                        USBFS_EP_TYPE_REG &= ~(0x01u << (cur_ep - USBFS_EP1));
                    }
                    /* dynamic reconfiguration enable bit cleared, pointers and control/status
                    *  signals for the selected EP is cleared/re-initialized on negedge
                    *  of dynamic reconfiguration enable bit).
                    */
                    USBFS_DYN_RECONFIG_REG &= ~USBFS_DYN_RECONFIG_ENABLE;
                    /* The main loop has to reenable DMA and OUT endpoint*/
                #else
                CY_SET_REG8(&USBFS_SIE_EP1_CNT0_PTR[ri],   USBFS_EP[cur_ep].bufferSize >> 8u);
                CY_SET_REG8(&USBFS_SIE_EP1_CNT1_PTR[ri],   USBFS_EP[cur_ep].bufferSize & 0xFFu);

                CY_SET_REG8(&USBFS_ARB_RW1_RA_PTR[ri],     USBFS_EP[cur_ep].buffOffset & 0xFFu);
                CY_SET_REG8(&USBFS_ARB_RW1_RA_MSB_PTR[ri], USBFS_EP[cur_ep].buffOffset >> 8u);
                CY_SET_REG8(&USBFS_ARB_RW1_WA_PTR[ri],     USBFS_EP[cur_ep].buffOffset & 0xFFu);
                CY_SET_REG8(&USBFS_ARB_RW1_WA_MSB_PTR[ri], USBFS_EP[cur_ep].buffOffset >> 8u);
                #endif /* End USBFS_EP_MM == USBFS__EP_DMAAUTO */
            }
        }
    } /* USBFS_configuration > 0 */
}


/*******************************************************************************
* Function Name: USBFS_GetConfigTablePtr
********************************************************************************
*
* Summary:
*  This routine returns a pointer a configuration table entry
*
* Parameters:
*  c:  Configuration Index
*
* Return:
*  Device Descriptor pointer.
*
*******************************************************************************/
T_USBFS_LUT *USBFS_GetConfigTablePtr(uint8 c) \
                                                        
{
    /* Device Table */
    T_USBFS_LUT *pTmp;

    pTmp = USBFS_GetDeviceTablePtr();

    /* The first entry points to the Device Descriptor,
       the the configuration entries  */
    return(pTmp[c + 1u].p_list);
}


/*******************************************************************************
* Function Name: USBFS_GetDeviceTablePtr
********************************************************************************
*
* Summary:
*  This routine returns a pointer to the Device table
*
* Parameters:
*  None.
*
* Return:
*  Device Table pointer
*
*******************************************************************************/
T_USBFS_LUT *USBFS_GetDeviceTablePtr(void) 
{
    /* Device Table */
    return(USBFS_TABLE[USBFS_device].p_list);
}


/*******************************************************************************
* Function Name: USB_GetInterfaceClassTablePtr
********************************************************************************
*
* Summary:
*  This routine returns Interface Class table pointer, which contains
*  the relation between interface number and interface class.
*
* Parameters:
*  None.
*
* Return:
*  Interface Class table pointer.
*
*******************************************************************************/
uint8 CYCODE *USBFS_GetInterfaceClassTablePtr(void)
                                                        
{
    T_USBFS_LUT *pTmp;
    uint8 currentInterfacesNum;

    pTmp = USBFS_GetConfigTablePtr(USBFS_configuration - 1u);
    currentInterfacesNum  = ((uint8 *) pTmp->p_list)[USBFS_CONFIG_DESCR_NUM_INTERFACES];
    /* Third entry in the LUT starts the Interface Table pointers */
    pTmp += 2;
    /* The INTERFACE_CLASS table is located after all interfaces*/
    pTmp += currentInterfacesNum;
    return(pTmp->p_list);
}


/*******************************************************************************
* Function Name: USBFS_TerminateEP
********************************************************************************
*
* Summary:
*  This function terminates the specified USBFS endpoint. 
*  This function should be used before endpoint reconfiguration.
*
* Parameters:
*  Endpoint number.
*
* Return:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void USBFS_TerminateEP(uint8 ep) 
{
    uint8 ri;

    ep &= USBFS_DIR_UNUSED;
    ri = ((ep - USBFS_EP1) << USBFS_EPX_CNTX_ADDR_SHIFT);

    if ((ep > USBFS_EP0) && (ep < USBFS_MAX_EP))
    {
        /* Set the endpoint Halt */
        USBFS_EP[ep].hwEpState |= (USBFS_ENDPOINT_STATUS_HALT);

        /* Clear the data toggle */
        USBFS_EP[ep].epToggle = 0u;
        USBFS_EP[ep].apiEpState = USBFS_NO_EVENT_ALLOWED;

        if (USBFS_EP[ep].addr & USBFS_DIR_IN)
        {
            /* IN Endpoint */
            CY_SET_REG8(&USBFS_SIE_EP1_CR0_PTR[ri], USBFS_MODE_NAK_IN);
        }
        else
        {
            /* OUT Endpoint */
            CY_SET_REG8(&USBFS_SIE_EP1_CR0_PTR[ri], USBFS_MODE_NAK_OUT);
        }
    }
}


/*******************************************************************************
* Function Name: USBFS_SetEndpointHalt
********************************************************************************
*
* Summary:
*  This routine handles set endpoint halt.
*
* Parameters:
*  None.
*
* Return:
*  requestHandled.
*
* Reentrant:
*  No.
*
*******************************************************************************/
uint8 USBFS_SetEndpointHalt(void) 
{
    uint8 ep, ri;
    uint8 requestHandled = USBFS_FALSE;

    /* Set endpoint halt */
    ep = CY_GET_REG8(USBFS_wIndexLo) & USBFS_DIR_UNUSED;
    ri = ((ep - USBFS_EP1) << USBFS_EPX_CNTX_ADDR_SHIFT);

    if ((ep > USBFS_EP0) && (ep < USBFS_MAX_EP))
    {
        /* Set the endpoint Halt */
        USBFS_EP[ep].hwEpState |= (USBFS_ENDPOINT_STATUS_HALT);

        /* Clear the data toggle */
        USBFS_EP[ep].epToggle = 0u;
        USBFS_EP[ep].apiEpState |= USBFS_NO_EVENT_ALLOWED;

        if (USBFS_EP[ep].addr & USBFS_DIR_IN)
        {
            /* IN Endpoint */
            CY_SET_REG8(&USBFS_SIE_EP1_CR0_PTR[ri], USBFS_MODE_STALL_DATA_EP |
                                                               USBFS_MODE_ACK_IN);
        }
        else
        {
            /* OUT Endpoint */
            CY_SET_REG8(&USBFS_SIE_EP1_CR0_PTR[ri], USBFS_MODE_STALL_DATA_EP |
                                                               USBFS_MODE_ACK_OUT);
        }
        requestHandled = USBFS_InitNoDataControlTransfer();
    }

    return(requestHandled);
}


/*******************************************************************************
* Function Name: USBFS_ClearEndpointHalt
********************************************************************************
*
* Summary:
*  This routine handles clear endpoint halt.
*
* Parameters:
*  None.
*
* Return:
*  requestHandled.
*
* Reentrant:
*  No.
*
*******************************************************************************/
uint8 USBFS_ClearEndpointHalt(void) 
{
    uint8 ep, ri;
    uint8 requestHandled = USBFS_FALSE;

    /* Clear endpoint halt */
    ep = CY_GET_REG8(USBFS_wIndexLo) & USBFS_DIR_UNUSED;
    ri = ((ep - USBFS_EP1) << USBFS_EPX_CNTX_ADDR_SHIFT);

    if ((ep > USBFS_EP0) && (ep < USBFS_MAX_EP))
    {
        /* Clear the endpoint Halt */
        USBFS_EP[ep].hwEpState &= ~(USBFS_ENDPOINT_STATUS_HALT);

        /* Clear the data toggle */
        USBFS_EP[ep].epToggle = 0u;
        /* Clear toggle bit for already armed packet */
        CY_SET_REG8(&USBFS_SIE_EP1_CNT0_PTR[ri], 
                    CY_GET_REG8(&USBFS_SIE_EP1_CNT0_PTR[ri]) & ~USBFS_EPX_CNT_DATA_TOGGLE);
        /* Return api State as it was defined before */
        USBFS_EP[ep].apiEpState &= ~USBFS_NO_EVENT_ALLOWED;

        if (USBFS_EP[ep].addr & USBFS_DIR_IN)
        {
            /* IN Endpoint */
            if(USBFS_EP[ep].apiEpState == USBFS_IN_BUFFER_EMPTY)
            {       /* Wait for next packet from application */
                CY_SET_REG8(&USBFS_SIE_EP1_CR0_PTR[ri], USBFS_MODE_NAK_IN);
            }
            else    /* Continue armed transfer */
            {
                CY_SET_REG8(&USBFS_SIE_EP1_CR0_PTR[ri], USBFS_MODE_ACK_IN);
            }
        }
        else
        {
            /* OUT Endpoint */
            if(USBFS_EP[ep].apiEpState == USBFS_OUT_BUFFER_FULL)
            {       /* Allow application to read full buffer */
                CY_SET_REG8(&USBFS_SIE_EP1_CR0_PTR[ri], USBFS_MODE_NAK_OUT);
            }
            else    /* Mark endpoint as empty, so it will be reloaded */
            {
                CY_SET_REG8(&USBFS_SIE_EP1_CR0_PTR[ri], USBFS_MODE_ACK_OUT);
            }
        }
        requestHandled = USBFS_InitNoDataControlTransfer();
    }

    return(requestHandled);
}


/*******************************************************************************
* Function Name: USBFS_ValidateAlternateSetting
********************************************************************************
*
* Summary:
*  Validates (and records) a SET INTERFACE request.
*
* Parameters:
*  None.
*
* Return:
*  requestHandled.
*
* Reentrant:
*  No.
*
*******************************************************************************/
uint8 USBFS_ValidateAlternateSetting(void) 
{
    uint8 requestHandled = USBFS_TRUE;
    uint8 interfaceNum;
    T_USBFS_LUT *pTmp;
    uint8 currentInterfacesNum;

    interfaceNum = CY_GET_REG8(USBFS_wIndexLo);
    /* Validate interface setting, stall if invalid. */
    pTmp = USBFS_GetConfigTablePtr(USBFS_configuration - 1u);
    currentInterfacesNum  = ((uint8 *) pTmp->p_list)[USBFS_CONFIG_DESCR_NUM_INTERFACES];

    if((interfaceNum >= currentInterfacesNum) || (interfaceNum >= USBFS_MAX_INTERFACES_NUMBER))
    {   /* wrong interface number */
        requestHandled = USBFS_FALSE;
    }
    else
    {
        /* save current Alt setting to find out the difference in Config() function */
        USBFS_interfaceSetting_last[interfaceNum] = USBFS_interfaceSetting[interfaceNum];
        USBFS_interfaceSetting[interfaceNum] = CY_GET_REG8(USBFS_wValueLo);
    }

    return (requestHandled);
}


/* [] END OF FILE */
