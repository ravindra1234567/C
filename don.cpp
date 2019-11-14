#include<stdio.h>
int f=200;
int aman(int l,int m);
void main()
	{
		int l,m,n;
		printf("entr your base:");
		scanf("%d",&l);
		printf("enter your height:");
		scanf("%d",&m);
		n=aman(l,m);
		printf("\n%d",f);

	}
int aman(int l,int m)
	{
		int area;
		area=(float)(l*m)/2;
		printf("\narea of triangle:%d",area);
		printf("\n%d",f);
		f=100;
	}


