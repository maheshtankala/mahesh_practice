#include<stdio.h>
int main(){
        int n,i,j,even_count=0,odd_count=0;
        printf("Enter the ayyay size:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the array elements:");
        for(i=0;i<n;i++){
                scanf("%d",&arr[i]);
        }

	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			even_count++;
		}
		else{
			odd_count++;
		}
	}
	printf("Even count=%d\nOdd count=%d\n",even_count,odd_count);
}

