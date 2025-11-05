#include<stdio.h>
int main(){
	int arr[100];
	int m,pos,i;
	printf("Enter how many elements in an array:");
	scanf("%d",&m);
	printf("Enter the array elements:");
	for(i=0;i<m;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the position where the element to deleted:");
	scanf("%d",&pos);
	for(i=pos;i<m;i++){
		arr[i]=arr[i+1];
	}
	m--;
	printf("Printing the array elements after deleting:");
	for(i=0;i<m;i++){
		printf("%d ",arr[i]);
	}
}


