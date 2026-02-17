#include<stdio.h>
int main(){
	int x;
	printf("Enter the number:");
	scanf("%x",&x);
	x=((x&0xF000)>>12)|(x&0x0FF0)|((x&0x000F)<<12);
	printf("%x\n",x);
}

