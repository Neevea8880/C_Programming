#include<stdio.h>
char dis(char chr)
{
	if(chr>='a'&&chr<='z')
		return(printf("%c ",chr),dis(chr+1));
	else
		return 0;
}
void main()
{
	int a='a';
	printf("alphabets\n");
	printf("%c ",dis(a));
}