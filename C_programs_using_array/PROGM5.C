#include<stdio.h>
void main()
{
	int num[100],i,j,n,temp,min;
	printf("how many numbers do you want to enter");
	scanf("%d",&n);
	printf("enter the numbers\n");
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(num[j]<num[min])
				min=j;
		}
		temp=num[i];
		num[i]=num[min];
		num[min]=temp;
	}
	printf("the sorted array is\n");
	for(i=0;i<n;i++)
		printf("%d\n",num[i]);
	getch();
}
