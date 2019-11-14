#include<string.h>
#include<stdio.h>
void main()
	{
		char state1[20];
		char state2[20];
		printf("entewr your state1:S name:");
		gets(state1);
		printf("\nenter your state2:name:");
		gets(state2);
		strcat(state1,state2);
		puts(state1);
		puts(state2);


	}