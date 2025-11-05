#include<stdio.h>
int main(){
	int n,i,count=0;
	printf("Enter the array size;");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]<0){
			count++;
		}
	}
	printf("count of negative elements is %d\n",count);
	return 0;
}

