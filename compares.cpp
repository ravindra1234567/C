#include<stdio.h>
#include<string.h>
void main()
	{
		char name1[30];
		char name2[30];
		int d;
		printf("enter vyour name:1:");
		gets(name1);
		printf("\nenter your name:2:");
		gets(name2);
		d=strcmp(name1,name2);
		printf("%d",d);

	}