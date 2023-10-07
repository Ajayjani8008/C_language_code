#include <stdio.h>
void squnre(int n);
void _squnre(int *n);
int main()
{
    // pointer in fun cnll
    int n;
    printf("enter your number:\n");
    scanf("%d", &n);
    squnre(n);
    printf("the normal number is:%d\n", n);

    _squnre(&n);
    printf(" after call by refrace %d\n", n);
}
void squnre(int n)
{

    n = n * n;
    printf("the square of the  call by value is %d\n", n);
}
void _squnre(int *n)
{
    *n = (*n) * (*n);

    printf("the  value of call by refrace is %d\n", *n);
}