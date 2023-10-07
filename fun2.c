#include<stdio.h>
int abc(int a,int b)
{
    int max,min;
if (a>b)
{

    max=a;
    printf("maximum in to the two number is %d",a);

}
else if(a<b)
{
    max=b;
    printf(" maximum of two number id %d",b);

}
if (a<b)
{

    min=a;
    printf("minin to the two number is %d",a);

}
    else if(a>b)
    {
    min=b;
    printf(" min of two number id %d",b);

}
}
int main()
{
    int a,b;
    printf("enter the two number:");
    scanf("%d%d",&a,&b);
    abc(a,b);

    return 0;


}