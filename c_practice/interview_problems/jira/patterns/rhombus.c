#include<stdio.h>
int main(){
	int n,i,j,k,num=2,count;
	printf("Enter the row size:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			printf(" ");
		}
		for(k=1;k<=n;k++){
			count=0;

			for(int x=2;x<=num/2;x++){
				if(num%x==0){
					count++;
				}
			}
			if(count==0){
				printf("%-4d",num);
			}
			else{
				k--;
			}
			num++;
		
		}
		printf("\n");
	
	}}

