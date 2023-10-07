#include <stdio.h>
#include <string.h>
int main()
{
    float a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    printf("the a is %f \n", *(float*)ptr);
    return 0;
}