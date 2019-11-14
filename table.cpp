#include<stdio.h>
void main()
	{
		int n,m;
      printf("welcome\n this is a program for \n");
		printf("enter your number");
		scanf("%d",&n);
		m=n;
		while(n<=m*10)
			{
				printf("%d\n",n);
				n=n+m;
			}
		printf("\nthank you");


	}