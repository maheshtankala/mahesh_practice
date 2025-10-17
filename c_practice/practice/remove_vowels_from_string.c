#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter the size:");
	scanf("%d",&n);
	char str[n];
	printf("Enter the string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o'|| str[i]=='u' ){
			for(j=i;str[j]!='\0';j++){

			str[j]=str[j+1];
			
		}
			i--;
	}}
	printf("%s",str);
	return 0;
}
