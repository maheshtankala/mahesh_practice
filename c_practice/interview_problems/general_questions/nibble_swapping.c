#include<stdio.h>
int main(){


	unsigned int x=0xabcdef12;
	unsigned int rev=0;
	for(int i =0;i<4;i++){
		rev=rev*256+(x%256);
		x=x/256;
	}
	printf("%x\n",rev);
}
