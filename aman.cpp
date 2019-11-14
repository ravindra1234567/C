#include<stdio.h>
void main()
	{
		FILE *f1;
		char ch;
		int c=0,count=0;
		f1=fopen("d:\aman.txt","r");
		while(1)
		{
			ch=fgetc(f1);
			if(ch==EOF)
			{
				break;
			}

			if(ch=='a')
			{
				c++;
			}
			if(ch=='o')
			{
			  count++;
			}
		}
		printf("number of a:%d",c);
		printf("\nnumber of o:%d",count);
	}