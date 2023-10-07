#include<math.h>
void main()
{
	double principle,rate,time,ci=0;
	clrscr();
	printf("enter your princile:");
	scanf("%lf",&principle);
	printf("enter your rate:");
	scanf("%lf",&rate);
	printf("enter your time:");
	scanf("%lf",&time);
	ci=principle*pow(((1+rate)/100),time);
	printf("compound intrest is:%lf",ci);
	getch();



}