void main()
{
	int n,a,i,rev=0;
	clrscr();
	printf("enter number which you need rev.:");
	scanf("%d",&n);
	i=n;
	while(i>0)
	{
	a=i%10;
	rev=(rev*10)+a;
	i=i/10;
	}

	if(rev==n)
	{
	printf("your number is pelindrown!");

	}
	else
	{
	printf("your number is not pelindrown!");


	}




getch();
}


