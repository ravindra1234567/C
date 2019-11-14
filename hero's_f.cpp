#include<stdio.h>
#include<math.h>
void main()
{
	double a,s;
	int p,q,r,t;
	printf("enter a numbe3r:");
	scanf("%d",&p);
	printf("\nenter a number:");
	scanf("%d",&q);
	printf("\nenter a number:");
	scanf("%d",&r);
	t=(p+q+r)/2;
	printf("\n%d",t);
	s=t*(t-p)*(t-q)*(t-r);
   printf("\n%lf",s);
	a=sqrt(s);
   printf("\n%lf",a);
}
