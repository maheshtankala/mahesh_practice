#include<stdio.h>
int main(){
	int n,count;
	printf("Enter the number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		count=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
			if(count<=2){
				printf("%d ",i);
			
		}
	}
}
