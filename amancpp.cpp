#include<stdio.h>
void mmain()
	{
		int arr[3][4];
		int r,c,sum;
		for(r=0;r<=2;r++)
			{
				for(c=0;c<=3;c++)
					{
						printf("\nenter your number:");
						scanf("%d",&arr[r][c]);
					}

			}
		for(c=0;c<=3;c++)
			{
				sum=0;
				for(r=0;r<=2;r++)
					{
						sum=sum+arr[c][r];

					}
				printf("\ncoloum addition:%d",sum);
				printf("\naverage:%d",sum/4);
			}
	}