#include<stdio.h>
int main(){
	int i,n;
	int count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}}
	if(count==2){
		printf("The given number is prime");}
	else{
		printf("not prime");
	}
}

