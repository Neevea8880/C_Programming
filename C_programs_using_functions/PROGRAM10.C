#include<stdio.h>
void main()
{
	int n,res;
	printf("enter the number");
	scanf("%d",&n);
	res=fact(n);
	printf("factorial=%d",res);
}
int fact(int n)
{
	int res;
	if(n>=1)
	{
		res=n*fact(n-1);
		return (res);
	}
	else
		return (1);
}