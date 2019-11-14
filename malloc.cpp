#include<stdio.h>
#include<alloc.h>
void main()
	{
		int *p;
		p=(int *)malloc(20*sizeof(int));
		printf("%u",p);
		int *p2;
		p2=p;
		printf("\n%u",p2);
		int i;
		i=0;
		while(i<=19)
		{
			printf("\nenter a number:");
			scanf("%d",*p2);
			p2=p2+1;
         printf("%u",p2);
			i++;
		}

	}