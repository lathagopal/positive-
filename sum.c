#include<stdio.h>
int main()
{
int n,m,i,j,sum=0;
printf("enter the values:");
scanf("%d\t%d",&n,&m);
for(i=1;i<=n;i++)
{
printf("%d\n",n);
}
for(j=1;j<=m;j++)
{
sum=sum+j;
}
printf("sum is %d",sum);
return 0;
}
