#include<stdio.h>
void main()
{
	int n,p,res;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the power");
	scanf("%d",&p);
	res=power(n,p);
	printf("result=%d",res);
}
int power(int a,int b)
{
	int i,pr=1;
	for(i=1;i<=b;i++)
		pr=pr*a;
	return(pr);
}