#include <stdio.h>
int main(){
	int a;
	printf("enter the age\n");
	scanf("%d",&a);
	if(!(a<18)){
		printf("You are eligible %d \n",a);
	}
	else{
		printf("You are not eligible %d \n",a);
	}
}

