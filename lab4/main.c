#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "Timer0.h"
void K1INT0(void);
void K2INT1(void);


unsigned char Sec=55,Min=29,Hour=02;
bit counting = 0;
sbit beep=P1^0;
int tap_count = 0;

void main()
{
	LCD_Init();
	Timer0Init();
	
	
	K1INT0();
	K2INT1();
	
	LCD_ShowString(1,1,"Clock:");	
	LCD_ShowString(2,1,"  :  :");
	
	while(1)
	{
		LCD_ShowNum(2,1,Hour,2);	
		LCD_ShowNum(2,4,Min,2);
		LCD_ShowNum(2,7,Sec,2);
		LCD_ShowNum(2,15,tap_count,2);
	}
}

void Timer0_Routine() interrupt 1
{
	static unsigned int T0Count;
	TL0 = 0x18;		
	TH0 = 0xFC;		
	T0Count++;
	if(T0Count>=1000)	
	{
		T0Count=0;
		if(counting==1)
		{	
		Sec++;
		}			
		if(Sec>=60)
		{
			beep=0;
			Delay(200);
			beep=1;
			Sec=0;		
			Min++;
			if(Min>=60)
			{
				Min=0;	
				Hour++;
				if(Hour>=24)
				{
					Hour=0;
				}
			}
		}
	}
}

void K1INT0(void)
{
    IT0 = 1;       
    EX0 = 1;       
}

void K2INT1(void)
{
    IT1 = 1;       
    EX1 = 1;      
}

void Int0_ISR() interrupt 0
{
		tap_count += 1;
    Delay(20);  
    if (P3_2 == 0)  
    {
        counting = 1;  
    }
}


void Int1_ISR() interrupt 2
{
    Delay(20);  
    if (P3_3 == 0)  
    {
        counting = 0;  
    }
}

