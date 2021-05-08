#include <stdio.h>
#include <stdlib.h>
int arraysum(int *ptr,int n)
{
 int sum=0,i;
for (i = 0; i < n; i++)
    {
        sum=sum+ *(ptr + i);
    }
 return sum;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int  sum;
    sum=arraysum(arr,6);
	printf("Array elements sum=%d\n",sum);
	return 0;
}