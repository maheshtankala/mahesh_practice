#include<stdio.h>
#include<string.h>
int main(){
char str1[10];
char str2[10];
printf("Enter the string:");
scanf("%s",str1);
strcpy(str2,str1);
printf("The copied string is :%s\n",str2);
return 0;
}

