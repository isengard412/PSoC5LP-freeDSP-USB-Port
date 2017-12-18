/*******************************************************************************
* File Name: PSOC_PDM_ClkOut.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_PSOC_PDM_ClkOut_H) /* Pins PSOC_PDM_ClkOut_H */
#define CY_PINS_PSOC_PDM_ClkOut_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "PSOC_PDM_ClkOut_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_90 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 PSOC_PDM_ClkOut__PORT == 15 && ((PSOC_PDM_ClkOut__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    PSOC_PDM_ClkOut_Write(uint8 value) ;
void    PSOC_PDM_ClkOut_SetDriveMode(uint8 mode) ;
uint8   PSOC_PDM_ClkOut_ReadDataReg(void) ;
uint8   PSOC_PDM_ClkOut_Read(void) ;
uint8   PSOC_PDM_ClkOut_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define PSOC_PDM_ClkOut_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define PSOC_PDM_ClkOut_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define PSOC_PDM_ClkOut_DM_RES_UP          PIN_DM_RES_UP
#define PSOC_PDM_ClkOut_DM_RES_DWN         PIN_DM_RES_DWN
#define PSOC_PDM_ClkOut_DM_OD_LO           PIN_DM_OD_LO
#define PSOC_PDM_ClkOut_DM_OD_HI           PIN_DM_OD_HI
#define PSOC_PDM_ClkOut_DM_STRONG          PIN_DM_STRONG
#define PSOC_PDM_ClkOut_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define PSOC_PDM_ClkOut_MASK               PSOC_PDM_ClkOut__MASK
#define PSOC_PDM_ClkOut_SHIFT              PSOC_PDM_ClkOut__SHIFT
#define PSOC_PDM_ClkOut_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define PSOC_PDM_ClkOut_PS                     (* (reg8 *) PSOC_PDM_ClkOut__PS)
/* Data Register */
#define PSOC_PDM_ClkOut_DR                     (* (reg8 *) PSOC_PDM_ClkOut__DR)
/* Port Number */
#define PSOC_PDM_ClkOut_PRT_NUM                (* (reg8 *) PSOC_PDM_ClkOut__PRT) 
/* Connect to Analog Globals */                                                  
#define PSOC_PDM_ClkOut_AG                     (* (reg8 *) PSOC_PDM_ClkOut__AG)                       
/* Analog MUX bux enable */
#define PSOC_PDM_ClkOut_AMUX                   (* (reg8 *) PSOC_PDM_ClkOut__AMUX) 
/* Bidirectional Enable */                                                        
#define PSOC_PDM_ClkOut_BIE                    (* (reg8 *) PSOC_PDM_ClkOut__BIE)
/* Bit-mask for Aliased Register Access */
#define PSOC_PDM_ClkOut_BIT_MASK               (* (reg8 *) PSOC_PDM_ClkOut__BIT_MASK)
/* Bypass Enable */
#define PSOC_PDM_ClkOut_BYP                    (* (reg8 *) PSOC_PDM_ClkOut__BYP)
/* Port wide control signals */                                                   
#define PSOC_PDM_ClkOut_CTL                    (* (reg8 *) PSOC_PDM_ClkOut__CTL)
/* Drive Modes */
#define PSOC_PDM_ClkOut_DM0                    (* (reg8 *) PSOC_PDM_ClkOut__DM0) 
#define PSOC_PDM_ClkOut_DM1                    (* (reg8 *) PSOC_PDM_ClkOut__DM1)
#define PSOC_PDM_ClkOut_DM2                    (* (reg8 *) PSOC_PDM_ClkOut__DM2) 
/* Input Buffer Disable Override */
#define PSOC_PDM_ClkOut_INP_DIS                (* (reg8 *) PSOC_PDM_ClkOut__INP_DIS)
/* LCD Common or Segment Drive */
#define PSOC_PDM_ClkOut_LCD_COM_SEG            (* (reg8 *) PSOC_PDM_ClkOut__LCD_COM_SEG)
/* Enable Segment LCD */
#define PSOC_PDM_ClkOut_LCD_EN                 (* (reg8 *) PSOC_PDM_ClkOut__LCD_EN)
/* Slew Rate Control */
#define PSOC_PDM_ClkOut_SLW                    (* (reg8 *) PSOC_PDM_ClkOut__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define PSOC_PDM_ClkOut_PRTDSI__CAPS_SEL       (* (reg8 *) PSOC_PDM_ClkOut__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define PSOC_PDM_ClkOut_PRTDSI__DBL_SYNC_IN    (* (reg8 *) PSOC_PDM_ClkOut__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define PSOC_PDM_ClkOut_PRTDSI__OE_SEL0        (* (reg8 *) PSOC_PDM_ClkOut__PRTDSI__OE_SEL0) 
#define PSOC_PDM_ClkOut_PRTDSI__OE_SEL1        (* (reg8 *) PSOC_PDM_ClkOut__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define PSOC_PDM_ClkOut_PRTDSI__OUT_SEL0       (* (reg8 *) PSOC_PDM_ClkOut__PRTDSI__OUT_SEL0) 
#define PSOC_PDM_ClkOut_PRTDSI__OUT_SEL1       (* (reg8 *) PSOC_PDM_ClkOut__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define PSOC_PDM_ClkOut_PRTDSI__SYNC_OUT       (* (reg8 *) PSOC_PDM_ClkOut__PRTDSI__SYNC_OUT) 


#if defined(PSOC_PDM_ClkOut__INTSTAT)  /* Interrupt Registers */

    #define PSOC_PDM_ClkOut_INTSTAT                (* (reg8 *) PSOC_PDM_ClkOut__INTSTAT)
    #define PSOC_PDM_ClkOut_SNAP                   (* (reg8 *) PSOC_PDM_ClkOut__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_PSOC_PDM_ClkOut_H */


/* [] END OF FILE */
