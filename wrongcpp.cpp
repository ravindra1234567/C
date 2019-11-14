#include<stdio.h>
void main()
	{
		int age[5];
		int count,max;
		max=0;
		for(count=0;count<=9;count++)
			{
				if(max<age[count])
					{
						max=age[count];
					}
			}
		printf("maximum age:%d",max);
	}