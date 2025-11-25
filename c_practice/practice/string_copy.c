#include<stdio.h>
int main(){
	char str1[10];
	printf("Enter the string:");
	scanf("%s",str1);
	int len=0;
	for(int i=0;str1[i]!='\0';i++){
		len++;
	}
	char str2[len+1];
	int i=0;
	while(str1[i]!='\0'){

		str2[i]=str1[i];
		i++;
	}
	str1[len]='\0';
	printf("%s",str2);
}



