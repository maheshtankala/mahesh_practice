#include<stdio.h>
#include<stdint.h>
int main(){
	uint16_t n;
	printf("Enter the number:");
	scanf("%hx",&n);
	n=((n & 0X000F)<<12) | ((n & 0XF000)>>12) | (n & 0X0FF0);
	printf("%x",n);
}
