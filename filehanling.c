#include <stdio.h>
int main()
{
    FILE *fptr;
    // reading a file
    char ch;
    fptr = fopen("test.txt", "r");
    if (fptr == NULL)
    {
        printf("doesn't  exist!\n");
    }
    else
    {
        fscanf(fptr, "%c", &ch);
        printf("charactor in the file is : %c\n", ch);
        fscanf(fptr, "%c", &ch);
        printf("charactor in the file is : %c\n", ch);
        fclose(fptr);
    }

    // writing  in a file
    ch = 'M';
    fptr = fopen("newfile.txt", "w");
    fprintf(fptr, "%cango", ch);
    fclose(fptr);
    // fgets

    fptr = fopen("newfile.txt", "r");
    printf("charater in file is : %c\n", fgetc(fptr));
    printf("charater in file is : %c\n", fgetc(fptr));
    printf("charater in file is : %c\n", fgetc(fptr));
    printf("charater in file is : %c\n", fgetc(fptr));
    printf("charater in file is : %c\n", fgetc(fptr));

    // fputc
    fptr = fopen("newfile.txt", "w");
    fputc('A', fptr);
    fputc('p', fptr);
    fputc('p', fptr);
    fputc('l', fptr);
    fputc('e', fptr);
    fclose(fptr);

    // read full file (EOF)

    fptr = fopen("newfile.txt", "r");
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);

    return 0;
}