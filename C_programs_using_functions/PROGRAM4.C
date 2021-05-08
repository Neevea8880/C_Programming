#include<stdio.h>
void casecon(char s1[])
{
	int i=0;
	while(s1[i]!='\0')
	{
		if(s1[i]>='a'&&s1[i]<='z')
			s1[i]=s1[i]-32;
		else
			s1[i]=s1[i]+32;
		i++;
	}
	printf("converted string\n");
	printf("%s",s1);
}
void main()
{
	char s[100];
	printf("enter the string\n");
	scanf("%s",s);
	casecon(s);
}
