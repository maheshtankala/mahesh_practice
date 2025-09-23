#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n];
	int length=n-1;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n Printing the actual array\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	for(i=0;i<n/2;i++){
		int temp=arr[i];
		arr[i]=arr[length-i];
		arr[length-i]=temp;}
	

	printf("printing the reverse array\n");
	for(i=0;i<n;i++){
	printf("%d ",arr[i]);
	}
return 0;
}


