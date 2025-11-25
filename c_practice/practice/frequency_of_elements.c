#include<stdio.h>
int main(){
	int i,j,count;
	int arr[5]={1,1,1,1,1};
	int fre[5]={0};
	for(i=0;i<5;i++){
		if(fre[i]==0){
			count=1;
			for(j=i+1;j<5;j++){
				if(arr[i]==arr[j]){
					count++;
					fre[j]=1;
				}
			}
		
		printf("%d frequency is %d\n",arr[i],count);
	}}
}


