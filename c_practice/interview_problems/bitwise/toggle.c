#include<stdio.h>
int main(){
	int n,pos;
        printf("Enter the number:");
        scanf("%d",&n);
        printf("Enter the bit:");
        scanf("%d",&pos);
        int x= n ^ (1<<pos);
        printf("%d\n",x);
}

