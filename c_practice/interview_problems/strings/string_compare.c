#include<stdio.h>
#include<string.h>
int main(){
	int i=0;
	char str1[]="mahesh",str2[10];
	//printf("Enter the string-1:");
	//scanf("%s",str1);
	printf("Enter string-2:");
	scanf("%s",str2);
	printf("size is %lu\n",sizeof(str1));
	int len=strlen(str1);
	printf("string-1 length is:%d\n",len);
	while(str1[i]!='\0'){
		if(str1[i]!=str2[i]){
			printf("Both strings are different\n");
			return 0;
		}
		
			i++;
		
	}
	printf("Length of i is %d\n",i);
		if(i==len){
			printf("Both strings are equal\n");
		
		}
}

