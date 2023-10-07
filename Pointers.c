#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 98;
    int *ptr;
    ptr = &a;
    *ptr = 9000;
    printf("%d \n", a);
    int* pttr=NULL;
    if(!pttr){
        printf("The pointer is not null ");

    }

    return 0;
}