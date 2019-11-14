#include<stdio.h>
//#include<strig.h>
void main()
{
int a,b,c,choice;
printf("Enter the value");
scanf("%d%d",&a,&b);
printf("1.sum\n2.sub3\n.mul\n4.div\n");
printf("Enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
		 c=a+b;
		 break;
case 2:
		 c=a-b;
		 break;
case 3:
		 c=a*b;
		 break;
case 4:
		 c=a/b;
		 break;

default:
{
printf(" Invalid choice");
break;
}
}

printf("output is %d\n",c);
}