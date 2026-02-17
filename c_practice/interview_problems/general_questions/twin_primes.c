#include<stdio.h>
int main(){
	int i,j,n,count,digit=0,k=0;
	printf("Enter the number:");
	scanf("%d",&n);
	int arr[n];
	for(i=2;i<=n;i++){
		count=0;
		for(j=1;j<i;j++){
			if(i%j==0){
				count++;
			}
		}
			if(count<=1){
				digit++;
				arr[k]=i;
				k++;
			}
	}
	for(i=0;i<digit;i++){
		j=i+1;
		if(arr[j]-arr[i]==2){
		printf("(%d,%d)",arr[i],arr[j]);
		}
	}
}
		
