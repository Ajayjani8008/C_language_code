#include <stdio.h>
#include <string.h>

struct vector{
    int x;
    int y;
    // int sum;
};
void calcSum(struct vector v1, struct vector v2, struct vector sum);

struct complex
{
    int real;
    int img;
};
typedef struct BankAccount
{
    int accountNo;
    char name[100];
} acc;
int main()
{
    acc acc1 = {123, "ajay"};
    acc acc2 = {124, "mena"};
    acc acc3 = {125, "ketan"};
    acc acc4 = {126, "amit"};
    printf("acc no = %d\n", acc1.accountNo);
    printf("name = %s\n", acc1.name);
    printf("acc no = %d\n", acc2.accountNo);
    printf("name = %s\n", acc2.name);
    printf("acc no = %d\n", acc3.accountNo);
    printf("name = %s\n", acc3.name);

    struct vector x ={10,20};


    calcSum(x);
    return 0;

    
}
void calcSum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x is : %d\n", sum.x);
    printf("sum of y is : %d\n", sum.y);
}