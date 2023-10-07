#include<stdio.h>
void main()
{
	int a,b,c,sum;
	clrscr();
	printf("enter all angle of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	if((sum==180)&&((a>0&&a<180)&&(b>0&&b<180)&&(c>0&&c<180)))
	{
	printf("your triangle is valid....");
	}
	else
	{
	printf("please check your angle you are enter!!!!!!!");



	}
	getch();


}