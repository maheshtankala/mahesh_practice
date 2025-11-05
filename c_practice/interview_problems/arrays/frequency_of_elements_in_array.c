#include<stdio.h>
int main(){
	int i,j,n,count;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];

	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	int arr1[10]={0};
	for(i=0;i<n;i++)
	{
		
		if(arr1[i]==0)
		{
			count=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				arr1[j]=1;
			}
		}
			printf("%d's frequency is %d\n",arr[i],count);
	      }
	}
}
