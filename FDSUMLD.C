void main()
{
	int n,sum;
	int ld,fd;
	clrscr();
	printf("Enter the number");
	scanf("%d",&n);
	ld=n%10;
	while(n>=10)
	{
	n=n/10;
	fd=n;

	}

	 printf("\\nfirst digit is %d",fd);
	 printf("\nlast digit is %d",ld);
	 sum=ld+fd;
	 printf("\nsum of ld and fd is %d",sum);

	  getch();
}


