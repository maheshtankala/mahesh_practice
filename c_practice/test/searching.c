#include<stdio.h>
int main(){
	int arr[]={8,10,15,20,23,25,36,40,48,50,52,59,61,66,68,71,74,78,81,83};
	int key,flag=0;
	int size=sizeof(arr)/4;
	printf("%d\n",size);
	printf("Enter the key value:");
	scanf("%d",&key);
	for(int i=1;i<size;i++){
		if(key==arr[i]){
			printf("Index is %d\n",i);
			flag==1;
			return 0;
		}
	}
	if(flag==0){
		printf("Entered value is not found in the array:");
	}
}
