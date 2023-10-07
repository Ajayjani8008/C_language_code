void main()
{
	int day,days,week,year;
	clrscr();
	printf("enter the days");
	scanf("%d",&days);
	year=days/365;
	week=(days-(year*365))/7;
	day=(days-((year*365)+(week*7)));
	printf("\nyear:%d",year);
	printf("\nyear:%d",week);
	printf("\nyear:%d",day);

	getch();





}


