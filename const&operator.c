#include <stdio.h>
int main()
{
    const int i = 9;
    int ajayjsni = 20;
    //--- type of operatore
    //--- arthimatic oprater +,-,*,/,%,++,--,......
    //--- reletional opreter
    //==,!=,<,>,>=,<=,....
    //--- logical operatore
    // && ,||,&....
    //--- bitwise operatore
    // 0101101010101101000100101
    // & | ^ ~ << >>
    // --- assingment opratore
    // =,+=,-=,*=,/=,....
    // --- misc operetore
    // - &,*, ?:
    int num1;
    int num2;
    int num3;
    printf("enter number1  anf number2  number3 one by one");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    printf("this division of the number with typecasting that:%f",(float)(num1 / num2));

    return 0;
}