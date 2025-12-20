#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Enter the string:");
	fgets(str,100,stdin);
	str[(strcspn(str,"\n"))]="\0";
	int len=strlen(str);
	int j;
	printf("length of string is:%d\n",len);
	for(int i=0;i<len;i++){
		if(str[i]==' ' || i==len-1){
			j=i-1;
			while(j>=0 && str[j]!=' '){
				printf("%c",str[j]);
				j--;
			}
			printf(" ");

		}
	}
}



