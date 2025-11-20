#include<stdio.h>
int main(){
	char str[10];
	printf("Enter the string:");
	scanf("%[^\n]",str);
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	int j;
	char temp;
	for(j=0;j<(i-1)/2;j++){
		temp=str[j];
		str[j]=str[i-j-1];
		str[i-j-1]=temp;
	}
	printf("%s",str);
}

