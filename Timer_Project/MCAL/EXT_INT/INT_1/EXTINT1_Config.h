/*
 * EXTINT1_Config.h
 *
 *  Created on: Apr 4, 2023
 *      Author: Ayman ahmed
 */

#ifndef MCAL_EXT_INT_INT_1_EXTINT1_CONFIG_H_
#define MCAL_EXT_INT_INT_1_EXTINT1_CONFIG_H_
#include "EXTINT1_Private.h"
//Interrupt Sense Control Change
#define CaseINT1 AnyLogicalChange

//Interrupt Sense Control Logic
#define ENABLEINT1_LOW_LEVEL \
CLEAR_BIT(MCUCR_Reg,ISC10);\
CLEAR_BIT(MCUCR_Reg,ISC11)

#define ENABLEINT1_ANY_LOGIC \
SET_BIT(MCUCR_Reg,ISC10);\
CLEAR_BIT(MCUCR_Reg,ISC11)

#define ENABLEINT1_FALLING_EDGE \
CLEAR_BIT(MCUCR_Reg,ISC10);\
SET_BIT(MCUCR_Reg,ISC11)

#define ENABLEINT1_RISING_EDGE \
SET_BIT(MCUCR_Reg,ISC10);\
SET_BIT(MCUCR_Reg,ISC11)

#define ENABLEINT1_GICR_Reg SET_BIT(GICR_Reg,GICR_INT1_BIT)
#endif /* MCAL_EXT_INT_INT_1_EXTINT1_CONFIG_H_ */
