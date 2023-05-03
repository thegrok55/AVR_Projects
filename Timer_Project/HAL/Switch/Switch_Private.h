/*
 * Switch_Private.h
 *
 *  Created on: Mar 24, 2023
 *      Author: Ayman ahmed
 */

#ifndef HAL_SWITCH_SWITCH_PRIVATE_H_
#define HAL_SWITCH_SWITCH_PRIVATE_H_

typedef enum err{
Switch_Init_Error,
Switch_Value_Error,
Switch_SomethingWrong,
Switch_Ok
}SwitchErrState;
typedef enum
{
	PressedPullUp,
	NotPressedPullUp,
	NotPressedPullDown=0,
	PressedPullDown,


}SwitchState;

typedef enum
{
	InternalPullUp,
	ExternalPullUp,
	ExternalPullDown
}SwitchConnectionType;


#endif /* HAL_SWITCH_SWITCH_PRIVATE_H_ */
