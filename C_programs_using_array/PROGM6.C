#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,n,m,mat[10][10],trace=0;
	float s=0.0,norm;
	printf("how many rows and columns do you want to enter\n");
	scanf("%d%d",&m,&n);
	printf("enter the matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
			s=s+mat[i][j]*mat[i][j];
		}
	}
	norm=sqrt(s);
	for(i=0;i<m;i++)
	{
		trace=trace+mat[i][i];
	}
	printf("norm of matrix=%f\n",norm);
	printf("trace of matrix=%d\n",trace);
	getch();
}
