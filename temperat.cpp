#include<stdio.h>
void main()
	{
		int temperature;
		printf("welcome\nprogram of temperature");
		printf("\nenter temperature:");
		scanf("%d",&temperature);
		if(temperature>=35)
			{
				printf("warm");
			}
		else if((temperature<=35)&&(temperature>=25))
				{
					printf("medium");
				}
		else if(temperature<25)
				{
				  printf("cold");
				}
	 }
