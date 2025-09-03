#include<stdio.h>
#include<string.h>
int main(){
char str[10];
char *p=str;
printf("Enter a string :");
scanf("%s",str);
int length=strlen(p);
printf("length of the string=%d\n",length);
return 0;

}
