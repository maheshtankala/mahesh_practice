#include<stdio.h>
int main(){
        int n,i,j,pos;
        printf("Enter the ayyay size:");
        scanf("%d",&n);
        int arr[n+1];
        printf("Enter the array elements:");
        for(i=0;i<n;i++){
                scanf("%d",&arr[i]);
        }
	printf("Enter the position:");
	scanf("%d",&pos);
	printf("Enter the element:");
	scanf("%d",&j);

	for(i=0;i<pos-1;i++){
		arr[n-i]=arr[n-i-1];
	}
	arr[pos]=j;
	printf("Enter the elements:");
	for(i=0;i<=n;i++){
		printf("%d ",arr[i]);
	}
}


