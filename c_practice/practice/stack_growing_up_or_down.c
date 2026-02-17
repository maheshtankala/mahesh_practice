#include<stdio.h>
int main(){
	int arr[10];

	if((&arr[0]-&arr[1])<0){
		printf("Down stack\n");
	}
	else{
		printf("Up stack\n");
	}
}
