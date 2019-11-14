#include<stdio.h>
int ract ();
void main()
{
	int area;
	area=ract();
	printf("%d",area);
}
int ract()
{
	int l,b,area;
	printf("enter your length");
	scanf("%d",&l);
	printf("\nenter your bradth");
	scanf("%d",&b);
	area=l*b;
   return area;
}
