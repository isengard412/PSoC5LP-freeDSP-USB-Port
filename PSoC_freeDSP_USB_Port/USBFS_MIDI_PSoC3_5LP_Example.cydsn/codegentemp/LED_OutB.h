/*******************************************************************************
* File Name: LED_OutB.h  
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

#if !defined(CY_PINS_LED_OutB_H) /* Pins LED_OutB_H */
#define CY_PINS_LED_OutB_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LED_OutB_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LED_OutB__PORT == 15 && ((LED_OutB__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LED_OutB_Write(uint8 value);
void    LED_OutB_SetDriveMode(uint8 mode);
uint8   LED_OutB_ReadDataReg(void);
uint8   LED_OutB_Read(void);
void    LED_OutB_SetInterruptMode(uint16 position, uint16 mode);
uint8   LED_OutB_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LED_OutB_SetDriveMode() function.
     *  @{
     */
        #define LED_OutB_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define LED_OutB_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define LED_OutB_DM_RES_UP          PIN_DM_RES_UP
        #define LED_OutB_DM_RES_DWN         PIN_DM_RES_DWN
        #define LED_OutB_DM_OD_LO           PIN_DM_OD_LO
        #define LED_OutB_DM_OD_HI           PIN_DM_OD_HI
        #define LED_OutB_DM_STRONG          PIN_DM_STRONG
        #define LED_OutB_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LED_OutB_MASK               LED_OutB__MASK
#define LED_OutB_SHIFT              LED_OutB__SHIFT
#define LED_OutB_WIDTH              1u

/* Interrupt constants */
#if defined(LED_OutB__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LED_OutB_SetInterruptMode() function.
     *  @{
     */
        #define LED_OutB_INTR_NONE      (uint16)(0x0000u)
        #define LED_OutB_INTR_RISING    (uint16)(0x0001u)
        #define LED_OutB_INTR_FALLING   (uint16)(0x0002u)
        #define LED_OutB_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define LED_OutB_INTR_MASK      (0x01u) 
#endif /* (LED_OutB__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LED_OutB_PS                     (* (reg8 *) LED_OutB__PS)
/* Data Register */
#define LED_OutB_DR                     (* (reg8 *) LED_OutB__DR)
/* Port Number */
#define LED_OutB_PRT_NUM                (* (reg8 *) LED_OutB__PRT) 
/* Connect to Analog Globals */                                                  
#define LED_OutB_AG                     (* (reg8 *) LED_OutB__AG)                       
/* Analog MUX bux enable */
#define LED_OutB_AMUX                   (* (reg8 *) LED_OutB__AMUX) 
/* Bidirectional Enable */                                                        
#define LED_OutB_BIE                    (* (reg8 *) LED_OutB__BIE)
/* Bit-mask for Aliased Register Access */
#define LED_OutB_BIT_MASK               (* (reg8 *) LED_OutB__BIT_MASK)
/* Bypass Enable */
#define LED_OutB_BYP                    (* (reg8 *) LED_OutB__BYP)
/* Port wide control signals */                                                   
#define LED_OutB_CTL                    (* (reg8 *) LED_OutB__CTL)
/* Drive Modes */
#define LED_OutB_DM0                    (* (reg8 *) LED_OutB__DM0) 
#define LED_OutB_DM1                    (* (reg8 *) LED_OutB__DM1)
#define LED_OutB_DM2                    (* (reg8 *) LED_OutB__DM2) 
/* Input Buffer Disable Override */
#define LED_OutB_INP_DIS                (* (reg8 *) LED_OutB__INP_DIS)
/* LCD Common or Segment Drive */
#define LED_OutB_LCD_COM_SEG            (* (reg8 *) LED_OutB__LCD_COM_SEG)
/* Enable Segment LCD */
#define LED_OutB_LCD_EN                 (* (reg8 *) LED_OutB__LCD_EN)
/* Slew Rate Control */
#define LED_OutB_SLW                    (* (reg8 *) LED_OutB__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LED_OutB_PRTDSI__CAPS_SEL       (* (reg8 *) LED_OutB__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LED_OutB_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LED_OutB__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LED_OutB_PRTDSI__OE_SEL0        (* (reg8 *) LED_OutB__PRTDSI__OE_SEL0) 
#define LED_OutB_PRTDSI__OE_SEL1        (* (reg8 *) LED_OutB__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LED_OutB_PRTDSI__OUT_SEL0       (* (reg8 *) LED_OutB__PRTDSI__OUT_SEL0) 
#define LED_OutB_PRTDSI__OUT_SEL1       (* (reg8 *) LED_OutB__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LED_OutB_PRTDSI__SYNC_OUT       (* (reg8 *) LED_OutB__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LED_OutB__SIO_CFG)
    #define LED_OutB_SIO_HYST_EN        (* (reg8 *) LED_OutB__SIO_HYST_EN)
    #define LED_OutB_SIO_REG_HIFREQ     (* (reg8 *) LED_OutB__SIO_REG_HIFREQ)
    #define LED_OutB_SIO_CFG            (* (reg8 *) LED_OutB__SIO_CFG)
    #define LED_OutB_SIO_DIFF           (* (reg8 *) LED_OutB__SIO_DIFF)
#endif /* (LED_OutB__SIO_CFG) */

/* Interrupt Registers */
#if defined(LED_OutB__INTSTAT)
    #define LED_OutB_INTSTAT            (* (reg8 *) LED_OutB__INTSTAT)
    #define LED_OutB_SNAP               (* (reg8 *) LED_OutB__SNAP)
    
	#define LED_OutB_0_INTTYPE_REG 		(* (reg8 *) LED_OutB__0__INTTYPE)
#endif /* (LED_OutB__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_LED_OutB_H */


/* [] END OF FILE */
