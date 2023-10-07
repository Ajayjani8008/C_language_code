#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp1, *fp2;
    int num[10];
    int i = 0;

    fp1 = fopen("D:\\AJAYJANI\\oddd.txt", "w");
    fp2 = fopen("D:\\AJAYJANI\\evenn.txt", "w");
    if (fp1 == NULL)

    {
        printf("file id not creat,.....");
    }
    if (fp2 == NULL)

    {
        printf("file id not creat,.....");
    }
    printf("enter number ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    while (num[i] != '\0')
    {
        if (num[i] % 2 != 0)
        {
            fputc(num[i], fp1);
        }
        else if (num[i] % 2 == 0)
        {
            fputc(num[i], fp2);
        }
        i++;
        fclose(fp1);
        fclose(fp2);
        fp1 = fopen("D:\\AJAYJANI\\oddd.txt", "r");
        fp2 = fopen("D:\\AJAYJANI\\evenn.txt", "r");
    }
    return 0;
}