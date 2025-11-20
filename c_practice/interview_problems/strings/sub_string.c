#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
	printf("Enter the main string:");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter the sub string:");
	fgets(str2,sizeof(str2),stdin);
	str1[strcspn(str1,"\n")]='\0';
	str2[strcspn(str2,"\n")]='\0';


	if(strstr(str1,str2)!=NULL){
		printf("Given string is a sub string\n");
	}
	else{
		printf("Not a sub string\n");
	}
	return 0;
}
