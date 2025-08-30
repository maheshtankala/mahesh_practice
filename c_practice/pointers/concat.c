#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
	char *p1=str1,*p2=str2;

	printf("Enter the string1:");
	scanf("%[^\n]",p1);

        printf("Enter the string2:");
        scanf(" %[^\n]",p2);
        
	
	strcat(p1," ");
	strcat(p1,p2);
	
	printf("%s\n",p1);
	
	return 0;
 }	


