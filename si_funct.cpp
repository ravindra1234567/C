#include<stdio.h>
int s();
void main()
{
	int si;
	si=s();
	printf("%d",si);
}
int s()
{
	int principle,rate,time,si;
	printf("enter your principle:");
	scanf("%d",&principle);
	printf("enter your rate:");
	scanf("%d",&rate);
	printf("enter your time:");
	scanf("%d",&time);
	si=(principle*rate*time)/100;
	return si;

}