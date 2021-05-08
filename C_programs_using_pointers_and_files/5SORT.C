#include <stdio.h>
#include <conio.h>
#include <alloc.h>
void main()
{
	int n,*p,i,j,temp;
	printf("\nhow many numbers do you want to enter");
	scanf("%d",&n);
	p=(int *) malloc(n*2);
	if(p==NULL)
	{
		printf("\nMEMORY ALLOCATION UNSUCCESSFUL");
		exit();
	}
	printf("\nenter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+i)<*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("\nthe sorted numbers are\n");
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
}
