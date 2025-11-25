#include<stdio.h>
int main(){
	int arr[5]={1,2,1,2,3};
	int i,j,count;
	int repeated[5]={0};
	for(i=0;i<5;i++){
	  if(repeated[i]==0){
	   count=1;
  		for(j=i+1;j<5;j++){
	    		if(arr[i]==arr[j]){
			   count++;
   			   repeated[j]=1;
			}
		}
	  
	printf("%d is repeating %d times\n",arr[i],count);
	}}
return 0;
}
			
	
			
			

