#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "MatrixKey.h"

unsigned char KeyNum;
sbit beep = P2^0;
sbit LED = P3;

void pattern1(void);
void pattern2(void);
void pattern3(void);

void External0_ISR(void) interrupt 0 {
	 LCD_ShowNum(2, 1, KeyNum, 2);
    beep = 0;
    Delay(200);
    beep = 1;
    Delay(1000);
		
    pattern1();
    pattern2();
    pattern3();
}

void main() {
    LCD_Init();
    LCD_ShowString(1, 1, "MatrixKey:");
    
    IT0 = 1;
    EX0 = 1;
    EA = 1;

    while(1) {
        KeyNum = MatrixKey();
        if(KeyNum ) {
            LCD_ShowNum(2, 1, KeyNum, 2);
        }
    }
}

void pattern1() {
    unsigned char i;
    for (i = 0; i < 3; i++) {
        P3 = 0xAA;
        Delay(500);  
        P3 = 0x55;
        Delay(500);
    }
}

void pattern2() {
    unsigned char i;
    for (i = 0; i < 3; i++) {
        P3 = 0x0F;
        Delay(500);  
        P3 = 0xF0;
        Delay(500);
    }
}

void pattern3() {
    unsigned char i;
    for (i = 0; i < 3; i++) {
        P3 = 0xFF;
        Delay(500);  
        P3 = 0x00;
        Delay(500);
    }
}
