
void main()
{
	int n,a=0,b,m,sum=0;
	clrscr();
	printf("enter the number::");
	scanf("%d",&n);
	m=n;
	while(m>0)
	{
	a=m%10;
	b=a*a*a;
	sum=sum+b;
	m=m/10;

	}
	if(sum==n)
	{
	printf("\n %d is armstrong!!!",n);
	}
	else
	{
	printf("\n %d is not armstrong......",n);


	}


getch();
}