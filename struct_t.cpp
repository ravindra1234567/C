#include<stdio.h>
#include<alloc.h>
struct ppt
{
	int *i;
};
void main()
{
	struct ppt s;
	s.i=(int *)malloc(20*sizeof(int));
	printf("adress:%u",s.i);
	int j;
	for(j=0;j<=19;j++)
	{
		printf("\nenter your marks:");
		scanf("%d",&s.i);
		s.i++;
	}

}
