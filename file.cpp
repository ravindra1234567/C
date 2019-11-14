#include<stdio.h>
#include<stdlib.h>
void main()
{
	char ch;
	FILE *p1,*p2;
	p1=fopen("d:\a.txt","r");
	p2=fopen("d:\b.txt","w");
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

