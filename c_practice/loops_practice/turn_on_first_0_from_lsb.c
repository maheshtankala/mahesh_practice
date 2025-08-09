#include<stdio.h>
int main(){
	unsigned int n;
	int i;
	printf("Enter a number:");
	scanf("%u",&n);
	for(i=0;i<32;i++){
		if((n&(1<<i))==0){
			n=n|(1<<i);
			break;
		}}
	printf("Result aftering on the rightmost 0 bit:%u\n",n);
	return 0;
}
