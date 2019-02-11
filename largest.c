#include<stdio.h>
int main()
{
int l,c,n;
printf("enter the num: ");
scanf("%d%d%d",&l,&c,&n);
if(l<c)
{
   if(c<n)
  {
     printf("largest num: %d",n);
   }
   else 
   if(c>l)
    {
      printf("largest num: %d",c);
     }
    }
else
{
printf("largest num: %d",l);
}

    return 0;
}
