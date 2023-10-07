#include <stdio.h>
#include <conio.h>
#define BUFFER_SIZE 1000
void readfile(FILE *fptr);
int main()
{

    FILE *fptr;
    char filepath[100];
    char datatoapppend[BUFFER_SIZE];
    printf("Enter file path");
    scanf("%s", filepath);
    fptr = fopen(filepath, "a");
    if (fptr == NULL)
    {
        printf(" unable to file open %s\n", filepath);
        printf("\nplrase check whater  file is exsist!!! ");
    }
    printf(" \nenter data to apppend:");
    fflush(stdin);
    fgets(datatoapppend, BUFFER_SIZE, stdin);
    fputs(datatoapppend, fptr);
    fptr = freopen(filepath, "r", fptr);
    printf(" \nsuccesfully data append...");
    fclose(fptr);

    return 0;
}
void readfile(FILE *fptr)
{
    char ch;
    do
    {
        ch = fgetc(fptr);
        putchar(ch);
    } while (ch != EOF);
}