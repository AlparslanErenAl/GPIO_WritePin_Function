

#ifndef SRC_GPIO_C_
#define SRC_GPIO_C_

#include "GPIO.h"




void GPIO_WritePin(GPIO_TypeDef_t *GPIOx,uint16_t pinNumber,GPIO_PinState_t pinState)
{

	if( pinState == GPIO_Pin_Set )
	{
		GPIOx->BSRR=pinNumber;

	}

	else
	{
		GPIOx->BSRR = ( pinNumber << 16U );
	}

}











#endif /* SRC_GPIO_C_ */
