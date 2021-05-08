#include<stdio.h>
#include<string.h>
void main()
{
	int i,length,temp=0;
	char string1[25];
	printf("enter the string\n");
	scanf("%s",&string1);
	length=strlen(string1);
	for(i=0;i<length;i++)
	{
		if(string1[i]!=string1[length-i-1])
		{
			temp=1;
			break;
		}
	}
	if(temp)
	{
		printf("it is not a palindrome");
	}
	else
	{
		printf("it is a palindrome");
	}
	getch();
}