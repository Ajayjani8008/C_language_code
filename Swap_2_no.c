#include <stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main()
{
    printf("enter your  to number to swamp  in 1 to 9:");
    int a;
    int b;
    scanf("%d %d", &a, &b);
    swap(a, b);
    printf(" entered number is %d  %d\n", a, b);
    _swap(&a, &b);
    printf("number is%d %d \n", a, b);
}
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("after swaping number is %d  %d\n", x, y);
}
void _swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("after swaping number is%d %d \n", *x, *y);
}