#include<stdio.h>
void main ()
{
l0:
int a,b,c;
printf("Enter the any two  number\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d  \n",c);
goto l4;
l1:
int g,h,j;
printf("Enter number \n");
scanf("%d%d",&g,&h);
j=g*h;
printf("%d  \n",j);
goto l4;
l2:
printf("Ravindra\n");
goto l0;
l3:
printf("Kumar\n");
goto l1;
l4:
printf("kaithiker\n");
}
