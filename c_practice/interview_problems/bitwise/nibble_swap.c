#include<stdio.h>
int main(){
	int n;
	printf("Enter hexadecimal value:");
	scanf("%x",&n);
	n=((n&0xF000)>>12)|(n&0x0ff0)|((n&0x00f)<<12);
	printf("%x",n);
}

