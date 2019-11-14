#include<stdio.h>
void main()
{
	int x,sum,n;
	sum=1;
	n=0;
	printf("enter your number:");
	scanf("%d",&x);
	while(sum<=x)
	 {
		n=n+sum;
		sum++;
	 }
	printf("total:%d",n);
}