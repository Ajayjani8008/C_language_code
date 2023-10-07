#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp1, *fp2;
    char path1[100];
    char path2[100];
    char ch;
    printf("enter  sourse file path:::");
    fflush(stdin);

    gets(path1);
    fp1 = fopen(path1, "r");
    printf("enter destination path:::");
    fflush(stdin);

    gets(path2);

    fp2 = fopen(path2, "w");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error!!! please retry and check path which you enter::");
    }
    else
    {
        ch = fgetc(fp1);
        while (ch != EOF)
        {
            fputc(ch, fp2);
            ch = fgetc(fp1);
        }
        printf("congrats... File is copied succesfully!!!");
        fclose(fp1);
        fclose(fp2);
    }

    return 0;
}