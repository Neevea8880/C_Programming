#include<stdio.h>
#include<math.h>
void main()
{
int i,m,n,j,sumn=0,sumt=0,mt[10][10];
float normal;
printf("enter order of matrix m*n:");
scanf("%d%d",&m,&n);
printf("enter the elements row wise");
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
 scanf("%d",&mt[i][j]);
 }
}
 sumn=0;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
  sumn=sumn+mt[i][j]*mt[i][j];
  }
 }
 if(m==n)
 {
 sumt=0;
 for(i=0;i<n;i++)
 {
 sumt=sumt+mt[i][i];
 }
}
 printf("trace is %d/n",sumt);
 normal=sqrt(sumn);
 printf("normal is %f",normal);
}
