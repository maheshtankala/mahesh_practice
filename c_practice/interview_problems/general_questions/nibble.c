#include<stdio.h>
int main(){
	unsigned int x=0xabcdef12;

	unsigned int b[4];

	for(int i=3;i>=0;i--){
		b[i]=x%256;
		x=x/256;
	}

	unsigned int temp=b[1];
		b[1]=b[2];
		b[2]=temp;

	unsigned int result=0;
	for(int i=0;i<4;i++){
		result=result*256+b[i];
	}
	

	printf("%x\n",result);
}	
