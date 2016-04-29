/*******************************************************************************
* File Name: MIDI1_UARTINT.c
* Version 2.50
*
* Description:
*  This file provides all Interrupt Service functionality of the UART component
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "MIDI1_UART.h"
#include "cyapicallbacks.h"


/***************************************
* Custom Declarations
***************************************/
/* `#START CUSTOM_DECLARATIONS` Place your declaration here */

/* `#END` */

#if (MIDI1_UART_RX_INTERRUPT_ENABLED && (MIDI1_UART_RX_ENABLED || MIDI1_UART_HD_ENABLED))
    /*******************************************************************************
    * Function Name: MIDI1_UART_RXISR
    ********************************************************************************
    *
    * Summary:
    *  Interrupt Service Routine for RX portion of the UART
    *
    * Parameters:
    *  None.
    *
    * Return:
    *  None.
    *
    * Global Variables:
    *  MIDI1_UART_rxBuffer - RAM buffer pointer for save received data.
    *  MIDI1_UART_rxBufferWrite - cyclic index for write to rxBuffer,
    *     increments after each byte saved to buffer.
    *  MIDI1_UART_rxBufferRead - cyclic index for read from rxBuffer,
    *     checked to detect overflow condition.
    *  MIDI1_UART_rxBufferOverflow - software overflow flag. Set to one
    *     when MIDI1_UART_rxBufferWrite index overtakes
    *     MIDI1_UART_rxBufferRead index.
    *  MIDI1_UART_rxBufferLoopDetect - additional variable to detect overflow.
    *     Set to one when MIDI1_UART_rxBufferWrite is equal to
    *    MIDI1_UART_rxBufferRead
    *  MIDI1_UART_rxAddressMode - this variable contains the Address mode,
    *     selected in customizer or set by UART_SetRxAddressMode() API.
    *  MIDI1_UART_rxAddressDetected - set to 1 when correct address received,
    *     and analysed to store following addressed data bytes to the buffer.
    *     When not correct address received, set to 0 to skip following data bytes.
    *
    *******************************************************************************/
    CY_ISR(MIDI1_UART_RXISR)
    {
        uint8 readData;
        uint8 readStatus;
        uint8 increment_pointer = 0u;

    #if(CY_PSOC3)
        uint8 int_en;
    #endif /* (CY_PSOC3) */

    #ifdef MIDI1_UART_RXISR_ENTRY_CALLBACK
        MIDI1_UART_RXISR_EntryCallback();
    #endif /* MIDI1_UART_RXISR_ENTRY_CALLBACK */

        /* User code required at start of ISR */
        /* `#START MIDI1_UART_RXISR_START` */

        /* `#END` */

    #if(CY_PSOC3)   /* Make sure nested interrupt is enabled */
        int_en = EA;
        CyGlobalIntEnable;
    #endif /* (CY_PSOC3) */

        do
        {
            /* Read receiver status register */
            readStatus = MIDI1_UART_RXSTATUS_REG;
            /* Copy the same status to readData variable for backward compatibility support 
            *  of the user code in MIDI1_UART_RXISR_ERROR` section. 
            */
            readData = readStatus;

            if((readStatus & (MIDI1_UART_RX_STS_BREAK | 
                            MIDI1_UART_RX_STS_PAR_ERROR |
                            MIDI1_UART_RX_STS_STOP_ERROR | 
                            MIDI1_UART_RX_STS_OVERRUN)) != 0u)
            {
                /* ERROR handling. */
                MIDI1_UART_errorStatus |= readStatus & ( MIDI1_UART_RX_STS_BREAK | 
                                                            MIDI1_UART_RX_STS_PAR_ERROR | 
                                                            MIDI1_UART_RX_STS_STOP_ERROR | 
                                                            MIDI1_UART_RX_STS_OVERRUN);
                /* `#START MIDI1_UART_RXISR_ERROR` */

                /* `#END` */
                
            #ifdef MIDI1_UART_RXISR_ERROR_CALLBACK
                MIDI1_UART_RXISR_ERROR_Callback();
            #endif /* MIDI1_UART_RXISR_ERROR_CALLBACK */
            }
            
            if((readStatus & MIDI1_UART_RX_STS_FIFO_NOTEMPTY) != 0u)
            {
                /* Read data from the RX data register */
                readData = MIDI1_UART_RXDATA_REG;
            #if (MIDI1_UART_RXHW_ADDRESS_ENABLED)
                if(MIDI1_UART_rxAddressMode == (uint8)MIDI1_UART__B_UART__AM_SW_DETECT_TO_BUFFER)
                {
                    if((readStatus & MIDI1_UART_RX_STS_MRKSPC) != 0u)
                    {
                        if ((readStatus & MIDI1_UART_RX_STS_ADDR_MATCH) != 0u)
                        {
                            MIDI1_UART_rxAddressDetected = 1u;
                        }
                        else
                        {
                            MIDI1_UART_rxAddressDetected = 0u;
                        }
                    }
                    if(MIDI1_UART_rxAddressDetected != 0u)
                    {   /* Store only addressed data */
                        MIDI1_UART_rxBuffer[MIDI1_UART_rxBufferWrite] = readData;
                        increment_pointer = 1u;
                    }
                }
                else /* Without software addressing */
                {
                    MIDI1_UART_rxBuffer[MIDI1_UART_rxBufferWrite] = readData;
                    increment_pointer = 1u;
                }
            #else  /* Without addressing */
                MIDI1_UART_rxBuffer[MIDI1_UART_rxBufferWrite] = readData;
                increment_pointer = 1u;
            #endif /* (MIDI1_UART_RXHW_ADDRESS_ENABLED) */

                /* Do not increment buffer pointer when skip not addressed data */
                if(increment_pointer != 0u)
                {
                    if(MIDI1_UART_rxBufferLoopDetect != 0u)
                    {   /* Set Software Buffer status Overflow */
                        MIDI1_UART_rxBufferOverflow = 1u;
                    }
                    /* Set next pointer. */
                    MIDI1_UART_rxBufferWrite++;

                    /* Check pointer for a loop condition */
                    if(MIDI1_UART_rxBufferWrite >= MIDI1_UART_RX_BUFFER_SIZE)
                    {
                        MIDI1_UART_rxBufferWrite = 0u;
                    }

                    /* Detect pre-overload condition and set flag */
                    if(MIDI1_UART_rxBufferWrite == MIDI1_UART_rxBufferRead)
                    {
                        MIDI1_UART_rxBufferLoopDetect = 1u;
                        /* When Hardware Flow Control selected */
                        #if (MIDI1_UART_FLOW_CONTROL != 0u)
                            /* Disable RX interrupt mask, it is enabled when user read data from the buffer using APIs */
                            MIDI1_UART_RXSTATUS_MASK_REG  &= (uint8)~MIDI1_UART_RX_STS_FIFO_NOTEMPTY;
                            CyIntClearPending(MIDI1_UART_RX_VECT_NUM);
                            break; /* Break the reading of the FIFO loop, leave the data there for generating RTS signal */
                        #endif /* (MIDI1_UART_FLOW_CONTROL != 0u) */
                    }
                }
            }
        }while((readStatus & MIDI1_UART_RX_STS_FIFO_NOTEMPTY) != 0u);

        /* User code required at end of ISR (Optional) */
        /* `#START MIDI1_UART_RXISR_END` */

        /* `#END` */

    #ifdef MIDI1_UART_RXISR_EXIT_CALLBACK
        MIDI1_UART_RXISR_ExitCallback();
    #endif /* MIDI1_UART_RXISR_EXIT_CALLBACK */

    #if(CY_PSOC3)
        EA = int_en;
    #endif /* (CY_PSOC3) */
    }
    
#endif /* (MIDI1_UART_RX_INTERRUPT_ENABLED && (MIDI1_UART_RX_ENABLED || MIDI1_UART_HD_ENABLED)) */


#if (MIDI1_UART_TX_INTERRUPT_ENABLED && MIDI1_UART_TX_ENABLED)
    /*******************************************************************************
    * Function Name: MIDI1_UART_TXISR
    ********************************************************************************
    *
    * Summary:
    * Interrupt Service Routine for the TX portion of the UART
    *
    * Parameters:
    *  None.
    *
    * Return:
    *  None.
    *
    * Global Variables:
    *  MIDI1_UART_txBuffer - RAM buffer pointer for transmit data from.
    *  MIDI1_UART_txBufferRead - cyclic index for read and transmit data
    *     from txBuffer, increments after each transmitted byte.
    *  MIDI1_UART_rxBufferWrite - cyclic index for write to txBuffer,
    *     checked to detect available for transmission bytes.
    *
    *******************************************************************************/
    CY_ISR(MIDI1_UART_TXISR)
    {
    #if(CY_PSOC3)
        uint8 int_en;
    #endif /* (CY_PSOC3) */

    #ifdef MIDI1_UART_TXISR_ENTRY_CALLBACK
        MIDI1_UART_TXISR_EntryCallback();
    #endif /* MIDI1_UART_TXISR_ENTRY_CALLBACK */

        /* User code required at start of ISR */
        /* `#START MIDI1_UART_TXISR_START` */

        /* `#END` */

    #if(CY_PSOC3)   /* Make sure nested interrupt is enabled */
        int_en = EA;
        CyGlobalIntEnable;
    #endif /* (CY_PSOC3) */

        while((MIDI1_UART_txBufferRead != MIDI1_UART_txBufferWrite) &&
             ((MIDI1_UART_TXSTATUS_REG & MIDI1_UART_TX_STS_FIFO_FULL) == 0u))
        {
            /* Check pointer wrap around */
            if(MIDI1_UART_txBufferRead >= MIDI1_UART_TX_BUFFER_SIZE)
            {
                MIDI1_UART_txBufferRead = 0u;
            }

            MIDI1_UART_TXDATA_REG = MIDI1_UART_txBuffer[MIDI1_UART_txBufferRead];

            /* Set next pointer */
            MIDI1_UART_txBufferRead++;
        }

        /* User code required at end of ISR (Optional) */
        /* `#START MIDI1_UART_TXISR_END` */

        /* `#END` */

    #ifdef MIDI1_UART_TXISR_EXIT_CALLBACK
        MIDI1_UART_TXISR_ExitCallback();
    #endif /* MIDI1_UART_TXISR_EXIT_CALLBACK */

    #if(CY_PSOC3)
        EA = int_en;
    #endif /* (CY_PSOC3) */
   }
#endif /* (MIDI1_UART_TX_INTERRUPT_ENABLED && MIDI1_UART_TX_ENABLED) */


/* [] END OF FILE */
