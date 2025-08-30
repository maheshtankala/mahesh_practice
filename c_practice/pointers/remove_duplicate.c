#include<stdio.h>
#include<string.h>
int main(){
	int i,len;
	char a[100];
	printf("Enter the string:\n");
	scanf("%[^\n]",a);
	len=strlen(a);
	for(i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(a[i]==a[j]){
				for(int k=j;k<len;k++){
					a[k]=a[k+1];
				
				} len--;j--;}}}
	printf("%s\n",a);
	return 0;
}
				
				
			


	
