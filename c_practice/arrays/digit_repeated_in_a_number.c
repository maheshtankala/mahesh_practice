#include<stdio.h>
int main(){
	int a[10]={0};
	int N;
	printf("Enter a number:");
	scanf("%d",&N);
	int rem;
	while(N>0){
		rem=N%10;
		if(a[rem]==1){
			break;
		}
		a[rem]=1;
		N=N/10;
	}
	if(N>0)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
