#include<stdio.h>

void f(int *p,int *q)
{
    p=q;
    *p =2;
}
int i =0,j=1;
int main()
{
    f(&i,&j);
    printf("\n%d%d",i,j);
   return 0;
}
