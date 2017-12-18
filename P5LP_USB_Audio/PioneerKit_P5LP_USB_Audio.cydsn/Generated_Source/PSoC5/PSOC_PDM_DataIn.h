/*******************************************************************************
* File Name: PSOC_PDM_DataIn.h  
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

#if !defined(CY_PINS_PSOC_PDM_DataIn_H) /* Pins PSOC_PDM_DataIn_H */
#define CY_PINS_PSOC_PDM_DataIn_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "PSOC_PDM_DataIn_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_90 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 PSOC_PDM_DataIn__PORT == 15 && ((PSOC_PDM_DataIn__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    PSOC_PDM_DataIn_Write(uint8 value) ;
void    PSOC_PDM_DataIn_SetDriveMode(uint8 mode) ;
uint8   PSOC_PDM_DataIn_ReadDataReg(void) ;
uint8   PSOC_PDM_DataIn_Read(void) ;
uint8   PSOC_PDM_DataIn_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define PSOC_PDM_DataIn_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define PSOC_PDM_DataIn_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define PSOC_PDM_DataIn_DM_RES_UP          PIN_DM_RES_UP
#define PSOC_PDM_DataIn_DM_RES_DWN         PIN_DM_RES_DWN
#define PSOC_PDM_DataIn_DM_OD_LO           PIN_DM_OD_LO
#define PSOC_PDM_DataIn_DM_OD_HI           PIN_DM_OD_HI
#define PSOC_PDM_DataIn_DM_STRONG          PIN_DM_STRONG
#define PSOC_PDM_DataIn_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define PSOC_PDM_DataIn_MASK               PSOC_PDM_DataIn__MASK
#define PSOC_PDM_DataIn_SHIFT              PSOC_PDM_DataIn__SHIFT
#define PSOC_PDM_DataIn_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define PSOC_PDM_DataIn_PS                     (* (reg8 *) PSOC_PDM_DataIn__PS)
/* Data Register */
#define PSOC_PDM_DataIn_DR                     (* (reg8 *) PSOC_PDM_DataIn__DR)
/* Port Number */
#define PSOC_PDM_DataIn_PRT_NUM                (* (reg8 *) PSOC_PDM_DataIn__PRT) 
/* Connect to Analog Globals */                                                  
#define PSOC_PDM_DataIn_AG                     (* (reg8 *) PSOC_PDM_DataIn__AG)                       
/* Analog MUX bux enable */
#define PSOC_PDM_DataIn_AMUX                   (* (reg8 *) PSOC_PDM_DataIn__AMUX) 
/* Bidirectional Enable */                                                        
#define PSOC_PDM_DataIn_BIE                    (* (reg8 *) PSOC_PDM_DataIn__BIE)
/* Bit-mask for Aliased Register Access */
#define PSOC_PDM_DataIn_BIT_MASK               (* (reg8 *) PSOC_PDM_DataIn__BIT_MASK)
/* Bypass Enable */
#define PSOC_PDM_DataIn_BYP                    (* (reg8 *) PSOC_PDM_DataIn__BYP)
/* Port wide control signals */                                                   
#define PSOC_PDM_DataIn_CTL                    (* (reg8 *) PSOC_PDM_DataIn__CTL)
/* Drive Modes */
#define PSOC_PDM_DataIn_DM0                    (* (reg8 *) PSOC_PDM_DataIn__DM0) 
#define PSOC_PDM_DataIn_DM1                    (* (reg8 *) PSOC_PDM_DataIn__DM1)
#define PSOC_PDM_DataIn_DM2                    (* (reg8 *) PSOC_PDM_DataIn__DM2) 
/* Input Buffer Disable Override */
#define PSOC_PDM_DataIn_INP_DIS                (* (reg8 *) PSOC_PDM_DataIn__INP_DIS)
/* LCD Common or Segment Drive */
#define PSOC_PDM_DataIn_LCD_COM_SEG            (* (reg8 *) PSOC_PDM_DataIn__LCD_COM_SEG)
/* Enable Segment LCD */
#define PSOC_PDM_DataIn_LCD_EN                 (* (reg8 *) PSOC_PDM_DataIn__LCD_EN)
/* Slew Rate Control */
#define PSOC_PDM_DataIn_SLW                    (* (reg8 *) PSOC_PDM_DataIn__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define PSOC_PDM_DataIn_PRTDSI__CAPS_SEL       (* (reg8 *) PSOC_PDM_DataIn__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define PSOC_PDM_DataIn_PRTDSI__DBL_SYNC_IN    (* (reg8 *) PSOC_PDM_DataIn__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define PSOC_PDM_DataIn_PRTDSI__OE_SEL0        (* (reg8 *) PSOC_PDM_DataIn__PRTDSI__OE_SEL0) 
#define PSOC_PDM_DataIn_PRTDSI__OE_SEL1        (* (reg8 *) PSOC_PDM_DataIn__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define PSOC_PDM_DataIn_PRTDSI__OUT_SEL0       (* (reg8 *) PSOC_PDM_DataIn__PRTDSI__OUT_SEL0) 
#define PSOC_PDM_DataIn_PRTDSI__OUT_SEL1       (* (reg8 *) PSOC_PDM_DataIn__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define PSOC_PDM_DataIn_PRTDSI__SYNC_OUT       (* (reg8 *) PSOC_PDM_DataIn__PRTDSI__SYNC_OUT) 


#if defined(PSOC_PDM_DataIn__INTSTAT)  /* Interrupt Registers */

    #define PSOC_PDM_DataIn_INTSTAT                (* (reg8 *) PSOC_PDM_DataIn__INTSTAT)
    #define PSOC_PDM_DataIn_SNAP                   (* (reg8 *) PSOC_PDM_DataIn__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_PSOC_PDM_DataIn_H */


/* [] END OF FILE */
