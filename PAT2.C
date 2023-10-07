void main()
{
	int n,i,j;
	clrscr();
	printf("enter your number   ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=n;j>=i;j--)
	{
	printf(" %d",j);


	}
	printf("\n");

	}
	getch();

}



