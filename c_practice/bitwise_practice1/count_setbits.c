#include<stdio.h>
int main(){
	int a,count=0;
	printf("Enter the number:");
	scanf("%d",&a);
	while(a!=0){
		if(a&1==1){
			count++;
		}
		a=a>>1;
	}
	printf("The numbers of sets are %d",count);
	return 0;
}
