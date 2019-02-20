#include <stdio.h>
#include<conio.h>
int main(void) {
	int x,i,temp;
	scanf("%d",&x);
	int a[x];
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		
		
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
			
		
	
	}
	printf("%d",a[i-1]);
	return 0;
}
