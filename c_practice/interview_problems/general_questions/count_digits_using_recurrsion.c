#include<stdio.h>

int digit(int n){
	static int count=0;
	if(n==0){
		return count;
	}
	count++;
	return digit(n/10);
}
int main(){
	int n=1234;
	printf("%d\n",digit(n));
}

