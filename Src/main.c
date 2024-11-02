

#include <stdint.h>
#include "stm32xx.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
    /* Loop forever */



	RCC_GPIOA_CLK_ENABLE() ;
	RCC_GPIOB_CLK_ENABLE() ;

	RCC_GPIOC_CLK_ENABLE() ;
	RCC_GPIOC_CLK_DISABLE() ;



 while(1)
 {


 }



for(;;);



}
