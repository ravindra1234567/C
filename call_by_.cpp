#include<stdio.h>
void str(int *l,int *w);
void main()
	{
		int l,w;
		printf("enter your number:");
		scanf("%d",&l);
		printf("enter your number:");
		scanf("%d",&w);
		str(&l,&w);
		printf("\n%d",l);
		printf("\n%d",w);
	}
void str(int *l,int *w)
	{
		int temp;
		temp=*l;
		*l=*w;
      *w=temp;
	}
