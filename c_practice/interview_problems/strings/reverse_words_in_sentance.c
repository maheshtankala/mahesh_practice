#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	int len=strlen(str);
	int i,j;
	char temp;
	for(i=0;i<len/2;i++){
		temp=str[i];
		str[i]=str[len-1-i];
		str[len-i-1]=temp;
	}
	printf("%s\n",str);
	for(i=0;i<=len;i++){
		if(str[i]==' ' || i==len){
			j=i-1;
			while(j>=0 && str[j]!=' '){
				printf("%c",str[j]);
				j--;
			}
			printf(" ");
		}
	}
}



