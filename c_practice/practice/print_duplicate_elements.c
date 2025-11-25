#include<stdio.h>
int main(){
	int i,j,count=0;
	int arr[5]={1,2,1,2,3};
	int fre[5]={0};
	for(i=0;i<5;i++){
		if(fre[i]==0){
			count=0;
			for(j=i+1;j<5;j++){
				if(arr[i]==arr[j]){
					count++;
					fre[j]=1;
				}
			}
			if(count>0){
				printf("%d ",arr[i]);
			}
		}
	}
}

