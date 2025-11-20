#include<stdio.h>
int main(){
	int n,x;
	printf("enter the array size:");
	scanf("%d",&n);
	int arr[n];
	int *ptr=arr;
	printf("Enter the array elements:");
	for(int i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&x);
	int flag=0;
	for(int i=0;i<n;i++){
		if(*(ptr+i)==x){
			flag=1;
		}
	}
	if(flag==1){
		printf("Element is found\n");
		return 0;
	}
	else{
		printf("Not found\n");
	}
	return 0;

}

