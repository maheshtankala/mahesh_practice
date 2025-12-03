#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	char sub[100];
	int l1,l2;
	printf("Enter the main string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	printf("Enter the substring:");
	fgets(sub,100,stdin);
	sub[strcspn(sub,"\n")]='\0';
	int i,j,k,count,w;
	l1=strlen(str);
	l2=strlen(sub);
	for(i=0;i<l1;i++){
		k=0,count=0;
		for(j=i;j<i+l2;j++){
			if(str[i+k]==sub[k]){
				count++;
				k++;
			}
		}
		if(count==l2){
			printf("Given string is substring\n");
			w=1;
			break;
		}
	}
	if(w==0){
		printf("not a sub-string\n");
	}
}

