#include <reg51.h>  // ����8051�Ĵ�������

// ������ʱ����
void delay(unsigned int time) {
    unsigned int i, j;
    for (i = 0; i < time; i++) {
        for (j = 0; j < 127; j++) {
            // ��ѭ���ﵽ��ʱ��Ч��
        }
    }
}

// ����LED����1
void pattern1() {
    unsigned char i;
    for (i = 0; i < 3; i++) {  // ����1ѭ��3��
        P3 = 0xAA;  // ż��LED����10101010��
        delay(500);
        P3 = 0x55;  // ����LED����01010101��
        delay(500);
    }
}

// ����LED����2
void pattern2() {
    unsigned char i;
    for (i = 0; i < 3; i++) {  // ����2ѭ��3��
        P3 = 0x0F;  // ��4λ����00001111��
        delay(500);
        P3 = 0xF0;  // ��4λ����11110000��
        delay(500);
    }
}

// ����LED����3
void pattern3() {
    unsigned char i;
    for (i = 0; i < 3; i++) {  // ����3ѭ��3��
        P3 = 0xFF;  // ȫ����11111111��
        delay(500);
        P3 = 0x00;  // ȫ��00000000��
        delay(500);
    }
}


