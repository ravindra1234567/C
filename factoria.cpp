#include<stdio.h>
int main()
{
	int x,sum,n;
	sum=1;
	n=2;
	printf("enter your factrial:");
	scanf("%d",&x);
	while(n<=x)
	{
		sum=sum*n;
		n=n+1;

	}
   printf("%d",sum);
	return 0;

}
