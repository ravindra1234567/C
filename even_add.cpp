#include<stdio.h>
void main()
{
	int x,sum,n;
	n=0;
	sum=0;
	printf("enter your number:");
	scanf("%d",&x);
	while(n<=x)
	{
	  sum=sum+n;
	  n=n+2;
	}
	printf("total:%d",sum);
}