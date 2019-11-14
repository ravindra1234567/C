#include<stdio.h>
float circle();
void main()
{
	float area;
	area=circle();
	printf("%f",area);
}
float circle()
{
	float r,area;
	printf("                :this is a program of area of circle:\n");
	printf("enter your radius");
	scanf("%f",&r);
	area=3.14*r*r;
	return area;
}