#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
printf("\n going to calculate sum two number :");
sum();
return 0;

}
void sum()
{
    int a,b;
    printf("\n Enter the two number");
    scanf("%d %d",&a,&b);
    printf("the sum  is %d",a+b);

}