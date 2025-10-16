#include<stdio.h>
int main(){
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={6,7,8,9,10};
	int *ptr1=arr1;
	int *ptr2=arr2;
	int temp,i;
	for(i=0;i<5;i++){
		temp = *(ptr1+i);
		*(ptr1+i)=*(ptr2+i);
		*(ptr2+i)=temp;
	}
	for(i=0;i<5;i++){
		printf("%d ",*(ptr1+i));
	}
	for(i=0;i<5;i++){
		printf("%d ",*(ptr2+i));
	}
}
