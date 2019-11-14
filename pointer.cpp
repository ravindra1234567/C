#include<stdio.h>
void main()
	{
		int i;
		int *x;
		int **p;
		printf("Enter your number");
		scanf("%d",&i);
		x=&i;
		printf("x:%d",x);
		x=x+2;
		printf("\nx:%d",x);
		p=&x;
		printf("\n%u",p);
		printf("\n%u",i);
		printf("\n%u",*x);
		printf("\n%u",**p);

	}



