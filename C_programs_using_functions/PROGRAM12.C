#include<stdio.h>
void main()
{
	int n,i;
	printf("enter the value for n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		printf("%d\n",fibn(i));
}
int fibn(int num)
{
	if(num==0||num==1)
		return num;
	else
		return(fibn(num-1)+fibn(num-2));
}