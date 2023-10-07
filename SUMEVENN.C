void main()
{
	int i,n,sum=0;
	clrscr();
	printf("enter the value:");
	scanf("%d",&n);

	i=2;
	while(i<=n)

	{
	 sum+=i;
	 i+=2;

	}

	 printf("  %d  ",sum);

	getch();

}