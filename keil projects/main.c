#include <REGX52.H>
#include "LCD1602.h"	//??LCD1602???
#include "Delay.h"		//??Delay???

int Result=0;

void main()
{
	LCD_Init();
	LCD_ShowNum(1,1,Result,3);
	while(1)
	{
		Result++;					//Result??
		Delay(1000);				//??1?
		LCD_ShowNum(1,1,Result,3);	//?LCD?1?1???Result,???3?
	}
}
