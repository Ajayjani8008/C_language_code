#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{

    char name[3] = {'m', 'y', '\0'};
    char str1[60], str2[45], str3[56];
    strcpy(str1, name);
    printf("%s\n", name);
    printf("%s\n", str1);
    strcpy(str2, "ajay");
    
    printf("%s\n",strcat(str1,str2));


    
    

    return 0;
}