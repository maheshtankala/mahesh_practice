#include<stdio.h>
int main(){
	int i,n,temp,fact,sum=0,rem;
        printf("Enter the number:");
        scanf("%d",&n);
        temp=n;
        while(n>0){
		rem=n%10;
		fact=1;
		for(i=rem;i>=1;i--){
			fact=fact*i;}
		sum=sum+fact;
		n=n/10;}
	if(sum==temp){
		printf("The entered number is a strong number");}
	else{
		printf("The entered number is not a strong number");}
	return 0;
}

	 	
