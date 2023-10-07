#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n) 
{
    srand(time(NULL));
    return rand()%n;
}
int main()
{
    printf("the random number 0 to 5 id %d\n", generateRandomNumber(5));
    return 0;
}