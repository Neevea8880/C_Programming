#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
	return(a);
	else
	return(b);
}
int main()
{
	int a,b,maxm;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	maxm=max(a,b);
	printf("maximum of the two numbers=%d",maxm);
	return 0;
}