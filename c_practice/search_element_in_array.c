#include<stdio.h>
int main(){
	int i,n,ele;
	int arr[20];
	int *ptr;
	printf("Enter the number of elements in an array: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the particular element: ");
	scanf("%d",&ele);
	ptr=arr;
	for(i=0;i<n;i++){
	       if((*ptr+i)==ele){
		       printf("The position of the paricular element is:%d\n",i);
		       return 0;
	       }
	}
	printf("Element not found\n");
	return 0;
}

