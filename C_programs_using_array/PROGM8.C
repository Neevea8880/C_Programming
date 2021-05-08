#include<stdio.h>
void main()
{
	int i,j,k,n[10][10],m[10][10],p[10][10],r1,r2,c1,c2,sum=0;
	printf("enter the no of rows and columns of first matrix");
	scanf("%d%d",&r1,&c1);
	printf("enter the first matrix");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			scanf("%d",&n[i][j]);
	}
	printf("enter the no of rows and columns of second matrix");
	scanf("%d%d",&r2,&c2);
	printf("enter the second matrix");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
			scanf("%d",&m[i][j]);
	}
	if(c1==r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<r2;k++)
					sum=sum+(n[i][k]*m[k][j]);
				p[i][j]=sum;
				sum=0;
			}
		}
		printf("multiplied matrix\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
				printf("%d ",p[i][j]);
			printf("\n");
		}
	}
	else
	printf("multiplication is not possible");
	getch();
}

