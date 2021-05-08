#include<stdio.h>
void main()
{
	int i,j,a,b,n[10][10],m[10][10];
	printf("how many rows and columns do you want to enter\n");
	scanf("%d%d",&a,&b);
	printf("enter the matrix\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
			scanf("%d",&n[i][j]);
	}
	for(i=0;i<b;i++)
	{
		for(j=0;j<a;j++)
			m[i][j]=n[j][i];
	}
	printf("transpose of the matrix\n");
	for(i=0;i<b;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");

	}
	getch();
}
