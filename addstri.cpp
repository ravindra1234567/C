#include<string.h>
#include<stdio.h>
void main()
	{
		char str[30];
		char name[30];
		printf("enter your name:");
		gets(name);
		strcpy(str,name);
		puts(str);

	}