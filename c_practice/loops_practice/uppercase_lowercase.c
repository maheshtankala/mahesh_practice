#include<stdio.h>
int main(){
	char ch;
	printf("Enter a character:");
	scanf(" %c",&ch);
	if(ch>='A' && ch<='Z')
		printf("'%c' is a UPPERCASE letter.\n",ch);
	else if(ch>='a' && ch<='z')
		printf("'%c' is lowercase letter.\n",ch);
	else
		printf("'%c' is not a letter.\n",ch);
	return 0;
}
