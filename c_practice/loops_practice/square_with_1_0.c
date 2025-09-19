#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i%2==0 && j%2==0)||(i%2==1 && j%2==1)){
				printf("0");
			}
			else{
				printf("1");}
		}
		printf("\n");
	}
	return 0;
}
