#include<stdio.h>
// Call by value
/*int fun(int i,int j)
{
    i = 20;
    j = 10;
    return 0;

}
int main()
{
    int i = 10,j=20;
    fun(i,j);
    printf("%d%d",i,j);
    return 0;
}
*/
//  call by reference
/* int fun(int *i , int *j)
{
    *i = 20;
    *j = 10;
    return 0;
}
int main()
{
    int i = 10,j=20;
    fun(&i,&j);
    printf("%d%d",i,j);
    return 0;
}
*/
int fun1(int a ,int b)
{
    a = 20;
     b = 30;
    return 0;
}
int fun2(int *a , int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main()
{

    int a=1,b=5;
    fun1(a,b);
    fun2(&a,&b);
    printf("%d",a+b);
    return 0;

}
