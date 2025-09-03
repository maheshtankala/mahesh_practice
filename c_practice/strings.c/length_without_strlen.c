#include<stdio.h>
int main(){
	int count=0;
	char str[20];
	printf("Enter the string: ");
	scanf("%s",str);
	char *p=str;
	while(*p!='\0'){
		count++;
		p++;
	}
	printf("The length of the string=%d\n",count);
	return 0;
}
