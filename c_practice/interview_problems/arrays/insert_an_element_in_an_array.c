#include<stdio.h>
int main(){
	int i,j,n,pos,x,m;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the number of elements in the array:");
	scanf("%d",&m);
	printf("Enter the array elements:");
	for(i=0;i<m;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the position at which the new element is to be inserted:");
	scanf("%d",&pos);
	printf("Enter the element to be inserted:\n");
	scanf("%d",&x);
	for(i=m;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	arr[pos]=x;
	m++;
	printf("Printing the array:\n");
	for(i=0;i<m;i++){
		printf("%d ",arr[i]);
	}
}

