/*
 * Swtich_Interface.h
 *
 *  Created on: Mar 24, 2023
 *      Author: Ayman ahmed
 */

#ifndef HAL_SWITCH_SWITCH_INTERFACE_H_
#define HAL_SWITCH_SWITCH_INTERFACE_H_
#include "../../MCAL/DIO/DIO_Interface.h"
#include "Switch_Configuration.h"
SwitchErrState  SW_SwitchErrStateGetState(Switch_Info * Switch ,SwitchState * Result);

#endif /* HAL_SWITCH_SWITCH_INTERFACE_H_ */
