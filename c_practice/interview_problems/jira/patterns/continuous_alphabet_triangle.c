#include<stdio.h>
int main(){
        int i,j,n;
        char x='A';
        printf("Enter the row size:");
        scanf("%d",&n);
        for(i=0;i<n;i++){
                for(j=0;j<=i;j++){
                        printf("%c",x);
			x++;
                }
                printf("\n");
                
        }
}
 
