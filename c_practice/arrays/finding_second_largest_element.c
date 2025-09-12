#include<stdio.h>
int main(){
	int i,j,temp,arr[5]={5,3,2,6,4};
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}}}
	printf("%d",arr[3]);
	return 0;
}
