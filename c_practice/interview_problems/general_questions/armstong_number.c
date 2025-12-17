#include<stdio.h>
#include<math.h>
int main(){
	int n,count=0,result=0,remainder,temp;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	while(temp!=0){
		count++;
		temp=temp/10;
	}
	temp=n;
	while(temp!=0){
		remainder=temp%10;
		result=result+pow(remainder,count);
		temp=temp/10;
	}
	if(result==n){
		printf("Armstrong number\n");
	}
	else{
		printf("Not Armstrong number\n");
	}
}
