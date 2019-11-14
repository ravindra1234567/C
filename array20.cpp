#include<stdio.h>
void main()
	{
		int pro_c[20];
		int count;
		for(count=0;count<=19;count++)
			{
				printf("\nenter your marks:%d",count);
				scanf("%d",&pro_c[count]);
			}
		for(count=0;count<=19;count++)
			{
				printf("\ntotal marks:%d",pro_c[count]);
			}

	}