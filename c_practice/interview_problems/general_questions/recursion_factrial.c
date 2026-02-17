#include<stdio.h>


int fact(int n){
	int x=1;
	if(n<=1){
		return 0;
	}
	return n*fact(n-1);

}
void main(){
	int x=1,n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("%d\n",fact(n));
}


