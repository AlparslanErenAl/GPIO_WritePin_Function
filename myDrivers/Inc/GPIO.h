/*
 * GPIO.h
 *
 *  Created on: Nov 2, 2024
 *      Author: Alparslan
 */

#ifndef INC_GPIO_H_
#define INC_GPIO_H_
#include "stm32xx.h"




#define GPIO_PIN_0   (uint16_t)(0x0000)
#define GPIO_PIN_1   (uint16_t)(0x0002)
#define GPIO_PIN_2   (uint16_t)(0x0004)
#define GPIO_PIN_3   (uint16_t)(0x0008)
#define GPIO_PIN_4   (uint16_t)(0x0010)
#define GPIO_PIN_5   (uint16_t)(0x0020)
#define GPIO_PIN_6   (uint16_t)(0x0040)
#define GPIO_PIN_7   (uint16_t)(0x0080)
#define GPIO_PIN_8   (uint16_t)(0x0100)
#define GPIO_PIN_9   (uint16_t)(0x0200)
#define GPIO_PIN_10  (uint16_t)(0x0400)
#define GPIO_PIN_11  (uint16_t)(0x0800)
#define GPIO_PIN_12  (uint16_t)(0x1000)
#define GPIO_PIN_13  (uint16_t)(0x2000)
#define GPIO_PIN_14  (uint16_t)(0x4000)
#define GPIO_PIN_15  (uint16_t)(0x8000)
#define GPIO_PIN_ALL (uint16_t)(0xFFFF)

typedef enum
{
	GPIO_Pin_Reset = 0x0U,
	GPIO_Pin_Set = !GPIO_Pin_Reset
}GPIO_PinState_t;


typedef struct
{

	uint32_t pinNumber;
	uint32_t Mode;
	uint32_t Otype;
	uint32_t PuPd;
	uint32_t Speed;
	uint32_t Alternate;


}GPIO_InitTypeDef_t;

void GPIO_WritePin(GPIO_TypeDef_t *GPIOx,uint16_t pinNumber,GPIO_PinState_t pinState);





#endif /* INC_GPIO_H_ */
