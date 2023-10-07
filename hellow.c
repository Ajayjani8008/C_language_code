#include <stdio.h>
int main()
{
    printf("hello world\n");
    printf("the world  are most beautifully\n");
    int a = 7; // 2-4bytes
    unsigned short intiger = 8;
    long q = 345834534; // inters type
    short integer = 1;

    float b = 34.459;              // float type
                                   //  4 bytes-6 decimal precision
    double mydouble = 232934.8235; // 15 decimal precision
    long double typeofloat = 429384.2039784;

    char web = 'a'; // 1 bytes
    printf("hello %d", a);
    printf("%f", b);
    printf("%c", web);

    printf("the size taken  by int is %d\n", sizeof(int));
    printf("the size taken  by int is %d\n", sizeof(float));
    printf("the size taken  by int is %d\n", sizeof(double));
    printf("the size taken  by int is %d\n", sizeof(long));
    printf("the size taken  by int is %d\n", sizeof(char));

    return 0;
}