/*******************************************************************************
* File Name: Speaker.h  
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

#if !defined(CY_PINS_Speaker_H) /* Pins Speaker_H */
#define CY_PINS_Speaker_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Speaker_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Speaker__PORT == 15 && ((Speaker__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Speaker_Write(uint8 value);
void    Speaker_SetDriveMode(uint8 mode);
uint8   Speaker_ReadDataReg(void);
uint8   Speaker_Read(void);
void    Speaker_SetInterruptMode(uint16 position, uint16 mode);
uint8   Speaker_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Speaker_SetDriveMode() function.
     *  @{
     */
        #define Speaker_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Speaker_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Speaker_DM_RES_UP          PIN_DM_RES_UP
        #define Speaker_DM_RES_DWN         PIN_DM_RES_DWN
        #define Speaker_DM_OD_LO           PIN_DM_OD_LO
        #define Speaker_DM_OD_HI           PIN_DM_OD_HI
        #define Speaker_DM_STRONG          PIN_DM_STRONG
        #define Speaker_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Speaker_MASK               Speaker__MASK
#define Speaker_SHIFT              Speaker__SHIFT
#define Speaker_WIDTH              1u

/* Interrupt constants */
#if defined(Speaker__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Speaker_SetInterruptMode() function.
     *  @{
     */
        #define Speaker_INTR_NONE      (uint16)(0x0000u)
        #define Speaker_INTR_RISING    (uint16)(0x0001u)
        #define Speaker_INTR_FALLING   (uint16)(0x0002u)
        #define Speaker_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Speaker_INTR_MASK      (0x01u) 
#endif /* (Speaker__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Speaker_PS                     (* (reg8 *) Speaker__PS)
/* Data Register */
#define Speaker_DR                     (* (reg8 *) Speaker__DR)
/* Port Number */
#define Speaker_PRT_NUM                (* (reg8 *) Speaker__PRT) 
/* Connect to Analog Globals */                                                  
#define Speaker_AG                     (* (reg8 *) Speaker__AG)                       
/* Analog MUX bux enable */
#define Speaker_AMUX                   (* (reg8 *) Speaker__AMUX) 
/* Bidirectional Enable */                                                        
#define Speaker_BIE                    (* (reg8 *) Speaker__BIE)
/* Bit-mask for Aliased Register Access */
#define Speaker_BIT_MASK               (* (reg8 *) Speaker__BIT_MASK)
/* Bypass Enable */
#define Speaker_BYP                    (* (reg8 *) Speaker__BYP)
/* Port wide control signals */                                                   
#define Speaker_CTL                    (* (reg8 *) Speaker__CTL)
/* Drive Modes */
#define Speaker_DM0                    (* (reg8 *) Speaker__DM0) 
#define Speaker_DM1                    (* (reg8 *) Speaker__DM1)
#define Speaker_DM2                    (* (reg8 *) Speaker__DM2) 
/* Input Buffer Disable Override */
#define Speaker_INP_DIS                (* (reg8 *) Speaker__INP_DIS)
/* LCD Common or Segment Drive */
#define Speaker_LCD_COM_SEG            (* (reg8 *) Speaker__LCD_COM_SEG)
/* Enable Segment LCD */
#define Speaker_LCD_EN                 (* (reg8 *) Speaker__LCD_EN)
/* Slew Rate Control */
#define Speaker_SLW                    (* (reg8 *) Speaker__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Speaker_PRTDSI__CAPS_SEL       (* (reg8 *) Speaker__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Speaker_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Speaker__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Speaker_PRTDSI__OE_SEL0        (* (reg8 *) Speaker__PRTDSI__OE_SEL0) 
#define Speaker_PRTDSI__OE_SEL1        (* (reg8 *) Speaker__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Speaker_PRTDSI__OUT_SEL0       (* (reg8 *) Speaker__PRTDSI__OUT_SEL0) 
#define Speaker_PRTDSI__OUT_SEL1       (* (reg8 *) Speaker__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Speaker_PRTDSI__SYNC_OUT       (* (reg8 *) Speaker__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Speaker__SIO_CFG)
    #define Speaker_SIO_HYST_EN        (* (reg8 *) Speaker__SIO_HYST_EN)
    #define Speaker_SIO_REG_HIFREQ     (* (reg8 *) Speaker__SIO_REG_HIFREQ)
    #define Speaker_SIO_CFG            (* (reg8 *) Speaker__SIO_CFG)
    #define Speaker_SIO_DIFF           (* (reg8 *) Speaker__SIO_DIFF)
#endif /* (Speaker__SIO_CFG) */

/* Interrupt Registers */
#if defined(Speaker__INTSTAT)
    #define Speaker_INTSTAT            (* (reg8 *) Speaker__INTSTAT)
    #define Speaker_SNAP               (* (reg8 *) Speaker__SNAP)
    
	#define Speaker_0_INTTYPE_REG 		(* (reg8 *) Speaker__0__INTTYPE)
#endif /* (Speaker__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Speaker_H */


/* [] END OF FILE */
