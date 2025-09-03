#include<stdio.h>
int main(){
        int a=10;
        int b=20;
const int *const ptr=&a;
        //*ptr=15;
        //ptr=&b;
        printf("%d\n",*ptr);}
