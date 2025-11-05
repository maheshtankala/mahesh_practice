#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("The sum of all array elements:%d\n",sum);
	return 0;
}
