#include<stdio.h>
#include<math.h>
int main(){
        double num,result;
        printf("Enter a number:");
        scanf("%lf",&num);
        if(num<0){
                printf("square of a negative number is not real\n");}
                else{
                        result=sqrt(num);
                        printf("square root of %.2lf is %.2lf\n",num,result);
                }

        }
