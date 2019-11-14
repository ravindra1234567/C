#include<stdio.h>
#include<string.h>
void main()
	{
		char name[40];
		int l;
		printf("enter your name");
		gets(name);
		l=strlen(name);
		printf("%d",l);
	}