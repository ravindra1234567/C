#include<stdio.h>
struct student
{
	int roll;
	float hsp;
};
void main()
{
	struct student s[4];
	int i;
	for(i=0;i<=3;i++)
	{
		printf("\nenter your percentage:");
		scanf("%f",&s[i].hsp);
		printf("\nenter your roll number:");
		scanf("%d",&s[i].roll);
	}
	for(i=0;i<=3;i++)
	{
		printf("\nroll number:%d",s[i].roll);
		printf("\npercentage:");

	}
}
