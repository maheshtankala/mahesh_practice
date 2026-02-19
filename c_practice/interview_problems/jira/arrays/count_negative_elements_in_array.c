#include<stdio.h>
int main(){
        int n,i,j,count=0;
        printf("Enter the ayyay size:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the array elements:");
        for(i=0;i<n;i++){
                scanf("%d",&arr[i]);
        }
	for(i=0;i<n;i++)
	{
		if(arr[i]<0){
			count++;
		}
	}
	printf("%d\n",count);
}



