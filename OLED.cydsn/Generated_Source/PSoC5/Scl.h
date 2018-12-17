/*******************************************************************************
* File Name: Scl.h  
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

#if !defined(CY_PINS_Scl_H) /* Pins Scl_H */
#define CY_PINS_Scl_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Scl_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Scl__PORT == 15 && ((Scl__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Scl_Write(uint8 value);
void    Scl_SetDriveMode(uint8 mode);
uint8   Scl_ReadDataReg(void);
uint8   Scl_Read(void);
void    Scl_SetInterruptMode(uint16 position, uint16 mode);
uint8   Scl_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Scl_SetDriveMode() function.
     *  @{
     */
        #define Scl_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Scl_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Scl_DM_RES_UP          PIN_DM_RES_UP
        #define Scl_DM_RES_DWN         PIN_DM_RES_DWN
        #define Scl_DM_OD_LO           PIN_DM_OD_LO
        #define Scl_DM_OD_HI           PIN_DM_OD_HI
        #define Scl_DM_STRONG          PIN_DM_STRONG
        #define Scl_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Scl_MASK               Scl__MASK
#define Scl_SHIFT              Scl__SHIFT
#define Scl_WIDTH              1u

/* Interrupt constants */
#if defined(Scl__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Scl_SetInterruptMode() function.
     *  @{
     */
        #define Scl_INTR_NONE      (uint16)(0x0000u)
        #define Scl_INTR_RISING    (uint16)(0x0001u)
        #define Scl_INTR_FALLING   (uint16)(0x0002u)
        #define Scl_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Scl_INTR_MASK      (0x01u) 
#endif /* (Scl__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Scl_PS                     (* (reg8 *) Scl__PS)
/* Data Register */
#define Scl_DR                     (* (reg8 *) Scl__DR)
/* Port Number */
#define Scl_PRT_NUM                (* (reg8 *) Scl__PRT) 
/* Connect to Analog Globals */                                                  
#define Scl_AG                     (* (reg8 *) Scl__AG)                       
/* Analog MUX bux enable */
#define Scl_AMUX                   (* (reg8 *) Scl__AMUX) 
/* Bidirectional Enable */                                                        
#define Scl_BIE                    (* (reg8 *) Scl__BIE)
/* Bit-mask for Aliased Register Access */
#define Scl_BIT_MASK               (* (reg8 *) Scl__BIT_MASK)
/* Bypass Enable */
#define Scl_BYP                    (* (reg8 *) Scl__BYP)
/* Port wide control signals */                                                   
#define Scl_CTL                    (* (reg8 *) Scl__CTL)
/* Drive Modes */
#define Scl_DM0                    (* (reg8 *) Scl__DM0) 
#define Scl_DM1                    (* (reg8 *) Scl__DM1)
#define Scl_DM2                    (* (reg8 *) Scl__DM2) 
/* Input Buffer Disable Override */
#define Scl_INP_DIS                (* (reg8 *) Scl__INP_DIS)
/* LCD Common or Segment Drive */
#define Scl_LCD_COM_SEG            (* (reg8 *) Scl__LCD_COM_SEG)
/* Enable Segment LCD */
#define Scl_LCD_EN                 (* (reg8 *) Scl__LCD_EN)
/* Slew Rate Control */
#define Scl_SLW                    (* (reg8 *) Scl__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Scl_PRTDSI__CAPS_SEL       (* (reg8 *) Scl__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Scl_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Scl__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Scl_PRTDSI__OE_SEL0        (* (reg8 *) Scl__PRTDSI__OE_SEL0) 
#define Scl_PRTDSI__OE_SEL1        (* (reg8 *) Scl__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Scl_PRTDSI__OUT_SEL0       (* (reg8 *) Scl__PRTDSI__OUT_SEL0) 
#define Scl_PRTDSI__OUT_SEL1       (* (reg8 *) Scl__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Scl_PRTDSI__SYNC_OUT       (* (reg8 *) Scl__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Scl__SIO_CFG)
    #define Scl_SIO_HYST_EN        (* (reg8 *) Scl__SIO_HYST_EN)
    #define Scl_SIO_REG_HIFREQ     (* (reg8 *) Scl__SIO_REG_HIFREQ)
    #define Scl_SIO_CFG            (* (reg8 *) Scl__SIO_CFG)
    #define Scl_SIO_DIFF           (* (reg8 *) Scl__SIO_DIFF)
#endif /* (Scl__SIO_CFG) */

/* Interrupt Registers */
#if defined(Scl__INTSTAT)
    #define Scl_INTSTAT            (* (reg8 *) Scl__INTSTAT)
    #define Scl_SNAP               (* (reg8 *) Scl__SNAP)
    
	#define Scl_0_INTTYPE_REG 		(* (reg8 *) Scl__0__INTTYPE)
#endif /* (Scl__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Scl_H */


/* [] END OF FILE */
