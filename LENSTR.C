#include<stdio.h>
#include<string.h>
void main()
{
	char ch1[20]={'a','j','a','y','j','a','n','i','\0'};
	char ch2[20];
	clrscr();
	strcpy(ch2,ch1);
	printf("value of second string is:%s",ch2);
	getch();
 }