

#ifndef INC_RCC_H_
#define INC_RCC_H_

#include "stm32xx.h"




#define RCC_GPIOA_CLK_ENABLE()                do{ uint32_t tempValue=0;   \
                                                  SET_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOAEN);    \
                                                  tempValue=READ_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOAEN) ; \
												  UNUSED(tempValue);\
															}while(0)



#define RCC_GPIOB_CLK_ENABLE()                do{ uint32_t tempValue=0;   \
                                                  SET_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOBEN);    \
                                                  tempValue=READ_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOBEN) ; \
												  UNUSED(tempValue);\
															}while(0)



#define RCC_GPIOC_CLK_ENABLE()                do{ uint32_t tempValue=0;   \
                                                  SET_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOCEN);    \
                                                  tempValue=READ_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOCEN) ; \
												  UNUSED(tempValue);\
															}while(0)



#define RCC_GPIOD_CLK_ENABLE()                do{ uint32_t tempValue=0;   \
                                                  SET_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIODEN);    \
                                                  tempValue=READ_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIODEN) ; \
												  UNUSED(tempValue);\
															}while(0)


#define RCC_GPIOA_CLK_DISABLE()                do{ uint32_t tempValue=0;   \
                                                  CLEAR_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOAEN);    \
                                                  tempValue=READ_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOAEN) ; \
												  UNUSED(tempValue);\
															}while(0)

#define RCC_GPIOB_CLK_DISABLE()                do{ uint32_t tempValue=0;   \
                                                  CLEAR_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOBEN);    \
                                                  tempValue=READ_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOBEN) ; \
												  UNUSED(tempValue);\
															}while(0)

#define RCC_GPIOC_CLK_DISABLE()                do{ uint32_t tempValue=0;   \
                                                  CLEAR_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOCEN);    \
                                                  tempValue=READ_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOCEN) ; \
												  UNUSED(tempValue);\
															}while(0)

#define RCC_GPIOD_CLK_DISABLE()                do{ uint32_t tempValue=0;   \
                                                  CLEAR_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIODEN);    \
                                                  tempValue=READ_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIODEN) ; \
												  UNUSED(tempValue);\
															}while(0)






































#endif /* INC_RCC_H_ */
