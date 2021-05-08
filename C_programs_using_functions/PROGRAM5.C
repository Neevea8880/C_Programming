#include<stdio.h>
void main()
{
	int n1,r1,n,r,a,res;
	printf("enter the value for n");
	scanf("%d",&n1);
	printf("enter the value for r");
	scanf("%d",&r1);
	n=fact(n1);
	r=fact(r1);
	a=fact(n1-r1);
	res=n/(r*a);
	printf("%dC%d=%d\n",n1,r1,res);
}
int fact(int x)
{
	int i,f=1;
	for(i=1;i<=x;i++)
		f=f*i;
	return(f);
}