
#include<stdio.h>
void main()
	{
		int pro_c[20];
		int count,total=0;
		for(count=0;count<=19;count++)
			{
				printf("\nenter your marks:");
				scanf("%d",&pro_c[count]);
				total=total+pro_c[count];
			}
		printf("\ntotal marks:%d",total);
		printf("\ntotal average:%d",total/20);

	}
