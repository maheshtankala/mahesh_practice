#include<stdio.h>
#define LARGEST(a,b,c){\
	if(a>b && a>c){\
		printf("%d\n",a);}\
	else if(b>a && b>c){\
		printf("%d\n",b);}\
	else{\
		printf("%d\n",c);}\
}
	int main(){
	int x,y,z;
	printf("Enter the 3 numbers:");
	scanf("%d%d%d",&x,&y,&z);
	LARGEST(x,y,z);
	}	
