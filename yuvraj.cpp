#include<stdio.h>
union employee
{
	int id;
	float salary;
};
void main()
{
	union employee e;
	printf("enter your id");
	scanf("%d",&e.id);
	printf("enter your salary");
	scanf("%f",&e.salary);
	printf("\nsalary:%f",e.salary);

}