#include<stdio.h>
void main()
{
	int num[100],n,i,firstlg=0,secondlg=0;
	printf("how many numbers you want enter");
	scanf("%d",&n);
	printf("enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		if(firstlg<num[i])
			firstlg=num[i];
	}
	for(i=0;i<n;i++)
	{
		if(num[i]<firstlg&&secondlg<num[i])
			secondlg=num[i];
	}
	printf("the largest number=%d\n",firstlg);
	printf("the second largest number=%d",secondlg);
	getch();
}