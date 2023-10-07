#include <stdio.h>
int main()
{
    // this is  arry defination
    float marks[3];
    printf("entr first sub matks");
    scanf("%f", &marks[0]);
    printf("enter the second subject marks");
    scanf("%f", &marks[1]);
    printf("enter third subject marks:");
    scanf("%f", &marks[2]);
    printf("enter  forth subjext mraks:");
    scanf("%f", &marks[3]);
    // now print all   subject marks
    printf("marks in maths%f\n", marks[0]);
    printf("marks in history%f\n", marks[1]);
    printf("marks in biology%f\n", marks[2]);
    printf("marks in phy%f\n", marks[3]);
    return 0;
}