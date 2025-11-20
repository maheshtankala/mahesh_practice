#include<stdio.h>
int main(){
	char str1[15],str2[5];
	int i=0;
	printf("Enter the string-1:");
	scanf("%s",str1);
	printf("Enter the string-2:");
	scanf("%s",str2);
	while(str1[i]!='\0'){
		i++;
	}
	printf("%d\n",i);
	int j=0;
	while(str2[j]!='\0'){
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	printf("string after concatination:%s\n",str1);
	return 0;
}
