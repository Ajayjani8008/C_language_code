#include <stdio.h>
#include <string.h>
void print_string(char arr[]);
int countlenght(char arr[]);
void salting(char password[]);
void slice(char str[], int n, int m);
int countvovels(char str[], int n, int m);
void checkchar(char str[], char ch);
int main()
{
    char str[] = "Ajay jani ";
    char ch = 'x';
    checkchar(str, ch);
    return 0;
}
void checkchar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("charactor is present!");
            return;
        }
    }
    printf("character is present!");
}

int countvovel(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

void slice(char str[], int n, int m)
{
    // n and m are valid intergers
    char newstr[100];
    int j = 0;
    for (int i = n; i <= m; j++)
    {
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}
void salting(char password[])
{
    char salt[] = "123";
    char newPass[200];
    strcpy(newPass, password); // newPass = "test"
    strcat(newPass, salt);     // newPass = "test" + "123";
    puts(newPass);
}

int countLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}
void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
