#include<stdio.h>
void main()
	{
		int salery,tax;
		printf("your welcome\nthis is a program for to calculate income tax \n");
		printf("enter your salery:");
		scanf("%d",&salery);
		if(salery<=2000)
			{
			  tax=(float)((salery*10)/100);
			  printf("\nyour tex is:%d",tax);
			}
		else if((salery>2000)&&(salery<=5000))
			{
				tax=(float)((salery*20)/100);
				printf("your tax is:%d",tax);
			}
		else if((salery>5000)&&(salery<=20000))
			{
				tax=(float)((salery*30)/100);
				printf("your tax is:%d",tax);
			}
		else if(salery>20000)
			{
				tax=(float)((salery*40)/100);
				printf("your tax is:%d",tax);
			}
		printf("\nthank you and by ");
	}
