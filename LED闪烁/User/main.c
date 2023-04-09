#include "stm32f10x.h"                  // Device header
#include "LED.h"
#include "Delay.h"
int main(void)
{
	InitLED();
	while(1){
//		GPIO_WriteBit(GPIOA,GPIO_Pin_1,Bit_SET);
//		Delay_ms(500);
//		GPIO_WriteBit(GPIOA,GPIO_Pin_1,Bit_RESET);
//		Delay_ms(500);
		for(int i=0;i<3;i++)
		{
			GPIO_Write(GPIOA,0x0001);
			Delay_ms(1000);
			GPIO_Write(GPIOA,0x0000);
			Delay_ms(1000);
		}
		
	}
}
