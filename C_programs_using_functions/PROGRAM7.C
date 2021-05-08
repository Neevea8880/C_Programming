#include<stdio.h>
#include<math.h>
float var(float a,float b)
{
	float c;
	c=a-b;
	return(c*c);
}
void main()
{
	int i,n;
	float vr=0,sum=0,sd,varn,mean,num[100];
	printf("how many numbers do u want to enter");
	scanf("%d",&n);
	printf("enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&num[i]);
		sum=sum+num[i];
	}
	mean=sum/n;
	for(i=0;i<n;i++)
		vr=vr+var(num[i],mean);
	varn=vr/n;
	sd=sqrt(varn);
	printf("mean=%f\n",mean);
	printf("variance=%f\n",varn);
	printf("standard deviation=%f\n",sd);
}