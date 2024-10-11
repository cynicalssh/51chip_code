#include <regx51.h>

void delay(unsigned int time);  // ??????????

void main() {
		unsigned char LEDnum=0;
		P1=0x01;
    while(1) {
			if(P3_0==0){
				delay(200);
				while(P3_0==0);
				delay(200);
				
				LEDnum++;
				P1=0x01<<LEDnum;
			}
			if(P3_1==0){
				delay(200);
				while(P3_1==0);
				delay(200);
				
				LEDnum--;
				P1=0x01<<LEDnum;
			}
	}
}

void delay(unsigned int time) {  // ???? time ???????
    unsigned int i, j;
    for(i = 0; i < time; i++) {
        for(j = 0; j < 100; j++) {
            // ???????
        }
    }
}
