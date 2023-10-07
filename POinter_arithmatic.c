#include <stdio.h>
int main()
{
    // this is pointer arithmatic
    int age = 10;
    int *number;
    int *ageptr = &age;
    int _age = 22;
    int *_ageptr = &_age;
    // now  we print arithmatic result for pointer arithmatic
    printf("%u\n", ageptr);
    number = ageptr++;
    printf("%u\n", number);
    number = ageptr--;
    printf("%u\n", number);
    number = --ageptr;
    printf("%u\n", number);
    number = ++ageptr;
    printf("%u\n", number);

    // printf("%u\n", ageptr);


    //let's we learn about arithmatic process on pointer to pointer
    //and play  with address

    ageptr=ageptr-_ageptr;
    printf("%u",ageptr);



    ageptr=&_age;
    printf("this is %d",ageptr==_ageptr);
    return 0;
}