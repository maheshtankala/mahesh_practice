#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int b[5];
	int *p;
	p=a;
	for(p=a;p<&a[5];p++){
		for(int i=0;i<=5;i++){
			b[i]=*p;
			break;
		}
	}
	printf("After copying ");
	for(p=a;p<&a[5];p++){
		printf("%d ",*p);
	}
}
