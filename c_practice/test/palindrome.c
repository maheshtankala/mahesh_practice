#include<stdio.h>
int main(){
	int n,i,temp,digit=0;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	while(temp!=0){
		temp=temp/10;
		digit++;
	}
	printf("digit=%d\n",digit);
	int arr[digit];
	temp=n;
	for(i=0;i<digit;i++){
		arr[i]=temp%10;
		temp=temp/10;
	}
	for(i=0;i<digit/2;i++){
	 	if(arr[i]!=arr[digit-i-1]){
		printf("Not palindrome\n");
		return 0;
		}
         }
	printf("Palindrome\n");
}
		

