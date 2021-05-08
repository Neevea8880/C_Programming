#include<stdio.h>
void main()
{
	int a[10][10],i,j,m,n,k,min;
	printf("how many rows and columns do you want to enter\n");
	scanf("%d%d",&m,&n);
	printf("enter the matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		min=a[i][0];
		for(j=0;j<n;j++)
		{
			if(min>a[i][j])
			{
				min=a[i][j];
			}
		}
		for(j=0;j<n;j++)
		{
			if(min==a[i][j])
				for(k=0;k<m;k++)
				{
					if(min<a[k][j])
					break;
				}
		}
		if(k==m)
			printf("the element is %d\n",min);
		else("no such element");
	}
}
