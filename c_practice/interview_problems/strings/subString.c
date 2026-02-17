#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	char sub[100];
	printf("Enter the main string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	printf("Enter sub string:");
	fgets(sub,100,stdin);
	sub[strcspn(sub,"\n")]='\0';
	int len1=strlen(str);
	int len2=strlen(sub);
	int i,j,k,count=0,flag=0;
	for(i=0;i<len1;i++){
		k=0,count=0;
		for(j=i;j<i+len2;j++){
			if(str[i+k]==sub[k]){
				count++;
				k++;
			}
		}
		if(count==len2){
			printf("substring is present\n");
			return 0;
			flag=1;
			break;
		}
	}
	//if(flag==0){
		printf("substring is not present\n");
	//}
}
