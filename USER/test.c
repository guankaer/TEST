#include "sys.h"
#include "usart.h" 
#include "delay.h" 

int main(void)
{ 
	u8 t=0;
	Stm32_Clock_Init(336,8,2,7);
	delay_init(168);
	uart_init(84,115200);
	while(1)
	{
		printf("t:%d\r\n",t);
		delay_ms(500);
		t++;
	}
}
