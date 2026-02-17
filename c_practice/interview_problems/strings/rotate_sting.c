#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Enter the string:");
	scanf("%s",str);
	printf("Enter the n value:");
	int n,i,j;
	scanf("%d",&n);
	int len=strlen(str);
	printf("%d\n",len);
	char temp;
	for(i=0;i<n;i++){
		temp=str[len-1];
		for(j=0;j<len;j++){
			str[len-j-1]=str[len-j-2];
		}
		str[0]=temp;
	}

			
	printf("%s\n",str);
}
