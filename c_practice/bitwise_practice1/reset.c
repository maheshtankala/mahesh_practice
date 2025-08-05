#include<stdio.h>
int main(){
        int a,i;
        printf("Enter the number and bit position:");
        scanf("%d%d",&a,&i);
        a=a&(~(1<<i));
        printf("Result after resetting the %dth bit:%d\n",i,a);
        return 0;
}
