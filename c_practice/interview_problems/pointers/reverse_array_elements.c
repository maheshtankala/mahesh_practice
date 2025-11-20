#include<stdio.h>
int main(){
	int i,n,temp;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	int *ptr=arr;
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n/2;i++){
		temp=*(ptr+i);
		*(ptr+i)=*(ptr+(n-i-1));
		*(ptr+(n-i-1))=temp;
	}
	printf("printing the elements of the array after reversing array elements:");
	for(i=0;i<n;i++){
		printf("%d ",*(ptr+i));
	}
	printf("\n");
}

