#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("entr yout age");
    scanf("%d", &a);
    if (a < 12)
    {
        printf("your are under 12");
    }
    else if (a < 20)
    {
        printf("you can not derive");
    }
    else if (a > 20)
    {
        printf("you can derive");
    }
    else{
        printf("mgj kha ma");
    }
    int i3=a>10?100:200;//this is  short hand of the if else  if a>10 then give value 100  otherwise give 200
    printf("%d",i3);


    return 0;
}