#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	int *ptr1=arr1,*ptr2=arr2;
	printf("Enter the array1 elements:");
	for(i=0;i<n;i++){
		scanf("%d",(ptr1+i));
	}
	for(i=0;i<n;i++){
		*(ptr2+i)=*(ptr1+i);
	}
	printf("Printing the array2 elements:");
	for(i=0;i<n;i++){
		printf("%d ",*(ptr2+i));
	}
}
