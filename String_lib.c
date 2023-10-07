#include <stdio.h>
#include <string.h>
int main()
{
    // string length
    char name[] = "ajay jani";
    int lenght = strlen(name);
    printf("the length of the  name string is : %d \n", lenght);
    // sting copy
    char oldVal[] = "olDval";
    char newValp[50] = "ajay jani";
    strcpy(newValp, oldVal);
    puts(newValp);
    char firststr[50] = "hellow";
    char secstr[] = " world";
    strcat(firststr, secstr);
    puts(firststr);
    // string copmarision
    char str1[] = "ajay";
    char str2[] = "jani";
    printf("%d\n", strcmp(str1, str2));

    //Enter string useing %c 
    printf("Enter a string :");
    char str[100];
    char ch;
    int i=0;
    while (ch != '\n')
    {
        scanf("%c",&ch);
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    puts(str[i]);
    puts(str);
    
    // some more Quations

    
    return 0;
}