#include<stdio.h>
void main()
{
	int n;
	printf("enetr the n value:");
	scanf("%d",&n);

	int set = 0;

	while(n > 0)
	{
		if(n & 1)
		{
			set++;
		}
		n  = n >> 1;
	}
	printf("set = %d\n",set);
}
