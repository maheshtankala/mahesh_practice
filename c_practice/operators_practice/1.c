#include<stdio.h>
int main(){
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	if(a&1){
		printf("The number is odd %d",a);
	}
        else{
	printf("The number is even %d",a);}
return 0;
}
