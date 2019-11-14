#include<stdio.h>
void main()
	{
		char toss1,toss2;
		printf("Welcome\n");
		printf("Enter toss1");
		scanf("%c",&toss1);
		printf("Enter toss2");
		scanf("%c",&toss2);
		if(toss1=='h')
			{
				if(toss2=='h')
					{
						printf("you have won 100 RS");

					}
				else
					{
						printf("you have won 10 RS");
					}


			}
	}
