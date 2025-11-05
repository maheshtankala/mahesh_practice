#include<stdio.h>
int main(){
	int i,j,count=0;
	int arr[5]={1,2,1,3};
	for(i=0;i<4;i++){
		count=0;
		for(j=i+1;j<4;j++){
			if(arr[i]==arr[j]){
				count++;
			}}
		if(count==0){
			printf("%d ",arr[i]);
		}
	}
}
