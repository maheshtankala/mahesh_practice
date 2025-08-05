#include<stdio.h>
int main(){
	int a,bit_position;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter the bit position(position count starts from 0):");
	scanf("%d",&bit_position);
	if(a&(1<<bit_position)){
		printf("%d bit is set.\n",bit_position);
	}
	else{
		printf("%d bit is not set.\n",bit_position);
	}
	return 0;
}

