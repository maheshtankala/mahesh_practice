#include<stdio.h>
int main(){
        int i,j,k,n;
        printf("Enter the row size:");
        scanf("%d",&n);
        for(i=0;i<n;i++){
                for(j=0;j<n;j++){
			if(i%2==0){
				if(j==0){
					printf(" ");
				}

				
			}
			
                        printf("*");
                }
                printf("\n");
        }
}

