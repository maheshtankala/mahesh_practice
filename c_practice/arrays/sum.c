#include<stdio.h>
int main(){
	int i,a[10],sum=0;
	printf("Enter the 10 array elements\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		sum+=a[i];
	}
	printf("%d",sum);
}

