#include<stdio.h>
void main ()
{
l0:
int a,b,c;
printf("Enter the any two  number");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d  \n",c);
l1:
int g,h,j;
printf("Enter number \n");
scanf("%d%d",&g,&h);
j=g*h;
printf("%d  \n",j);
goto l0;
goto l1;
}
