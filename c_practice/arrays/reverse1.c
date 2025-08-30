#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int i,temp;
	for(i=4;i>=2;i--){
		temp=a[4-i];
		a[4-i]=a[i];
		a[i]=temp;
	
	}
	for(i=0;i<5;i++){
		printf("%d ",a[i]);}
	return 0;
}

