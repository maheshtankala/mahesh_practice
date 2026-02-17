#include<stdio.h>
#include<string.h>
int main(){
	char str1[10],str2[10];
	printf("Enter the string1:");
	fgets(str1,10,stdin);
	str1[strcspn(str1,"\n")]='\0';
	printf("Enter the string2:");
	fgets(str2,10,stdin);
	str2[strcspn(str2,"\n")]='\0';
	int len1=0,len2=0;
	while(str1[len1]!='\0'){
		len1++;
	}
	while(str2[len2]!='\0'){
		len2++;
	}
	int j=0;
	for(int i=len1;i<=len1+len2;i++){
	
		str1[i]=str2[j];
		j++;
	}
	str1[len1+len2+1]='\0';
	printf("%s\n",str1);

}
