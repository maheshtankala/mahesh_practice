#include<stdio.h>
#include<math.h>
int main(){
	int i,n,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	int temp=n;
	while(n!=0){
		n=n/2;
		count++;
	}
	if(pow(2,count-1)==temp){
		printf("The number is power of 2");
	}
	else{
		printf("not power of 2");
	}
	return 0;
}
