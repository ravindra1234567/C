#include<stdio.h>
void main()
	{
		int n,result;
		printf("enter your number");
		scanf("%d",&n);
		result=n%2;
		if(result==0)
			{
				printf("\nthis is a even number");
			}
		else
		{
			printf("\nthis is a odd number");
		}
	}