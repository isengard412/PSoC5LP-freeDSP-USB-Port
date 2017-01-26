/*******************************************************************************
* File Name: SampleClk.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_SampleClk_H)
#define CY_CLOCK_SampleClk_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void SampleClk_Start(void) ;
void SampleClk_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void SampleClk_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void SampleClk_StandbyPower(uint8 state) ;
void SampleClk_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 SampleClk_GetDividerRegister(void) ;
void SampleClk_SetModeRegister(uint8 modeBitMask) ;
void SampleClk_ClearModeRegister(uint8 modeBitMask) ;
uint8 SampleClk_GetModeRegister(void) ;
void SampleClk_SetSourceRegister(uint8 clkSource) ;
uint8 SampleClk_GetSourceRegister(void) ;
#if defined(SampleClk__CFG3)
void SampleClk_SetPhaseRegister(uint8 clkPhase) ;
uint8 SampleClk_GetPhaseRegister(void) ;
#endif /* defined(SampleClk__CFG3) */

#define SampleClk_Enable()                       SampleClk_Start()
#define SampleClk_Disable()                      SampleClk_Stop()
#define SampleClk_SetDivider(clkDivider)         SampleClk_SetDividerRegister(clkDivider, 1u)
#define SampleClk_SetDividerValue(clkDivider)    SampleClk_SetDividerRegister((clkDivider) - 1u, 1u)
#define SampleClk_SetMode(clkMode)               SampleClk_SetModeRegister(clkMode)
#define SampleClk_SetSource(clkSource)           SampleClk_SetSourceRegister(clkSource)
#if defined(SampleClk__CFG3)
#define SampleClk_SetPhase(clkPhase)             SampleClk_SetPhaseRegister(clkPhase)
#define SampleClk_SetPhaseValue(clkPhase)        SampleClk_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(SampleClk__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define SampleClk_CLKEN              (* (reg8 *) SampleClk__PM_ACT_CFG)
#define SampleClk_CLKEN_PTR          ((reg8 *) SampleClk__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define SampleClk_CLKSTBY            (* (reg8 *) SampleClk__PM_STBY_CFG)
#define SampleClk_CLKSTBY_PTR        ((reg8 *) SampleClk__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define SampleClk_DIV_LSB            (* (reg8 *) SampleClk__CFG0)
#define SampleClk_DIV_LSB_PTR        ((reg8 *) SampleClk__CFG0)
#define SampleClk_DIV_PTR            ((reg16 *) SampleClk__CFG0)

/* Clock MSB divider configuration register. */
#define SampleClk_DIV_MSB            (* (reg8 *) SampleClk__CFG1)
#define SampleClk_DIV_MSB_PTR        ((reg8 *) SampleClk__CFG1)

/* Mode and source configuration register */
#define SampleClk_MOD_SRC            (* (reg8 *) SampleClk__CFG2)
#define SampleClk_MOD_SRC_PTR        ((reg8 *) SampleClk__CFG2)

#if defined(SampleClk__CFG3)
/* Analog clock phase configuration register */
#define SampleClk_PHASE              (* (reg8 *) SampleClk__CFG3)
#define SampleClk_PHASE_PTR          ((reg8 *) SampleClk__CFG3)
#endif /* defined(SampleClk__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define SampleClk_CLKEN_MASK         SampleClk__PM_ACT_MSK
#define SampleClk_CLKSTBY_MASK       SampleClk__PM_STBY_MSK

/* CFG2 field masks */
#define SampleClk_SRC_SEL_MSK        SampleClk__CFG2_SRC_SEL_MASK
#define SampleClk_MODE_MASK          (~(SampleClk_SRC_SEL_MSK))

#if defined(SampleClk__CFG3)
/* CFG3 phase mask */
#define SampleClk_PHASE_MASK         SampleClk__CFG3_PHASE_DLY_MASK
#endif /* defined(SampleClk__CFG3) */

#endif /* CY_CLOCK_SampleClk_H */


/* [] END OF FILE */
