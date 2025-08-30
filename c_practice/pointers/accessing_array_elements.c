#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int *p=a;
	for(p=a;p<(&a[5]);p++)
		printf("%d\n",*p);
	
	return 0;
}

