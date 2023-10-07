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
	  printf("rev no is %d",rev);




getch();
}