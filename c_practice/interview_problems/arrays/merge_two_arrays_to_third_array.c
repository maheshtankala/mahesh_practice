#include<stdio.h>
int main(){
	int i,j,k;
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={6,7,8,9,10};
	int arr3[10];
	for(i=0;i<5;i++){

		arr3[i]=arr1[i];
	}
	for(j=0;j<5;j++){

		arr3[j+5]=arr2[j];
		}
	
	for(i=0;i<10;i++){
	printf("%d ",arr3[i]);
}
}
