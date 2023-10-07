#include <stdio.h>
#include <conio.h>

int main()
{
    // int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr[10];

    // printf("%d", arr[8]);
    int i;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of indx %d\n", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of indx %d is %d\n ", i, arr[i]);
        scanf("%d", &arr[i]);
    }

    char ARR[10];
    int j;
    for (int j = 0; j < 10; j++)
    {
        printf("the arry of the character is  %c \n", j, ARR[j]);
    }

    return 0;
}