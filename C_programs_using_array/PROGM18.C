#include<stdio.h>
void main()
{
	int n,i,a,p=0,array[100];
	printf("how many integers do you want to enter");
	scanf("%d",&n);
	printf("enter the integers\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("enter the number to be searched");
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
		if(array[i]==a)
		{
			printf("number found\n");
			p=1;
			break;
		}
	}
	if(p==0)
	printf("number not found");
	getch();
}