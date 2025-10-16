#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the size of the string: ");
	scanf("%d",&n);
	char str[n];
	printf("Enter the string: ");
	scanf("%s",str);
	for(i=0;i<n/2;i++){
		char temp=str[i];
		str[i]=str[n-i-1];
		str[n-i-1]=temp;
	}
	printf("%s",str);
}

