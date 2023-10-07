void main()
{
	int a,b,c;
	clrscr();
	printf("enter the all ages of triagle:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b==c)
	{
	printf("triangle is equviletral");
	}

	if((a==b||b==c||c==a)&&(a!=b||a!=c||b!=c))
	{
	printf("triagle is isosaclen");
	}
	else
	{
	printf("triangle is scalene");
	}



	getch();
}
