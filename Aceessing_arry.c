#include <stdio.h>
void printnumber(int arr[], int n);
void _printnumber(int *arr, int n);
int main()
{

    int arr[] = {1, 5, 6, 78, 36, 8, 678, 70, 94};
    printnumber(arr, 7);
    _printnumber(arr, 7);
    return 0;
}

void printnumber(int arr[], int n)
{
    for (int i = 0; n >= i; i++)
    {
        printf("%d:%d\n", i, arr[i]);
    }
}
void _printnumber(int *arr, int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("%d:%d\n", i, arr[i]);
    }
}