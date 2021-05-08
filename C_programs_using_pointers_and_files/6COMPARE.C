#include<stdio.h>
#include<string.h>
int compare_strings(char *,char *);
void main()
{
char s1[50],s2[50],*p1,*p2;
int res;
printf("\n enter a string s1: ");
gets(s1);
printf("\n enter a string s2: ");
gets(s2);
res=compare_strings(s1,s2);
if(res==0)
 printf("\n both the strings are identical");
else
 printf("\n both the strings are not identical");
}
int compare_strings(char *p1,char *p2)
{
while(*p1==*p2)
{
if(*p1=='\0'|| *p2=='\0')
break;
p1++;
p2++;
}
if(*p1=='\0'|| *p2=='\0')
86
 return 0;
else
 return -1;
}
