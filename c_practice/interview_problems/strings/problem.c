#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	int i,j,len;
	len=strlen(str);
	for(i=0;i<=len;i++){
		if(str[i]==' ' || i==len){
			j=i-1;
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
	return 0;
}

