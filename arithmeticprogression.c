#include <stdio.h>
#include<conio.h>
int main(void)
{
	int i,x,a,l,sum=0;
	scanf("%d",&x);
	scanf("%d",&a);
	scanf("%d",&l);
	for(i=0;i<x;i++)
	{
		if(i==0)
		{
			sum=sum+a;
		}
		else
		{
			a=a+l;
			sum=sum+a;
			
		}
	}
	printf("%d",sum);
	return 0;
}
