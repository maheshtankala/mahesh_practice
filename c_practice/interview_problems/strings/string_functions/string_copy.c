#include<stdio.h>
#include<string.h>
int main(){
	char str1[10],str2[10];
	printf("Enter the string1:");
	fgets(str1,10,stdin);
	str1[strcspn(str1,"\n")]='\0';
	int len=0;
	while(str1[len]!='\0'){
		len++;
	}
	for(int i=0;i<len;i++){
		str2[i]=str1[i];
	}
	str2[len]='\0';
	printf("%s\n",str2);
}
