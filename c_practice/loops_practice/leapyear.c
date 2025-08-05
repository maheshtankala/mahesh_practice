#include<stdio.h>
int main(){
	int year,leap;
	printf("Enter the year:");
	scanf("%d",&year);
	leap=(year%4==0)&&((year%100!=0)||(year%400==0));
	if(leap){
		printf("%d is a leap year.\n",year);
	}
	else{
		printf("%d is not a leap year.\n",year);
	}
	return 0;
}
