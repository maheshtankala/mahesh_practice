#include <stdio.h>
int main(){
	int length,breadth,area;
	printf("Enter the length and breath of the Rectangle:");
	scanf("%d%d",&length,&breadth);
	area=length*breadth;
	printf("The area of the Rectangle is:%d",area);
	return 0;
}
