#include<stdio.h>
#include<string.h>
int main(){
	char str1[20]="mahesh";
	char str2[]="babu";
	 int len1,len2,i=0;
	 len1=strlen(str1);
	 len2=strlen(str2);
	 while(str2[i]!='\0'){
		 str1[len1+i]=str2[i];
		 i++;
	 }
	 str1[len1+len2]='\0';
	 printf("%s\n",str1);
}

