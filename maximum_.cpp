#include<stdio.h>
void main()
{
	int i,n,max;
	int num[40];
	printf("\aebter your elements:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("\a\nenter your number:");
		scanf("%d",num[i]);

	}
	max=num[i];
	for(i=0;i<=n;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
   printf("\a\nlargest number is:%d",max);
}