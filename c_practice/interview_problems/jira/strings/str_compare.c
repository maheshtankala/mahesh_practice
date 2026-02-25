#include<stdio.h>
#include<string.h>
int main(){
	char str1[]="mahesh";
	char str2[]="mahesh";
	int i=0,len1,len2;
	len1=strlen(str1);
	len2=strlen(str2);
	while(str2[i]!='\0'){
		if(str1[i]!=str2[i]){
			printf("not same\n");
			return 0;
		}
		i++;
	}
	printf("same\n");
}

