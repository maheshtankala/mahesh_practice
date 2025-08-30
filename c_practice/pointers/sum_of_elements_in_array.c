#include<stdio.h>
int main(){
	int a[]={1,2,3,4,5};
	int sum=0,*p;
	for(p=&a[0];p<&a[5];p++){
		sum+=*p;
	}
		printf("sum is %d",sum);
		return 0;
}
