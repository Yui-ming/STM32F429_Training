
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

 #include "stm32f4xx.h"

uint8_t uart1_data;


void RCC_Configuration(void);
void GPIO_Configuration(void);
void LED_Initialization(void);
void LED3_Toggle(void);
void USART1_Configuration(void);
void USART1_puts(char* s);
int interrupt_check;

static inline void Delay_1us(uint32_t);
static inline void Delay_1us(uint32_t nCnt_1us)
{
  volatile uint32_t nCnt;

  for (; nCnt_1us != 0; nCnt_1us--){
  	if (interrupt_check==1) 
  		{break;
  		}
 
    for (nCnt = 45; nCnt != 0; nCnt--){
    	if (interrupt_check==1 ) 
    		{break;
    		}
    }
    }
}


#endif /* __MAIN_H */


