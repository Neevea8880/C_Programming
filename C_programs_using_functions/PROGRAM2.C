#include<stdio.h>
void swap(int a,int b)
{
	int n;
	n=a;
	a=b;
	b=n;
	printf("result after swapping\n");
	printf("%d\n%d",a,b);
}
void main()
{
	int a,b;
	printf("enter the numbers\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
}