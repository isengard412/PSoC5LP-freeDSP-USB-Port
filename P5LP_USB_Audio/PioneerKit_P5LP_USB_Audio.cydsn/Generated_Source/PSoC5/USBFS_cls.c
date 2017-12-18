/*******************************************************************************
* File Name: USBFS_cls.c
* Version 2.50
*
* Description:
*  USB Class request handler.
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

#if(USBFS_EXTERN_CLS == USBFS_FALSE)


/***************************************
* External references
***************************************/

#if defined(USBFS_ENABLE_HID_CLASS)
    uint8 USBFS_DispatchHIDClassRqst(void);
#endif /* End USBFS_ENABLE_HID_CLASS */
#if defined(USBFS_ENABLE_AUDIO_CLASS)
    uint8 USBFS_DispatchAUDIOClassRqst(void);
#endif /* End USBFS_ENABLE_HID_CLASS */
#if defined(USBFS_ENABLE_CDC_CLASS)
    uint8 USBFS_DispatchCDCClassRqst(void);
#endif /* End USBFS_ENABLE_CDC_CLASS */

extern uint8 CYCODE *USBFS_interfaceClass;
extern volatile T_USBFS_EP_CTL_BLOCK USBFS_EP[];


/***************************************
* User Implemented Class Driver Declarations.
***************************************/
/* `#START USER_DEFINED_CLASS_DECLARATIONS` Place your declaration here */

/* `#END` */


/*******************************************************************************
* Function Name: USBFS_DispatchClassRqst
********************************************************************************
* Summary:
*  This routine dispatches class specific requests depend on inteface class.
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
uint8 USBFS_DispatchClassRqst() 
{
    uint8 requestHandled = USBFS_FALSE;
    uint8 interfaceNumber = 0u;

    switch(CY_GET_REG8(USBFS_bmRequestType) & USBFS_RQST_RCPT_MASK)
    {
        case USBFS_RQST_RCPT_IFC:        /* class-specific request directed to an interface */
            interfaceNumber = CY_GET_REG8(USBFS_wIndexLo); /* wIndexLo contain Interface number */
            break;
        case USBFS_RQST_RCPT_EP:         /* class-specific request directed to the endpoint */
            /* find related intenface to the endpoint, wIndexLo contain EP number */
            interfaceNumber =
                USBFS_EP[CY_GET_REG8(USBFS_wIndexLo) & USBFS_DIR_UNUSED].interface;
            break;
        default:    /* requestHandled is initialized as FALSE by default */
            break;
    }
    /* Handle Class request depend on interface type */
    switch(USBFS_interfaceClass[interfaceNumber])
    {
        case USBFS_CLASS_HID:
            #if defined(USBFS_ENABLE_HID_CLASS)
                requestHandled = USBFS_DispatchHIDClassRqst();
            #endif /* USBFS_ENABLE_HID_CLASS */
            break;
        case USBFS_CLASS_AUDIO:
            #if defined(USBFS_ENABLE_AUDIO_CLASS)
                requestHandled = USBFS_DispatchAUDIOClassRqst();
            #endif /* USBFS_ENABLE_HID_CLASS */
            break;
        case USBFS_CLASS_CDC:
            #if defined(USBFS_ENABLE_CDC_CLASS)
                requestHandled = USBFS_DispatchCDCClassRqst();
            #endif /* USBFS_ENABLE_CDC_CLASS */
            break;
        default:    /* requestHandled is initialezed as FALSE by default */
            break;
    }

    /* `#START USER_DEFINED_CLASS_CODE` Place your Class request here */

    /* `#END` */

    return(requestHandled);
}


/*******************************************************************************
* Additional user functions supporting Class Specific Requests
********************************************************************************/

/* `#START CLASS_SPECIFIC_FUNCTIONS` Place any additional functions here */

/* `#END` */

#endif /* USBFS_EXTERN_CLS */


/* [] END OF FILE */
