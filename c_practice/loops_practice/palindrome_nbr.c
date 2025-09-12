#include<stdio.h>
int main(){
int n,x,rev=0;
printf("Enter the number:");
scanf("%d",&n);
int temp=n;
while(n>0){
	x=n%10;
	rev=rev*10+x;
	n=n/10;
}
if(rev==temp){
	printf("palindrome number\n");
}
else{
	printf("Not a Palindrome\n");
}
return 0;
}
