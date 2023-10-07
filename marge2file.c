#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp1, *fp2, *marge;
    char path1[100];
    char path2[100];
    char path3[100];

   
    char str[1000];
    char ch;
   
    printf("enter 1st file path:::");
    fflush(stdin);
    gets(path1);
    printf("enter 2nd file path:::");
    fflush(stdin);
    gets(path2);
    printf("Enter file path which in marge content:");
    fflush(stdin);
    gets(path3);
    fp1 = fopen(path1, "r");
    fp2 = fopen(path2, "r");
    marge = fopen(path3, "w");

    if (fp1 == NULL || fp2 == NULL || marge == NULL)
    {
        printf("Error!!! please retry and check path which you enter::");
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, marge);
    }

    while ((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch, marge);
    }

    printf("task succsesfully destineted::");

    fclose(fp1);
    fclose(fp2);
    fclose(marge);
    return 0;
}