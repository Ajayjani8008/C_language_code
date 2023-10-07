#include <stdio.h>
#include <string.h>

int main()
{
    // fgets fputs

    char fullname[40];
    char firstname[40];
    char secondname[40];
    char lastname[40];

    printf("Enter your fullname:\n");
    fgets(fullname, 40, stdin);
    printf("Enter your firstname:\n");
    fgets(firstname, 40, stdin);
    printf("Enter your secondname:\n");
    fgets(secondname, 40, stdin);
    printf("Enter your lastname:\n");
    fgets(lastname, 40, stdin);

    printf("%s %s %s %s ", fullname, firstname, secondname, lastname);
}