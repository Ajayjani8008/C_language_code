#include<stdio.h>
void main()
{	char ch;
	clrscr();
	printf("enter the character:");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
	printf("%c is in lowercase",ch);

	}
	else if(ch>='A'&&ch<='Z')
	{
	printf("%c is in upercase",ch);
	}
	else
	{
	printf("plese enter an alphabet!!!!!!!!!!!!!!!");
	}

	getch();



}