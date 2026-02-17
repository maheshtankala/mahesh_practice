#include<stdio.h>
int main(){
	int i,n,x,z=0,fact,temp;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		x=n%10;
		n=n/10;
		fact=1;
		for(i=x;i>1;i--){
			fact=fact*i;
		}
		z+=fact;
	}
	if(z==temp){
		printf("strong number\n");
	}
	else{
		printf("Not a strong number\n");
	}
}

