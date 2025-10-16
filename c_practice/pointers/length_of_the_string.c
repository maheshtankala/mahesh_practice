#include<stdio.h>
int main(){
	char str[100];
	int len=0;
	printf("Enter the string: ");
	scanf("%[^\n]",str);
 	char *ptr=str;
	while(*ptr!='\0'){
		len++;
		ptr++;
	}
	printf("%d\n",len);
	return 0;
}
