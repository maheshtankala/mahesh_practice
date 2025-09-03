#include<stdio.h>
int main(){
	int i;
	char s1[10],s2[10];
	
	printf("Enter the source string:");
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++){
		s2[i]=s1[i];
	}
	
	s2[i]='\0';
	printf("The copied string is:%s\n",s2);
	return 0;
}
