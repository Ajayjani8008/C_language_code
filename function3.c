#include<stdio.h>
void sum(int,int);
void main()
{
    int a,b,result;
    printf("\n going to calculate the sum of  two numbers:");
    printf("\n enter two numbers:");
    scanf("%d %d",&a,&b);
    sum(a,b);

}
void sum(int a,int b)
{
    printf("\n the sum is %d",a+b);
}