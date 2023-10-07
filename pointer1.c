#include <stdio.h>
int main()
{
    printf("jay swaminarayan\n");
    printf("POinter  to pointer\n");
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("the age is %d \n",_age);
    //i need address then i do following STePS
    printf("the address of age veriable is %d\n",ptr);
    printf("the address of age veriable is %d\n",&age);
    printf("the address of age pointer is %d\n",&ptr);
    
    // i need value
    printf("the value of the pointer is%d\n",age);    
    printf("the value of the pointer is%d\n",*ptr);
    printf("the value of the pointer is%d\n",_age);
    printf("the value of the pointer is%d\n",*(&age));



    return 0;
}
