#include<stdio.h>
void main()
	{
		int i;
		for(i=16;i>=1;i--)
			{
				if((i>10)&&(i<=16))
					{
						continue;
					}
				printf("%d\n",i);
			}

	}




