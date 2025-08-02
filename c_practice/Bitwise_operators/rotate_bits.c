#include<stdio.h>
int main(){
unsigned int num,rotated,bits;
int shift;
char direction;
printf("Enter a positive integer:");
scanf("%u",&num);
printf("Number of positions to rotate:");
scanf("%d",&shift);
printf("Enter direction-left or right:");
scanf(" %c",&direction);
bits=sizeof(num)*8;
shift=shift%bits;
if(direction=='l'){
	rotated=(num<<shift)|(num>>(bits-shift));
	printf("Left rotated result:%u\n",rotated);
}
else if(direction=='r'){
	rotated=(num>>shift)|(num<<(bits-shift));
	printf("Rigth rotated result:%u\n",rotated);
}
else{
	printf("Invalid direction! use rigth or left.\n");
}
return 0;
}
