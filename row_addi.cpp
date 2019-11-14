#include<stdio.h>
void main()
	{
		int arr[3][4];
		int r,c,sum;
		for(r=0;r<=2;r++)
			{
				for(c=0;c<=3;c++)
					{
						printf("\nenter your integer nmber");
						scanf("%d",&arr[r][c]);

					}
			}
		for(r=0;r<=2;r++)
		{
		  sum=0;
		  for(c=0;c<=3;c++)
		  {
			 sum=sum+arr[r][c];
		  }
		 printf("\nrow addition:%d",sum);
		 printf("\n");
		 printf("average:%d",sum/3);
		}
	}
