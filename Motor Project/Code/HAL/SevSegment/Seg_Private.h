/*
 * 7Seg_Private.h
 *
 *  Created on: Mar 24, 2023
 *      Author: Ayman ahmed
 */

#ifndef HAL_SEVSEGMENT_SEG_PRIVATE_H_
#define HAL_SEVSEGMENT_SEG_PRIVATE_H_

#define SevSeg_ArrSize  10
/*Cathode -> Led On if write One*/
#define SevSegCA_0      ~(0x3F)
#define SevSegCA_1      ~(0x06)
#define SevSegCA_2      ~(0x5B)
#define SevSegCA_3      ~(0x4F)
#define SevSegCA_4      ~(0x66)
#define SevSegCA_5      ~(0x6D)
#define SevSegCA_6      ~(0x7D)
#define SevSegCA_7      ~(0x07)
#define SevSegCA_8      ~(0x7F)
#define SevSegCA_9      ~(0x6F)

/*anode -> Led On if write Zero*/
#define SevSegCC_0      0x3F
#define SevSegCC_1      0x06
#define SevSegCC_2      0x5B
#define SevSegCC_3      0x4F
#define SevSegCC_4      0x66
#define SevSegCC_5      0x6D
#define SevSegCC_6      0x7D
#define SevSegCC_7      0x07
#define SevSegCC_8      0x7F
#define SevSegCC_9      0x6F

typedef enum SevErr
{
Number_Error,
Group_ERROR
}SevErrState;

#endif /* HAL_SEVSEGMENT_SEG_PRIVATE_H_ */
