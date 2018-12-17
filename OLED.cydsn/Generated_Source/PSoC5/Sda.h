/*******************************************************************************
* File Name: Sda.h  
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

#if !defined(CY_PINS_Sda_H) /* Pins Sda_H */
#define CY_PINS_Sda_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Sda_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Sda__PORT == 15 && ((Sda__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Sda_Write(uint8 value);
void    Sda_SetDriveMode(uint8 mode);
uint8   Sda_ReadDataReg(void);
uint8   Sda_Read(void);
void    Sda_SetInterruptMode(uint16 position, uint16 mode);
uint8   Sda_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Sda_SetDriveMode() function.
     *  @{
     */
        #define Sda_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Sda_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Sda_DM_RES_UP          PIN_DM_RES_UP
        #define Sda_DM_RES_DWN         PIN_DM_RES_DWN
        #define Sda_DM_OD_LO           PIN_DM_OD_LO
        #define Sda_DM_OD_HI           PIN_DM_OD_HI
        #define Sda_DM_STRONG          PIN_DM_STRONG
        #define Sda_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Sda_MASK               Sda__MASK
#define Sda_SHIFT              Sda__SHIFT
#define Sda_WIDTH              1u

/* Interrupt constants */
#if defined(Sda__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Sda_SetInterruptMode() function.
     *  @{
     */
        #define Sda_INTR_NONE      (uint16)(0x0000u)
        #define Sda_INTR_RISING    (uint16)(0x0001u)
        #define Sda_INTR_FALLING   (uint16)(0x0002u)
        #define Sda_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Sda_INTR_MASK      (0x01u) 
#endif /* (Sda__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Sda_PS                     (* (reg8 *) Sda__PS)
/* Data Register */
#define Sda_DR                     (* (reg8 *) Sda__DR)
/* Port Number */
#define Sda_PRT_NUM                (* (reg8 *) Sda__PRT) 
/* Connect to Analog Globals */                                                  
#define Sda_AG                     (* (reg8 *) Sda__AG)                       
/* Analog MUX bux enable */
#define Sda_AMUX                   (* (reg8 *) Sda__AMUX) 
/* Bidirectional Enable */                                                        
#define Sda_BIE                    (* (reg8 *) Sda__BIE)
/* Bit-mask for Aliased Register Access */
#define Sda_BIT_MASK               (* (reg8 *) Sda__BIT_MASK)
/* Bypass Enable */
#define Sda_BYP                    (* (reg8 *) Sda__BYP)
/* Port wide control signals */                                                   
#define Sda_CTL                    (* (reg8 *) Sda__CTL)
/* Drive Modes */
#define Sda_DM0                    (* (reg8 *) Sda__DM0) 
#define Sda_DM1                    (* (reg8 *) Sda__DM1)
#define Sda_DM2                    (* (reg8 *) Sda__DM2) 
/* Input Buffer Disable Override */
#define Sda_INP_DIS                (* (reg8 *) Sda__INP_DIS)
/* LCD Common or Segment Drive */
#define Sda_LCD_COM_SEG            (* (reg8 *) Sda__LCD_COM_SEG)
/* Enable Segment LCD */
#define Sda_LCD_EN                 (* (reg8 *) Sda__LCD_EN)
/* Slew Rate Control */
#define Sda_SLW                    (* (reg8 *) Sda__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Sda_PRTDSI__CAPS_SEL       (* (reg8 *) Sda__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Sda_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Sda__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Sda_PRTDSI__OE_SEL0        (* (reg8 *) Sda__PRTDSI__OE_SEL0) 
#define Sda_PRTDSI__OE_SEL1        (* (reg8 *) Sda__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Sda_PRTDSI__OUT_SEL0       (* (reg8 *) Sda__PRTDSI__OUT_SEL0) 
#define Sda_PRTDSI__OUT_SEL1       (* (reg8 *) Sda__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Sda_PRTDSI__SYNC_OUT       (* (reg8 *) Sda__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Sda__SIO_CFG)
    #define Sda_SIO_HYST_EN        (* (reg8 *) Sda__SIO_HYST_EN)
    #define Sda_SIO_REG_HIFREQ     (* (reg8 *) Sda__SIO_REG_HIFREQ)
    #define Sda_SIO_CFG            (* (reg8 *) Sda__SIO_CFG)
    #define Sda_SIO_DIFF           (* (reg8 *) Sda__SIO_DIFF)
#endif /* (Sda__SIO_CFG) */

/* Interrupt Registers */
#if defined(Sda__INTSTAT)
    #define Sda_INTSTAT            (* (reg8 *) Sda__INTSTAT)
    #define Sda_SNAP               (* (reg8 *) Sda__SNAP)
    
	#define Sda_0_INTTYPE_REG 		(* (reg8 *) Sda__0__INTTYPE)
#endif /* (Sda__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Sda_H */


/* [] END OF FILE */
