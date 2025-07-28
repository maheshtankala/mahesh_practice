#include <stdio.h>
int main(){
	int length,breadth,perimeter;
	printf("Enter the length and breath of the Rectangle:");
	scanf("%d%d",&length,&breadth);
	perimeter=2*(length+breadth);
	printf("The perimeter of the Rectangle is:%d",perimeter);
	return 0;
}
