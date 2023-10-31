#include "StdTypes.h"
#include "MemMap.h"
#include "Utils.h"

#include "DIO.h"

#include "LCD_Interface.h"
#include "UART_Interface.h"
#include "SPI.h"

#define  F_CPU	8000000
#include <util/delay.h>
void uartRxFun(void);
volatile u8 key2;

int main(void)
{
	UART_RX_SetCallBack(uartRxFun);
	DIO_Init();
	LCD_Init();
	
	sei();
	UART_Init();
	SPI_Init(MASTER);
	UART_RX_InterruptEnable();
	
    while(1) 
    {	
		
	}
}
void uartRxFun(void)
{

	key2 = UART_Receive();
	SPI_SendReceive(key2);
}