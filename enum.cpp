#include<stdio.h>
enum day
{
	sun,
	mon,
	tue,
	wed,
	thu,
	fri,
	sat,
};
void main()
{
	enum day e;
	e=mon;
	printf("%d",e);
}