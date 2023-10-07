#include <stdio.h>
#include <conio.h>
#include <string.h>
struct Books
{
    char name[50];
    char auther[50];
    int price;
} book;
void PrintStrct(struct Books bk)
{
    printf("books name is %s\n", bk.name);
    printf("Auther name is %s\n", bk.auther);
    printf("books price is %d\n", bk.price);
}

int main()
{
    struct Books bk1, bk2;
    strcpy(bk1.name, "c.programing");
    strcpy(bk1.auther, "denish richi");
    bk1.price = 100;
    PrintStrct(bk1);

    strcpy(bk2.name,"python programming");
    strcpy(bk2.auther,"ajay");
    bk2.price=1000;
    PrintStrct(bk2);

    return 0;
}