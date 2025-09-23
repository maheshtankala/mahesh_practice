#include<stdio.h>
int main(){
	 static int a=10,b=20,c,d;
   	 int *arr[4];
	arr[0]=&a;
	arr[1]=&b;
	arr[2]=&c;

	arr[3]=&d;
	printf("Printing the values of a,b,c:\n");
        
	for(int i=0;i<4;i++){

		printf("value at arr[%d] =%d\n",i,*arr[i]);
	}
	


	printf("---Printing the address of the ariables---\n");
	


	printf("Address of a: %p\n",(void*)&a);
	printf("Address of b: %p\n",(void*)&b);	
	 printf("Address of c: %p\n",&c);
 	
	return 0;
}	
