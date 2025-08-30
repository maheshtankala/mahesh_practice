#include<stdio.h>
int main(){
	int i,a[5],b[5];
	printf("Enter the 5 array elements:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		if(a[i]<0){
			b[i]=a[i];
		printf("%d",b[i]);}
	}
	return 0;
}
