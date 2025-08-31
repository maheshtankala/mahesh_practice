#include<stdio.h>
int main(){
	int i,j,k,n=6;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==0 || j==0 || j==n-1 || i==n/2){
			       printf("* ");
			}
			else{
			 printf("  ");
	 			}
              }
printf("\n");
	}return 0;
}
	
