#include<stdio.h>
#include<conio.h>
void main()
{
	int number1=0,number2;
	char ad[10],name[10],id[10];
	int bdyear,bd,bdmonth;
	clrscr();
	printf("enter your details::");
	printf("\nmy name = ");
	scanf("%s",&name);
	printf("\nmy ad = ");
	scanf("%s",&ad);
	printf("\nmy number = ");
	scanf("%d",&number1);
	scanf("%d",&number2);

	printf("\nmy db =  ");
	scanf("%d",&bd);
	printf("\nmy dbmonth = ");
	scanf("%d",&bdmonth);
	printf("\nmy dbyear = ");
	scanf("%d",&bdyear);
	printf("my details...");
	printf("\nmy name =  %s",name);
	printf("\nmy address is = %s",ad);
	printf("\nmy number is = %d",number1);
	printf("%d",number2);
	printf("\nmy birthdate is %d",bd);
	printf("-%d",bdmonth);
	printf("-%d",bdyear);

	getch();








}