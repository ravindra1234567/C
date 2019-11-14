#include<stdio.h>
void main()
	{
		int arr[3][4];
		int r,c,sum;
		for(r=0;r<=2;r++)
			{
				for(c=0;c<=3;c++)
					{
						printf("\nenter a integer number:");
						scanf("%d",&c);
					}
			}
		for(r=0;r<=2;r++)
			{
				sum=0;
				for(c=0;c<=3;c++)
					{
						sum=sum+arr[r][c];

					}
				printf("\nsum of row:%d",sum);
				printf("\naverage of row:%d",sum/3);

			}
	 }