#include<stdio.h>
#include<math.h>

void armstrong(int n){
	int original=n;
	int temp=n;int count=0;int result=0;
	while(temp>0){
		temp=temp/10;
		count++;
	}
	temp=n;
	while(temp>0){
		int digit=temp%10;
		result+=pow(digit,count);
		temp=temp/10;
	}
	if(result==original)
		printf("The number is Armstrong number");
	else
		printf("NOT");
}
int main(){
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	armstrong(n);
}
	

 	


