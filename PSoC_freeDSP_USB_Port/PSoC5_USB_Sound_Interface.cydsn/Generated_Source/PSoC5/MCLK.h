/*******************************************************************************
* File Name: MCLK.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_MCLK_H) /* Pins MCLK_H */
#define CY_PINS_MCLK_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "MCLK_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 MCLK__PORT == 15 && ((MCLK__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    MCLK_Write(uint8 value);
void    MCLK_SetDriveMode(uint8 mode);
uint8   MCLK_ReadDataReg(void);
uint8   MCLK_Read(void);
void    MCLK_SetInterruptMode(uint16 position, uint16 mode);
uint8   MCLK_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the MCLK_SetDriveMode() function.
     *  @{
     */
        #define MCLK_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define MCLK_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define MCLK_DM_RES_UP          PIN_DM_RES_UP
        #define MCLK_DM_RES_DWN         PIN_DM_RES_DWN
        #define MCLK_DM_OD_LO           PIN_DM_OD_LO
        #define MCLK_DM_OD_HI           PIN_DM_OD_HI
        #define MCLK_DM_STRONG          PIN_DM_STRONG
        #define MCLK_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define MCLK_MASK               MCLK__MASK
#define MCLK_SHIFT              MCLK__SHIFT
#define MCLK_WIDTH              1u

/* Interrupt constants */
#if defined(MCLK__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MCLK_SetInterruptMode() function.
     *  @{
     */
        #define MCLK_INTR_NONE      (uint16)(0x0000u)
        #define MCLK_INTR_RISING    (uint16)(0x0001u)
        #define MCLK_INTR_FALLING   (uint16)(0x0002u)
        #define MCLK_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define MCLK_INTR_MASK      (0x01u) 
#endif /* (MCLK__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MCLK_PS                     (* (reg8 *) MCLK__PS)
/* Data Register */
#define MCLK_DR                     (* (reg8 *) MCLK__DR)
/* Port Number */
#define MCLK_PRT_NUM                (* (reg8 *) MCLK__PRT) 
/* Connect to Analog Globals */                                                  
#define MCLK_AG                     (* (reg8 *) MCLK__AG)                       
/* Analog MUX bux enable */
#define MCLK_AMUX                   (* (reg8 *) MCLK__AMUX) 
/* Bidirectional Enable */                                                        
#define MCLK_BIE                    (* (reg8 *) MCLK__BIE)
/* Bit-mask for Aliased Register Access */
#define MCLK_BIT_MASK               (* (reg8 *) MCLK__BIT_MASK)
/* Bypass Enable */
#define MCLK_BYP                    (* (reg8 *) MCLK__BYP)
/* Port wide control signals */                                                   
#define MCLK_CTL                    (* (reg8 *) MCLK__CTL)
/* Drive Modes */
#define MCLK_DM0                    (* (reg8 *) MCLK__DM0) 
#define MCLK_DM1                    (* (reg8 *) MCLK__DM1)
#define MCLK_DM2                    (* (reg8 *) MCLK__DM2) 
/* Input Buffer Disable Override */
#define MCLK_INP_DIS                (* (reg8 *) MCLK__INP_DIS)
/* LCD Common or Segment Drive */
#define MCLK_LCD_COM_SEG            (* (reg8 *) MCLK__LCD_COM_SEG)
/* Enable Segment LCD */
#define MCLK_LCD_EN                 (* (reg8 *) MCLK__LCD_EN)
/* Slew Rate Control */
#define MCLK_SLW                    (* (reg8 *) MCLK__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define MCLK_PRTDSI__CAPS_SEL       (* (reg8 *) MCLK__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define MCLK_PRTDSI__DBL_SYNC_IN    (* (reg8 *) MCLK__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define MCLK_PRTDSI__OE_SEL0        (* (reg8 *) MCLK__PRTDSI__OE_SEL0) 
#define MCLK_PRTDSI__OE_SEL1        (* (reg8 *) MCLK__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define MCLK_PRTDSI__OUT_SEL0       (* (reg8 *) MCLK__PRTDSI__OUT_SEL0) 
#define MCLK_PRTDSI__OUT_SEL1       (* (reg8 *) MCLK__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define MCLK_PRTDSI__SYNC_OUT       (* (reg8 *) MCLK__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(MCLK__SIO_CFG)
    #define MCLK_SIO_HYST_EN        (* (reg8 *) MCLK__SIO_HYST_EN)
    #define MCLK_SIO_REG_HIFREQ     (* (reg8 *) MCLK__SIO_REG_HIFREQ)
    #define MCLK_SIO_CFG            (* (reg8 *) MCLK__SIO_CFG)
    #define MCLK_SIO_DIFF           (* (reg8 *) MCLK__SIO_DIFF)
#endif /* (MCLK__SIO_CFG) */

/* Interrupt Registers */
#if defined(MCLK__INTSTAT)
    #define MCLK_INTSTAT            (* (reg8 *) MCLK__INTSTAT)
    #define MCLK_SNAP               (* (reg8 *) MCLK__SNAP)
    
	#define MCLK_0_INTTYPE_REG 		(* (reg8 *) MCLK__0__INTTYPE)
#endif /* (MCLK__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_MCLK_H */


/* [] END OF FILE */
