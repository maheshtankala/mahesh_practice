#include<stdio.h>
int main(){
	int arr[5]={2,4,3,45,34};
	int (*p)[5];
	p=&arr;
	for(int i=0;i<5;i++){
		printf("%p ",&(*p)[i]);
	}
	return 0;
}
