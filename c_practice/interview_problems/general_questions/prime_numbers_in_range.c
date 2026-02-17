#include<stdio.h>
int main(){
	int i,n,count;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		count=0;
		for(int j=1;j<i/2;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count<=1){
			printf("%d\n",i);
		}
	}
}

