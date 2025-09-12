#include<stdio.h>
int main(){
	int i,n,result=0;
	printf("Enter no of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements",n);
       for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
	       result=result^arr[i];
       }
       printf("Unique element is %d",result);
}
