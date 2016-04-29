#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* WS */
WS__0__INTTYPE EQU CYREG_PICU0_INTTYPE3
WS__0__MASK EQU 0x08
WS__0__PC EQU CYREG_PRT0_PC3
WS__0__PORT EQU 0
WS__0__SHIFT EQU 3
WS__AG EQU CYREG_PRT0_AG
WS__AMUX EQU CYREG_PRT0_AMUX
WS__BIE EQU CYREG_PRT0_BIE
WS__BIT_MASK EQU CYREG_PRT0_BIT_MASK
WS__BYP EQU CYREG_PRT0_BYP
WS__CTL EQU CYREG_PRT0_CTL
WS__DM0 EQU CYREG_PRT0_DM0
WS__DM1 EQU CYREG_PRT0_DM1
WS__DM2 EQU CYREG_PRT0_DM2
WS__DR EQU CYREG_PRT0_DR
WS__INP_DIS EQU CYREG_PRT0_INP_DIS
WS__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
WS__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
WS__LCD_EN EQU CYREG_PRT0_LCD_EN
WS__MASK EQU 0x08
WS__PORT EQU 0
WS__PRT EQU CYREG_PRT0_PRT
WS__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
WS__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
WS__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
WS__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
WS__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
WS__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
WS__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
WS__PS EQU CYREG_PRT0_PS
WS__SHIFT EQU 3
WS__SLW EQU CYREG_PRT0_SLW

/* LCD_LCDPort */
LCD_LCDPort__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_LCDPort__0__PORT EQU 2
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__INTTYPE EQU CYREG_PICU2_INTTYPE1
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_LCDPort__1__PORT EQU 2
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__INTTYPE EQU CYREG_PICU2_INTTYPE2
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_LCDPort__2__PORT EQU 2
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__INTTYPE EQU CYREG_PICU2_INTTYPE3
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_LCDPort__3__PORT EQU 2
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__INTTYPE EQU CYREG_PICU2_INTTYPE4
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_LCDPort__4__PORT EQU 2
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__INTTYPE EQU CYREG_PICU2_INTTYPE5
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_LCDPort__5__PORT EQU 2
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__INTTYPE EQU CYREG_PICU2_INTTYPE6
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_LCDPort__6__PORT EQU 2
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__AG EQU CYREG_PRT2_AG
LCD_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_LCDPort__DR EQU CYREG_PRT2_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_LCDPort__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LCD_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PORT EQU 2
LCD_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT2_PS
LCD_LCDPort__SHIFT EQU 0
LCD_LCDPort__SLW EQU CYREG_PRT2_SLW

/* SCK */
SCK__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
SCK__0__MASK EQU 0x01
SCK__0__PC EQU CYREG_PRT0_PC0
SCK__0__PORT EQU 0
SCK__0__SHIFT EQU 0
SCK__AG EQU CYREG_PRT0_AG
SCK__AMUX EQU CYREG_PRT0_AMUX
SCK__BIE EQU CYREG_PRT0_BIE
SCK__BIT_MASK EQU CYREG_PRT0_BIT_MASK
SCK__BYP EQU CYREG_PRT0_BYP
SCK__CTL EQU CYREG_PRT0_CTL
SCK__DM0 EQU CYREG_PRT0_DM0
SCK__DM1 EQU CYREG_PRT0_DM1
SCK__DM2 EQU CYREG_PRT0_DM2
SCK__DR EQU CYREG_PRT0_DR
SCK__INP_DIS EQU CYREG_PRT0_INP_DIS
SCK__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
SCK__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
SCK__LCD_EN EQU CYREG_PRT0_LCD_EN
SCK__MASK EQU 0x01
SCK__PORT EQU 0
SCK__PRT EQU CYREG_PRT0_PRT
SCK__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
SCK__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
SCK__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
SCK__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
SCK__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
SCK__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
SCK__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
SCK__PS EQU CYREG_PRT0_PS
SCK__SHIFT EQU 0
SCK__SLW EQU CYREG_PRT0_SLW

/* SDI */
SDI__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
SDI__0__MASK EQU 0x02
SDI__0__PC EQU CYREG_PRT0_PC1
SDI__0__PORT EQU 0
SDI__0__SHIFT EQU 1
SDI__AG EQU CYREG_PRT0_AG
SDI__AMUX EQU CYREG_PRT0_AMUX
SDI__BIE EQU CYREG_PRT0_BIE
SDI__BIT_MASK EQU CYREG_PRT0_BIT_MASK
SDI__BYP EQU CYREG_PRT0_BYP
SDI__CTL EQU CYREG_PRT0_CTL
SDI__DM0 EQU CYREG_PRT0_DM0
SDI__DM1 EQU CYREG_PRT0_DM1
SDI__DM2 EQU CYREG_PRT0_DM2
SDI__DR EQU CYREG_PRT0_DR
SDI__INP_DIS EQU CYREG_PRT0_INP_DIS
SDI__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
SDI__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
SDI__LCD_EN EQU CYREG_PRT0_LCD_EN
SDI__MASK EQU 0x02
SDI__PORT EQU 0
SDI__PRT EQU CYREG_PRT0_PRT
SDI__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
SDI__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
SDI__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
SDI__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
SDI__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
SDI__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
SDI__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
SDI__PS EQU CYREG_PRT0_PS
SDI__SHIFT EQU 1
SDI__SLW EQU CYREG_PRT0_SLW

/* SDO */
SDO__0__INTTYPE EQU CYREG_PICU0_INTTYPE2
SDO__0__MASK EQU 0x04
SDO__0__PC EQU CYREG_PRT0_PC2
SDO__0__PORT EQU 0
SDO__0__SHIFT EQU 2
SDO__AG EQU CYREG_PRT0_AG
SDO__AMUX EQU CYREG_PRT0_AMUX
SDO__BIE EQU CYREG_PRT0_BIE
SDO__BIT_MASK EQU CYREG_PRT0_BIT_MASK
SDO__BYP EQU CYREG_PRT0_BYP
SDO__CTL EQU CYREG_PRT0_CTL
SDO__DM0 EQU CYREG_PRT0_DM0
SDO__DM1 EQU CYREG_PRT0_DM1
SDO__DM2 EQU CYREG_PRT0_DM2
SDO__DR EQU CYREG_PRT0_DR
SDO__INP_DIS EQU CYREG_PRT0_INP_DIS
SDO__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
SDO__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
SDO__LCD_EN EQU CYREG_PRT0_LCD_EN
SDO__MASK EQU 0x04
SDO__PORT EQU 0
SDO__PRT EQU CYREG_PRT0_PRT
SDO__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
SDO__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
SDO__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
SDO__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
SDO__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
SDO__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
SDO__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
SDO__PS EQU CYREG_PRT0_PS
SDO__SHIFT EQU 2
SDO__SLW EQU CYREG_PRT0_SLW

/* SW1 */
SW1__0__INTTYPE EQU CYREG_PICU1_INTTYPE7
SW1__0__MASK EQU 0x80
SW1__0__PC EQU CYREG_PRT1_PC7
SW1__0__PORT EQU 1
SW1__0__SHIFT EQU 7
SW1__AG EQU CYREG_PRT1_AG
SW1__AMUX EQU CYREG_PRT1_AMUX
SW1__BIE EQU CYREG_PRT1_BIE
SW1__BIT_MASK EQU CYREG_PRT1_BIT_MASK
SW1__BYP EQU CYREG_PRT1_BYP
SW1__CTL EQU CYREG_PRT1_CTL
SW1__DM0 EQU CYREG_PRT1_DM0
SW1__DM1 EQU CYREG_PRT1_DM1
SW1__DM2 EQU CYREG_PRT1_DM2
SW1__DR EQU CYREG_PRT1_DR
SW1__INP_DIS EQU CYREG_PRT1_INP_DIS
SW1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
SW1__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
SW1__LCD_EN EQU CYREG_PRT1_LCD_EN
SW1__MASK EQU 0x80
SW1__PORT EQU 1
SW1__PRT EQU CYREG_PRT1_PRT
SW1__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
SW1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
SW1__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
SW1__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
SW1__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
SW1__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
SW1__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
SW1__PS EQU CYREG_PRT1_PS
SW1__SHIFT EQU 7
SW1__SLW EQU CYREG_PRT1_SLW

/* CLIP */
CLIP__0__INTTYPE EQU CYREG_PICU0_INTTYPE5
CLIP__0__MASK EQU 0x20
CLIP__0__PC EQU CYREG_PRT0_PC5
CLIP__0__PORT EQU 0
CLIP__0__SHIFT EQU 5
CLIP__AG EQU CYREG_PRT0_AG
CLIP__AMUX EQU CYREG_PRT0_AMUX
CLIP__BIE EQU CYREG_PRT0_BIE
CLIP__BIT_MASK EQU CYREG_PRT0_BIT_MASK
CLIP__BYP EQU CYREG_PRT0_BYP
CLIP__CTL EQU CYREG_PRT0_CTL
CLIP__DM0 EQU CYREG_PRT0_DM0
CLIP__DM1 EQU CYREG_PRT0_DM1
CLIP__DM2 EQU CYREG_PRT0_DM2
CLIP__DR EQU CYREG_PRT0_DR
CLIP__INP_DIS EQU CYREG_PRT0_INP_DIS
CLIP__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
CLIP__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
CLIP__LCD_EN EQU CYREG_PRT0_LCD_EN
CLIP__MASK EQU 0x20
CLIP__PORT EQU 0
CLIP__PRT EQU CYREG_PRT0_PRT
CLIP__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
CLIP__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
CLIP__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
CLIP__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
CLIP__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
CLIP__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
CLIP__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
CLIP__PS EQU CYREG_PRT0_PS
CLIP__SHIFT EQU 5
CLIP__SLW EQU CYREG_PRT0_SLW

/* I2S_1_bI2S */
I2S_1_bI2S_BitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB00_01_ACTL
I2S_1_bI2S_BitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB00_01_CTL
I2S_1_bI2S_BitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB00_01_CTL
I2S_1_bI2S_BitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB00_01_CTL
I2S_1_bI2S_BitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB00_01_CTL
I2S_1_bI2S_BitCounter__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB00_01_MSK
I2S_1_bI2S_BitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB00_01_MSK
I2S_1_bI2S_BitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB00_01_MSK
I2S_1_bI2S_BitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB00_01_MSK
I2S_1_bI2S_BitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB00_ACTL
I2S_1_bI2S_BitCounter__CONTROL_REG EQU CYREG_B0_UDB00_CTL
I2S_1_bI2S_BitCounter__CONTROL_ST_REG EQU CYREG_B0_UDB00_ST_CTL
I2S_1_bI2S_BitCounter__COUNT_REG EQU CYREG_B0_UDB00_CTL
I2S_1_bI2S_BitCounter__COUNT_ST_REG EQU CYREG_B0_UDB00_ST_CTL
I2S_1_bI2S_BitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB00_MSK_ACTL
I2S_1_bI2S_BitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB00_MSK_ACTL
I2S_1_bI2S_BitCounter__PERIOD_REG EQU CYREG_B0_UDB00_MSK
I2S_1_bI2S_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB00_01_ACTL
I2S_1_bI2S_BitCounter_ST__16BIT_STATUS_REG EQU CYREG_B0_UDB00_01_ST
I2S_1_bI2S_BitCounter_ST__MASK_REG EQU CYREG_B0_UDB00_MSK
I2S_1_bI2S_BitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB00_MSK_ACTL
I2S_1_bI2S_BitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB00_MSK_ACTL
I2S_1_bI2S_BitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB00_ACTL
I2S_1_bI2S_BitCounter_ST__STATUS_CNT_REG EQU CYREG_B0_UDB00_ST_CTL
I2S_1_bI2S_BitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B0_UDB00_ST_CTL
I2S_1_bI2S_BitCounter_ST__STATUS_REG EQU CYREG_B0_UDB00_ST
I2S_1_bI2S_CtlReg__0__MASK EQU 0x01
I2S_1_bI2S_CtlReg__0__POS EQU 0
I2S_1_bI2S_CtlReg__1__MASK EQU 0x02
I2S_1_bI2S_CtlReg__1__POS EQU 1
I2S_1_bI2S_CtlReg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
I2S_1_bI2S_CtlReg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB02_03_CTL
I2S_1_bI2S_CtlReg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB02_03_CTL
I2S_1_bI2S_CtlReg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB02_03_CTL
I2S_1_bI2S_CtlReg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB02_03_CTL
I2S_1_bI2S_CtlReg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB02_03_MSK
I2S_1_bI2S_CtlReg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB02_03_MSK
I2S_1_bI2S_CtlReg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB02_03_MSK
I2S_1_bI2S_CtlReg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB02_03_MSK
I2S_1_bI2S_CtlReg__2__MASK EQU 0x04
I2S_1_bI2S_CtlReg__2__POS EQU 2
I2S_1_bI2S_CtlReg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
I2S_1_bI2S_CtlReg__CONTROL_REG EQU CYREG_B0_UDB02_CTL
I2S_1_bI2S_CtlReg__CONTROL_ST_REG EQU CYREG_B0_UDB02_ST_CTL
I2S_1_bI2S_CtlReg__COUNT_REG EQU CYREG_B0_UDB02_CTL
I2S_1_bI2S_CtlReg__COUNT_ST_REG EQU CYREG_B0_UDB02_ST_CTL
I2S_1_bI2S_CtlReg__MASK EQU 0x07
I2S_1_bI2S_CtlReg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
I2S_1_bI2S_CtlReg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
I2S_1_bI2S_CtlReg__PERIOD_REG EQU CYREG_B0_UDB02_MSK
I2S_1_bI2S_Rx_CH_0__dpRx_u0__16BIT_A0_REG EQU CYREG_B0_UDB02_03_A0
I2S_1_bI2S_Rx_CH_0__dpRx_u0__16BIT_A1_REG EQU CYREG_B0_UDB02_03_A1
I2S_1_bI2S_Rx_CH_0__dpRx_u0__16BIT_D0_REG EQU CYREG_B0_UDB02_03_D0
I2S_1_bI2S_Rx_CH_0__dpRx_u0__16BIT_D1_REG EQU CYREG_B0_UDB02_03_D1
I2S_1_bI2S_Rx_CH_0__dpRx_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
I2S_1_bI2S_Rx_CH_0__dpRx_u0__16BIT_F0_REG EQU CYREG_B0_UDB02_03_F0
I2S_1_bI2S_Rx_CH_0__dpRx_u0__16BIT_F1_REG EQU CYREG_B0_UDB02_03_F1
I2S_1_bI2S_Rx_CH_0__dpRx_u0__A0_A1_REG EQU CYREG_B0_UDB02_A0_A1
I2S_1_bI2S_Rx_CH_0__dpRx_u0__A0_REG EQU CYREG_B0_UDB02_A0
I2S_1_bI2S_Rx_CH_0__dpRx_u0__A1_REG EQU CYREG_B0_UDB02_A1
I2S_1_bI2S_Rx_CH_0__dpRx_u0__D0_D1_REG EQU CYREG_B0_UDB02_D0_D1
I2S_1_bI2S_Rx_CH_0__dpRx_u0__D0_REG EQU CYREG_B0_UDB02_D0
I2S_1_bI2S_Rx_CH_0__dpRx_u0__D1_REG EQU CYREG_B0_UDB02_D1
I2S_1_bI2S_Rx_CH_0__dpRx_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
I2S_1_bI2S_Rx_CH_0__dpRx_u0__F0_F1_REG EQU CYREG_B0_UDB02_F0_F1
I2S_1_bI2S_Rx_CH_0__dpRx_u0__F0_REG EQU CYREG_B0_UDB02_F0
I2S_1_bI2S_Rx_CH_0__dpRx_u0__F1_REG EQU CYREG_B0_UDB02_F1
I2S_1_bI2S_Rx_CH_0__dpRx_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
I2S_1_bI2S_Rx_CH_0__dpRx_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
I2S_1_bI2S_Rx_STS_0__Sts__0__MASK EQU 0x01
I2S_1_bI2S_Rx_STS_0__Sts__0__POS EQU 0
I2S_1_bI2S_Rx_STS_0__Sts__1__MASK EQU 0x02
I2S_1_bI2S_Rx_STS_0__Sts__1__POS EQU 1
I2S_1_bI2S_Rx_STS_0__Sts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
I2S_1_bI2S_Rx_STS_0__Sts__16BIT_STATUS_REG EQU CYREG_B0_UDB02_03_ST
I2S_1_bI2S_Rx_STS_0__Sts__MASK EQU 0x03
I2S_1_bI2S_Rx_STS_0__Sts__MASK_REG EQU CYREG_B0_UDB02_MSK
I2S_1_bI2S_Rx_STS_0__Sts__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
I2S_1_bI2S_Rx_STS_0__Sts__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
I2S_1_bI2S_Rx_STS_0__Sts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
I2S_1_bI2S_Rx_STS_0__Sts__STATUS_CNT_REG EQU CYREG_B0_UDB02_ST_CTL
I2S_1_bI2S_Rx_STS_0__Sts__STATUS_CONTROL_REG EQU CYREG_B0_UDB02_ST_CTL
I2S_1_bI2S_Rx_STS_0__Sts__STATUS_REG EQU CYREG_B0_UDB02_ST
I2S_1_bI2S_Tx_CH_0__dpTx_u0__16BIT_A0_REG EQU CYREG_B0_UDB01_02_A0
I2S_1_bI2S_Tx_CH_0__dpTx_u0__16BIT_A1_REG EQU CYREG_B0_UDB01_02_A1
I2S_1_bI2S_Tx_CH_0__dpTx_u0__16BIT_D0_REG EQU CYREG_B0_UDB01_02_D0
I2S_1_bI2S_Tx_CH_0__dpTx_u0__16BIT_D1_REG EQU CYREG_B0_UDB01_02_D1
I2S_1_bI2S_Tx_CH_0__dpTx_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB01_02_ACTL
I2S_1_bI2S_Tx_CH_0__dpTx_u0__16BIT_F0_REG EQU CYREG_B0_UDB01_02_F0
I2S_1_bI2S_Tx_CH_0__dpTx_u0__16BIT_F1_REG EQU CYREG_B0_UDB01_02_F1
I2S_1_bI2S_Tx_CH_0__dpTx_u0__A0_A1_REG EQU CYREG_B0_UDB01_A0_A1
I2S_1_bI2S_Tx_CH_0__dpTx_u0__A0_REG EQU CYREG_B0_UDB01_A0
I2S_1_bI2S_Tx_CH_0__dpTx_u0__A1_REG EQU CYREG_B0_UDB01_A1
I2S_1_bI2S_Tx_CH_0__dpTx_u0__D0_D1_REG EQU CYREG_B0_UDB01_D0_D1
I2S_1_bI2S_Tx_CH_0__dpTx_u0__D0_REG EQU CYREG_B0_UDB01_D0
I2S_1_bI2S_Tx_CH_0__dpTx_u0__D1_REG EQU CYREG_B0_UDB01_D1
I2S_1_bI2S_Tx_CH_0__dpTx_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB01_ACTL
I2S_1_bI2S_Tx_CH_0__dpTx_u0__F0_F1_REG EQU CYREG_B0_UDB01_F0_F1
I2S_1_bI2S_Tx_CH_0__dpTx_u0__F0_REG EQU CYREG_B0_UDB01_F0
I2S_1_bI2S_Tx_CH_0__dpTx_u0__F1_REG EQU CYREG_B0_UDB01_F1
I2S_1_bI2S_Tx_STS_0__Sts__0__MASK EQU 0x01
I2S_1_bI2S_Tx_STS_0__Sts__0__POS EQU 0
I2S_1_bI2S_Tx_STS_0__Sts__1__MASK EQU 0x02
I2S_1_bI2S_Tx_STS_0__Sts__1__POS EQU 1
I2S_1_bI2S_Tx_STS_0__Sts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB01_02_ACTL
I2S_1_bI2S_Tx_STS_0__Sts__16BIT_STATUS_REG EQU CYREG_B0_UDB01_02_ST
I2S_1_bI2S_Tx_STS_0__Sts__MASK EQU 0x03
I2S_1_bI2S_Tx_STS_0__Sts__MASK_REG EQU CYREG_B0_UDB01_MSK
I2S_1_bI2S_Tx_STS_0__Sts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB01_ACTL
I2S_1_bI2S_Tx_STS_0__Sts__STATUS_REG EQU CYREG_B0_UDB01_ST

/* RxDMA */
RxDMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
RxDMA__DRQ_NUMBER EQU 0
RxDMA__NUMBEROF_TDS EQU 0
RxDMA__PRIORITY EQU 2
RxDMA__TERMIN_EN EQU 0
RxDMA__TERMIN_SEL EQU 0
RxDMA__TERMOUT0_EN EQU 0
RxDMA__TERMOUT0_SEL EQU 0
RxDMA__TERMOUT1_EN EQU 0
RxDMA__TERMOUT1_SEL EQU 0

/* TxDMA */
TxDMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
TxDMA__DRQ_NUMBER EQU 1
TxDMA__NUMBEROF_TDS EQU 0
TxDMA__PRIORITY EQU 2
TxDMA__TERMIN_EN EQU 0
TxDMA__TERMIN_SEL EQU 0
TxDMA__TERMOUT0_EN EQU 0
TxDMA__TERMOUT0_SEL EQU 0
TxDMA__TERMOUT1_EN EQU 0
TxDMA__TERMOUT1_SEL EQU 0

/* clock */
clock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
clock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
clock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
clock__CFG2_SRC_SEL_MASK EQU 0x07
clock__INDEX EQU 0x00
clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
clock__PM_ACT_MSK EQU 0x01
clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
clock__PM_STBY_MSK EQU 0x01

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 18
CYDEV_CHIP_DIE_PSOC4A EQU 10
CYDEV_CHIP_DIE_PSOC5LP EQU 17
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E123069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 10
CYDEV_CHIP_MEMBER_4C EQU 15
CYDEV_CHIP_MEMBER_4D EQU 6
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 11
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 9
CYDEV_CHIP_MEMBER_4I EQU 14
CYDEV_CHIP_MEMBER_4J EQU 7
CYDEV_CHIP_MEMBER_4K EQU 8
CYDEV_CHIP_MEMBER_4L EQU 13
CYDEV_CHIP_MEMBER_4M EQU 12
CYDEV_CHIP_MEMBER_4N EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 17
CYDEV_CHIP_MEMBER_5B EQU 16
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 0
CYDEV_CONFIGURATION_DMA EQU 1
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_DMA
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 0
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000003
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */