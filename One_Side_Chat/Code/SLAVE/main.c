#include "StdTypes.h"
#include "MemMap.h"
#include "Utils.h"

#include "DIO.h"
#include "LCD_Interface.h"
#include "SPI.h"



#define  F_CPU	8000000
#include <util/delay.h>

volatile u8 _data;
void SPI_Func(void);

int main(void)
{
	SPI_SetCallBack(SPI_Func);
	DIO_Init();
	LCD_Init();
	sei();
	
	SPI_Init(SLAVE);
    while(1) 
    {	
	
	}
}

void SPI_Func(void)
{
	static u8  i=0;
	_data = SPI_SendReceive('s');
	if(_data == 8)
	{
		LCD_Clear_Position(0,i-1,2);
		i--;
	}
	else
	{
		LCD_GoTo(0,i);
		LCD_WriteChar(_data);
		i++;
	}
}