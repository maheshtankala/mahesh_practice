#include<stdio.h>
int main(){
int i,j,n;
printf("Enter the value of n:");
scanf("%d",&n);
int s=2*n-1;
for(i=0;i<s;i++){
	for(j=0;j<s;j++){
		int top=i;
		int bottom=s-i-1;
		int left=j;
	        int right=s-j-1;
	    int min=top;
             if(min>left){
	        min=left;}
	     if(min>bottom){
		     min=bottom;}
	     if(min>right){
		     min=right;}
	     int r=n-min;
	     printf("%d ",r);
	}
	printf("\n");
}
return 0;
}
	     
                		

