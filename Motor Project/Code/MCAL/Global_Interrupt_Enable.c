/*
 * Global_Interrupt_Enable.c
 *
 *  Created on: Apr 4, 2023
 *      Author: Ayman ahmed
 */
#include "Global_Interrupt_Enable.h"
void EnableGlobalInterrupt(void){
	ENABLEINT0_SREG;
}
