#include <stdio.h>
#include <conio.h>
int main()
{
    // int n, i, j, k;
    // printf("Enter the number of rows :");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)

    // {
    
    //     for (int j = 1; j <= 2*n-1; j++)
    //     {
    //         if (j>=i&&j<=2*n-i)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }  this  for row
    int n, i, j, k;
    printf("Enter the number of coluums  :");
    scanf("%d", &n);
    for (int i = 1; i <= ((n+1)/2); i++)

    {
    
        for (int j = 1; j <= n; j++)
        {
            if (j>=i&&j<=(n+1)-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}