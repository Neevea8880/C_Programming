#include<stdio.h>
void main()
{
	float avg;
	int num[100],i,n,sum=0;
	printf("how many numbers you want to enter");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the number");
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+num[i];
	}
	avg=sum/n;
	printf("average=%f",avg);
	getch();
}
