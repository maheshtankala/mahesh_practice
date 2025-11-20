#include<stdio.h>
int main(){
	char str[100];
	printf("Enter the string:");
	scanf("%[^\n]",str);
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	i=i-1;
	while( i>=0){
		printf("%c",str[i]);
		i--;
	}
	printf("\n");
}

