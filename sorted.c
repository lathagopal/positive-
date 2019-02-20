#include <stdio.h>
#include<conio.h>
int main(void) {
	int z,i,temp,j;
	scanf("%d",&z);
	int a[z];
	for(i=0;i<z;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<z;i++)
	{
		for(j=i+1;j<z;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
		printf("%d",a[i]);
		
		
			
		
	
	}
	
	return 0;
}
