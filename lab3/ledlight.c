#include <reg51.h>  // 包含8051寄存器定义

// 定义延时函数
void delay(unsigned int time) {
    unsigned int i, j;
    for (i = 0; i < time; i++) {
        for (j = 0; j < 127; j++) {
            // 空循环达到延时的效果
        }
    }
}

// 定义LED花样1
void pattern1() {
    unsigned char i;
    for (i = 0; i < 3; i++) {  // 花样1循环3次
        P3 = 0xAA;  // 偶数LED亮（10101010）
        delay(500);
        P3 = 0x55;  // 奇数LED亮（01010101）
        delay(500);
    }
}

// 定义LED花样2
void pattern2() {
    unsigned char i;
    for (i = 0; i < 3; i++) {  // 花样2循环3次
        P3 = 0x0F;  // 低4位亮（00001111）
        delay(500);
        P3 = 0xF0;  // 高4位亮（11110000）
        delay(500);
    }
}

// 定义LED花样3
void pattern3() {
    unsigned char i;
    for (i = 0; i < 3; i++) {  // 花样3循环3次
        P3 = 0xFF;  // 全亮（11111111）
        delay(500);
        P3 = 0x00;  // 全灭（00000000）
        delay(500);
    }
}


