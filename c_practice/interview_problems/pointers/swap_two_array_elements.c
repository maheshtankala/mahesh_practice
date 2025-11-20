#include<stdio.h>
int main(){
	int i,n,temp;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	int *ptr1=arr1,*ptr2=arr2;
	printf("Enter the array-1 elements:");
	for(i=0;i<n;i++){
		scanf("%d",ptr1+i);
	}
	printf("Enter the array-2 elements:");
	for(i=0;i<n;i++){
		scanf("%d",ptr2+i);
	}
	for(i=0;i<n;i++){
		temp=*(ptr1+i);
		*(ptr1+i)=*(ptr2+i);
		*(ptr2+i)=temp;
	}
	printf("Printing the array-1 elements after swapping:");
	for(i=0;i<n;i++){
		printf("%d ",*(ptr1+i));
	}
	printf("\n");
	printf("Printing the array-2 elements after swapping:");
	for(i=0;i<n;i++){
		printf("%d ",*(ptr2+i));
	}
	printf("\n");
	return 0;
}


