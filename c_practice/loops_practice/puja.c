#include<stdio.h>
int main(){
int i,j,k,n;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		if(i==n/2+1 || i==1 || j==1 ||(j==n && i<=n/2+1))
		printf("*");
		else
			printf(" ");
	}
	printf("\n");}
printf("\n");
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		if(i==n||j==1||j==n)
			printf("*");
		else
			printf(" ");
	}
	printf("\n");}
printf("\n");
printf("\n");
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		if(j==n||i==n||(i>n/2 &&j==1)){
				printf("*");}
				else{
				printf(" ");}
				}
				printf("\n");
				}printf("\n");
printf("\n");
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		if(i==1 || j==1 || i==n/2 ||j==n){
			printf("*");
		}
		else{
			printf(" ");}}
		
		printf("\n");
	}}


