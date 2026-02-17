#include<stdio.h>
int main(){
	int i,j,n,k,count1,count2;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=3;i<=n;i++){
		count1=0,count2=0;
		for(j=1;j<i/2;j++){
			if(i%j==0){
				count1++;
			}
		}
		k=i+2;
		for(j=1;j<k/2;j++){
			if(k%j==0){
				count2++;
			}
		}
	            if((count1<=1&&count2<=1) && k<=n){
			printf("(%d,%d)",i,k);
		}
	}
}
