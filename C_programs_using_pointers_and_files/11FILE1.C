#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp;
int ch;
fp=fopen("a.txt","w");
if(fp==NULL)
  {
  printf("Error opening file..");
  exit(1);
   }
do{
   ch=getchar();
   if (ch=='$') break;
   putc(ch,fp);
  }
while(1);
fclose(fp);
}
