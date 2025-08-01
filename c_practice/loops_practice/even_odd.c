#include<stdio.h>
int main(){
	int a;
	printf("Enter the number:");
	scanf("%d",&a);	
	if(a&1){
		printf("The given number is odd %d\n",a);
	}
	else{
	  printf("The given nuber is Even %d\n",a);}
}	
