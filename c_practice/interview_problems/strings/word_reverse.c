#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int len;
	printf("Enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	len=strlen(str);
	printf("%d\n",len);
	char temp;
	for(int s=0;s<=(len-1)/2;s++){
		temp=str[s];
		str[s]=str[len-s-1];
		str[len-s-1]=temp;
	}
	printf("%s\n",str);

	for(int i=0;i<=len;i++){
		if(str[i]==' '|| i==len){
			int j=i-1;
			while(j>=0){
				printf("%c",str[j]);
				if(str[j]==' '){
					break;
				}
				j--;
			}
			printf(" ");
		}
	}
}

