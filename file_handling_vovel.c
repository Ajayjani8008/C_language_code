#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    int i = 0;
    char str[10], ch;
    fp1 = fopen("D:\\AJAYJANI\\file1.txt", "w");
    fp2 = fopen("D:\\AJAYJANI\\file2.txt", "w");

    if (fp1 == NULL)
    {
        printf("\n could not create a file1");
    }

    if (fp2 == NULL)
    {
        printf("\n could not create a file2");
    }

    printf("\n Enter a string:");
    gets(str);

    while(str[i]!='\0')
    {
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
        {
            fputc(str[i], fp1);
        }
        else
        {
            fputc(str[i], fp2);
        }
        i++;
    }

return 0;
}