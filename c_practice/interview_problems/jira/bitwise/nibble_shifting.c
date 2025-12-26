#include<stdio.h>
#include<stdint.h>
int main(){
	uint16_t n;
	printf("Enter the number:");
	scanf("%hx",&n);
	n=(n & 0XF00F)|((n & 0X0F00)>>4) | ((n & 0X00F0)<<4);
       printf("%x",n);	
}

