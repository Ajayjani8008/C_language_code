void main()
{
	int n,pro=1,a,sum=0;
	clrscr();
	printf("enter the number=");
	scanf("%d",&n);
	while(n>0)
	{
	a=n%10;
	sum=sum+a;
	pro=pro*a;
	n=n/10;




	}
	printf("product of all digit is %d",pro);
	printf("sum of all digit is %d",sum);
	getch();





}

