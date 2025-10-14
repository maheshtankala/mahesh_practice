#include<stdio.h>
int main(){
	int a[]={10,20,30,40};
	int *p=a;


	for(int i=0;i<4;i++){
		printf("a[%d] is %d\n",i,p[i]);
		p++;
		printf("P is pointing to %d\n",*p);
		p[i]*=2;
		printf("a[%d] is %d\n",i,p[i]);
	}
	printf("\n");
	for(int i=0;i<4;i++){
		printf("a[%d] is %d\n",i,p[i]);
	}
}

