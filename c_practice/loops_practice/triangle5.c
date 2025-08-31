#include<stdio.h>
int main(){
	int i,j,n=5;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			printf(" ");}
		for(int k=0;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}}
