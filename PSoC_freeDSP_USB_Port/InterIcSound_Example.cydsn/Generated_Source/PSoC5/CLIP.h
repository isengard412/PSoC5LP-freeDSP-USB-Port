/*******************************************************************************
* File Name: CLIP.h  
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

#if !defined(CY_PINS_CLIP_H) /* Pins CLIP_H */
#define CY_PINS_CLIP_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "CLIP_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 CLIP__PORT == 15 && ((CLIP__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    CLIP_Write(uint8 value);
void    CLIP_SetDriveMode(uint8 mode);
uint8   CLIP_ReadDataReg(void);
uint8   CLIP_Read(void);
void    CLIP_SetInterruptMode(uint16 position, uint16 mode);
uint8   CLIP_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the CLIP_SetDriveMode() function.
     *  @{
     */
        #define CLIP_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define CLIP_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define CLIP_DM_RES_UP          PIN_DM_RES_UP
        #define CLIP_DM_RES_DWN         PIN_DM_RES_DWN
        #define CLIP_DM_OD_LO           PIN_DM_OD_LO
        #define CLIP_DM_OD_HI           PIN_DM_OD_HI
        #define CLIP_DM_STRONG          PIN_DM_STRONG
        #define CLIP_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define CLIP_MASK               CLIP__MASK
#define CLIP_SHIFT              CLIP__SHIFT
#define CLIP_WIDTH              1u

/* Interrupt constants */
#if defined(CLIP__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in CLIP_SetInterruptMode() function.
     *  @{
     */
        #define CLIP_INTR_NONE      (uint16)(0x0000u)
        #define CLIP_INTR_RISING    (uint16)(0x0001u)
        #define CLIP_INTR_FALLING   (uint16)(0x0002u)
        #define CLIP_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define CLIP_INTR_MASK      (0x01u) 
#endif /* (CLIP__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define CLIP_PS                     (* (reg8 *) CLIP__PS)
/* Data Register */
#define CLIP_DR                     (* (reg8 *) CLIP__DR)
/* Port Number */
#define CLIP_PRT_NUM                (* (reg8 *) CLIP__PRT) 
/* Connect to Analog Globals */                                                  
#define CLIP_AG                     (* (reg8 *) CLIP__AG)                       
/* Analog MUX bux enable */
#define CLIP_AMUX                   (* (reg8 *) CLIP__AMUX) 
/* Bidirectional Enable */                                                        
#define CLIP_BIE                    (* (reg8 *) CLIP__BIE)
/* Bit-mask for Aliased Register Access */
#define CLIP_BIT_MASK               (* (reg8 *) CLIP__BIT_MASK)
/* Bypass Enable */
#define CLIP_BYP                    (* (reg8 *) CLIP__BYP)
/* Port wide control signals */                                                   
#define CLIP_CTL                    (* (reg8 *) CLIP__CTL)
/* Drive Modes */
#define CLIP_DM0                    (* (reg8 *) CLIP__DM0) 
#define CLIP_DM1                    (* (reg8 *) CLIP__DM1)
#define CLIP_DM2                    (* (reg8 *) CLIP__DM2) 
/* Input Buffer Disable Override */
#define CLIP_INP_DIS                (* (reg8 *) CLIP__INP_DIS)
/* LCD Common or Segment Drive */
#define CLIP_LCD_COM_SEG            (* (reg8 *) CLIP__LCD_COM_SEG)
/* Enable Segment LCD */
#define CLIP_LCD_EN                 (* (reg8 *) CLIP__LCD_EN)
/* Slew Rate Control */
#define CLIP_SLW                    (* (reg8 *) CLIP__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define CLIP_PRTDSI__CAPS_SEL       (* (reg8 *) CLIP__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define CLIP_PRTDSI__DBL_SYNC_IN    (* (reg8 *) CLIP__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define CLIP_PRTDSI__OE_SEL0        (* (reg8 *) CLIP__PRTDSI__OE_SEL0) 
#define CLIP_PRTDSI__OE_SEL1        (* (reg8 *) CLIP__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define CLIP_PRTDSI__OUT_SEL0       (* (reg8 *) CLIP__PRTDSI__OUT_SEL0) 
#define CLIP_PRTDSI__OUT_SEL1       (* (reg8 *) CLIP__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define CLIP_PRTDSI__SYNC_OUT       (* (reg8 *) CLIP__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(CLIP__SIO_CFG)
    #define CLIP_SIO_HYST_EN        (* (reg8 *) CLIP__SIO_HYST_EN)
    #define CLIP_SIO_REG_HIFREQ     (* (reg8 *) CLIP__SIO_REG_HIFREQ)
    #define CLIP_SIO_CFG            (* (reg8 *) CLIP__SIO_CFG)
    #define CLIP_SIO_DIFF           (* (reg8 *) CLIP__SIO_DIFF)
#endif /* (CLIP__SIO_CFG) */

/* Interrupt Registers */
#if defined(CLIP__INTSTAT)
    #define CLIP_INTSTAT            (* (reg8 *) CLIP__INTSTAT)
    #define CLIP_SNAP               (* (reg8 *) CLIP__SNAP)
    
	#define CLIP_0_INTTYPE_REG 		(* (reg8 *) CLIP__0__INTTYPE)
#endif /* (CLIP__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_CLIP_H */


/* [] END OF FILE */
