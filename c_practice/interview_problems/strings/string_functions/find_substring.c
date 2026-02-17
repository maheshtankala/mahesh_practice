#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
	printf("Enter the string1:");
	scanf("%[^\n]",str1);
	getchar();
	printf("Enter the substring:");
	scanf("%[^\n]",str2);
	getchar();
	int len1=0,len2=0;
	while(str1[len1]!='\0'){
		len1++;
	}
	while(str2[len2]!='\0'){
		len2++;
	}
	int i,j,k,count=0,x=0;
	for(i=0;i<len1;i++){
		k=0,count=0;
		for(j=i;j<i+len2;j++){
			if(str1[i+k]==str2[k]){
				count++;
				k++;
			}
		}
	if(count==len2){
		printf("Sub string\n");
		x=1;
		break;
	}
	}
	if(x==0){
		printf("Not sub string\n");
	}
}
