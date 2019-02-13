#include<stdio.h>
int main()
{
	int x,j;
	scanf("%d",&x);
	for(j=1;j<=x;j++)
	{
		printf("%d * %d = %d\n",x,j,x*j);
	}
	return 0;
}
