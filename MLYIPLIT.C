void main()
{
	int i,n,mn=0,m;
	clrscr();
	printf("enter maltipl:");
	scanf("%d",&n);
	printf("enter how mltiple you  need:");
	scanf("%d",&m);

	i=1;
	while(i<=m)

	{
	mn+=n;

	 printf(" \n %d*%d= %d  ",n,i,mn);
	 i++;

	}

	getch();

}