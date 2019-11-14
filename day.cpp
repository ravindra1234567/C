#include<stdio.h>
void main()
	{
		int day;
		printf("welcome\nenter a day");
		scanf("%d",&day);
			switch(day)
			{
				 case 1:
					printf("sunday");
					break;
				 case 2:
					printf("monday");
					break;
				 case 3:
					printf("tuesday");
					break;
				 case 4:
					printf("wednesday");
					break;
				 case 5:
					printf("thursday");
					break;
				 case 6:
					printf("friday");
					break;
				 case 7:
					printf("satarday");
					break;
					defolt:
					printf("invalid day");
					break;
				default:
					printf("invalid day");
					break;

				}

	}

