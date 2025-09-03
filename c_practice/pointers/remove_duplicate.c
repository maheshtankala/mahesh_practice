#include<stdio.h>
#include<string.h>
int main(){
	int i,len;
	char a[100];
	char *p=a;
	printf("Enter the string:\n");
	scanf("%[^\n]",p);
	len=strlen(p);
	for(i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(p[i]==p[j]){
				for(int k=j;k<len;k++)
				{
					p[k]=p[k+1];
				 }
				len--;
				j--;
			}
		}
	}
				
	printf("%s\n",p);
	return 0;
}
				
				
			


	
