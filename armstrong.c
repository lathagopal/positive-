#include<stdio.h>
int main()
{
int a,b,i,j,rem;
scanf("%d %d",&a,&b);
for(i=a;i<b;i++)
{
int x=i,sum=0;
for(j=0;x!=0;j++)
     {
      rem=x%10;
      sum=sum+rem*rem*rem;
      x=x/10;
     
     }
     if(sum==i)
     printf("%d\n",sum);

}
return 0;
}
