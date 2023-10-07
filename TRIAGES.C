#include<stdio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter all the ages of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	{
	printf("triangle is exist.....");

	}
	else
	{

	printf("triangle is not exist!!!!");
	}

	getch();

	}