#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++){
		printf("%d",a[i]);
	}printf("\n");
	for(i=4;i>=0;i--){
		printf("%d",a[i]);
	}printf("\n");
	return 0;
}

