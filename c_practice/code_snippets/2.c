#include<stdio.h>
int main(){
	int arr[3]={20,30,40};
	arr[0]++;
	int i=0;
	while(i<3){
		printf("%d ",arr[i]);
		i++;
	}
}
