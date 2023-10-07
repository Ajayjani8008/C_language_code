#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp1, *fp2;
    int i = 0;
    char ch1, ch2;
    char str1[10], str2[10];

    fp1 = fopen("D:\\AJAYJANI\\f1.txt", "w");
    fp2 = fopen("D:\\AJAYJANI\\f2.txt", "w");
    if (fp1 == NULL)

    {
        printf("file id not creat,.....");
    }
    if (fp2 == NULL)

    {
        printf("file id not creat,.....");
    }

    printf("enter string 1:: ");
    gets(str1);

    printf("enter string 2:: ");
    gets(str2);

    while (str1[i] != '\0')
    {
        fputc(str1[i], fp1);
        i++;
    }
    fclose(fp1);
    i = 0;
    while (str2[i] != '\0')
    {
        fputc(str2[i], fp2);
        i++;
    }
    fclose(fp2);

    fp1 = fopen("D:\\AJAYJANI\\f1.txt", "r");
    fp2 = fopen("D:\\AJAYJANI\\f2.txt", "r");
    while (1)
    {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);
        if (ch1 == EOF && ch2 == EOF)
            break;

        if (ch1 == ch2)

        {
            printf("both are same");
        }
        else
        {
            printf("both are not same");
        }
    }

    return 0;
}