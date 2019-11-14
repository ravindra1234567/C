#include<stdio.h>
void main()
	{
		int obtainmarks,totelmarks,percent;
		printf("welcome\nprogram for to find a percentage");
		printf("\nenter your obtain marks:");
		scanf("%d",&obtainmarks);
		printf("\nenter your totel marks:");
		scanf("%d",&totelmarks);
		percent=(float)obtainmarks/totelmarks*100;
		if (percent>=60)
			{
				printf("first division");
			}
		else if((percent<=60)&&(percent>=45))
			{
				printf("second division");
			}
		else if((percent<=45)&&(percent>=33))
			{
				printf("third division");
			}
		else if(percent<33)
			{
			  printf("fail");
			}
	}
