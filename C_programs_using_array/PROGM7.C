#include<stdio.h>
void main()
{
	int array[10][10],i,j,m,n,sum=0;
	printf("enter the order of the matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the coefficients of the matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&array[i][j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			sum=sum+array[i][j];
		printf("sum of the row=%d\n",sum);
		sum=0;
	}
	sum=0;
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
			sum=sum+array[i][j];
		printf("sum of the column=%d\n",sum);
		sum=0;
	}
	getch();
}

