/***************************************************************************
* File Name: VdacDma_dma.c  
* Version 1.70
*
*  Description:
*   Provides an API for the DMAC component. The API includes functions
*   for the DMA controller, DMA channels and Transfer Descriptors.
*
*
*   Note:
*     This module requires the developer to finish or fill in the auto
*     generated funcions and setup the dma channel and TD's.
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/
#include <CYLIB.H>
#include <CYDMAC.H>
#include <VdacDma_dma.H>



/****************************************************************************
* 
* The following defines are available in Cyfitter.h
* 
* 
* 
* VdacDma__DRQ_CTL_REG
* 
* 
* VdacDma__DRQ_NUMBER
* 
* Number of TD's used by this channel.
* VdacDma__NUMBEROF_TDS
* 
* Priority of this channel.
* VdacDma__PRIORITY
* 
* True if VdacDma_TERMIN_SEL is used.
* VdacDma__TERMIN_EN
* 
* TERMIN interrupt line to signal terminate.
* VdacDma__TERMIN_SEL
* 
* 
* True if VdacDma_TERMOUT0_SEL is used.
* VdacDma__TERMOUT0_EN
* 
* 
* TERMOUT0 interrupt line to signal completion.
* VdacDma__TERMOUT0_SEL
* 
* 
* True if VdacDma_TERMOUT1_SEL is used.
* VdacDma__TERMOUT1_EN
* 
* 
* TERMOUT1 interrupt line to signal completion.
* VdacDma__TERMOUT1_SEL
* 
****************************************************************************/


/* Zero based index of VdacDma dma channel */
uint8 VdacDma_DmaHandle = DMA_INVALID_CHANNEL;

/*********************************************************************
* Function Name: uint8 VdacDma_DmaInitalize
**********************************************************************
* Summary:
*   Allocates and initialises a channel of the DMAC to be used by the
*   caller.
*
* Parameters:
*   BurstCount.
*       
*       
*   ReqestPerBurst.
*       
*       
*   UpperSrcAddress.
*       
*       
*   UpperDestAddress.
*       
*
* Return:
*   The channel that can be used by the caller for DMA activity.
*   DMA_INVALID_CHANNEL (0xFF) if there are no channels left. 
*
*
*******************************************************************/
uint8 VdacDma_DmaInitialize(uint8 BurstCount, uint8 ReqestPerBurst, uint16 UpperSrcAddress, uint16 UpperDestAddress) 
{

    /* Allocate a DMA channel. */
    VdacDma_DmaHandle = (uint8)VdacDma__DRQ_NUMBER;

    /* Configure the channel. */
    (void)CyDmaChSetConfiguration(VdacDma_DmaHandle,
                                  BurstCount,
                                  ReqestPerBurst,
                                  (uint8)VdacDma__TERMOUT0_SEL,
                                  (uint8)VdacDma__TERMOUT1_SEL,
                                  (uint8)VdacDma__TERMIN_SEL);

    /* Set the extended address for the transfers */
    (void)CyDmaChSetExtendedAddress(VdacDma_DmaHandle, UpperSrcAddress, UpperDestAddress);

    /* Set the priority for this channel */
    (void)CyDmaChPriority(VdacDma_DmaHandle, (uint8)VdacDma__PRIORITY);
    
    return VdacDma_DmaHandle;
}

/*********************************************************************
* Function Name: void VdacDma_DmaRelease
**********************************************************************
* Summary:
*   Frees the channel associated with VdacDma.
*
*
* Parameters:
*   void.
*
*
*
* Return:
*   void.
*
*******************************************************************/
void VdacDma_DmaRelease(void) 
{
    /* Disable the channel */
    (void)CyDmaChDisable(VdacDma_DmaHandle);
}

