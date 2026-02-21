#include<stdio.h>
int main(){
	int n,i,j,count;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	int vis[n];
	for(i=0;i<n;i++){
		vis[i]=0;
	}


	for(i=0;i<n;i++){
		if(vis[i]==0){
			count=1;
			for(j=i+1;j<n;j++){
				if(arr[i]==arr[j]){
					count++;
					vis[j]=1;
				}
			}
			if(count<=1){
				printf("%d ",arr[i]);
			}
		}
	}
}


