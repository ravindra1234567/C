#include<stdio.h>
struct employee
{

	long int mob;
	int salery;
};
void main()
{
	struct employee e[5];
	struct employee *p;
	int i;
	for(i=0;i<=4;i++)
	{
		p=&e[i];
		printf("\nenter your mobil number:");
		scanf("%d",&p->mob);
		printf("\nenter your salery:");
		scanf("%d",&p->salery);
		p++;
	}
	for(i=0;i<=4;i++)
	{
		printf("\nmobile number:%li",p->mob);
		printf("\nsalery:%d",p->salery);
	}
}



