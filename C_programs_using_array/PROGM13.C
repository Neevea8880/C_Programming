#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	int i,len,vowel=0,word=0,sent=0;
	char s[100],s1[100];
	printf("enter the paragraph\n");
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		s1[i]=tolower(s[i]);
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
			vowel=vowel+1;
		if(isspace(s1[i])||s1[i]=='.')
			word=word+1;
		if(s1[i]=='.')
			sent=sent+1;
	}
	printf("no of vowels=%d\n",vowel);
	printf("no of words=%d\n",word);
	printf("no of sentences=%d",sent);
}
