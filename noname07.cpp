#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *f;
	f=fopen("c:\c.txt","r");
	char ch;
	while(1)
	{
		ch=fgetc(f);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);
	}
	fclose(f);
}