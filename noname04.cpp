#include<stdio.h>
void main()
	{
		int salery,tex;
		printf("enter your salery");
		scanf("%d",&salery);
		if(salery<=2000)
			{
			  tex=((salery*10)/100);
			  printf("your tex is:%d",tex);
			}
		else if((salery>2000)&&(salery<=5000))
			{
				tex=((salery*10)/100);


