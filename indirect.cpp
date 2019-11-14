#include<stdio.h>
void count1(int n);
void count2(int m);
void main()
	{
		int n;
		printf("enter your number");
		scanf("%d",&n);
		count1(n);

	}
void count1(int n)
	{
		printf("\n%d",n);
		if(n>=0)
		{
			count2(n-1);

		}
	}
void count2(int m)
	{
		printf("\n%d",m);
		if(m>=0)
		{
			count1(m-1);


		}
	}

