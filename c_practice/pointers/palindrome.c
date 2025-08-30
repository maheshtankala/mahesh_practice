#include<stdio.h>
#include<string.h>
int main(){
	char str1[100];
	int len,a=1;
	printf("Enter the string:");
	scanf("%[^\n]",str1);
	len=strlen(str1);
	for(int i=0;i<len/2;i++){
		if(str1[i]!=str1[len-1-i]){
		//	printf("Not a palindrome\n");
		//	return 0;
                   a=0;
		}
		else
	          a=1;
	}
	if(a==1){
		   printf("Palindrome\n");
	   }
	   else{
		   printf("not");
	   }

}

			
	             

		
		

	
		

		


