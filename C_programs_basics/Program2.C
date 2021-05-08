#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("enter the limit");
scanf("%d",&n);
for(i=2;i<=n;i++)
    {
     if(i%2==0)
      sum+=i;
    }
printf("sum=%d",sum);
}
