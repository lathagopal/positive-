#include <stdio.h>

int main(void) 
{
	int y;
	scanf("%d",&y);
	if(y%4==0)
	{
		printf("a leap year");
	}
	else
	{
		printf(" non leap year");
	}
	return 0;
}
