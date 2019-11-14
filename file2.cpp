#include<stdio.h>
#include<stdlib.h>
void main()
{
	char ch;
	FILE *p1,*p2;
	p1=fopen("file2.cpp","r");
	p2=fopen("e:\d.txt","w");
	while(1)
	{
		ch=fgetc(p1);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);
		fputc(ch,p2);
	}
	fclose(p1);
	fclose(p2);

}
