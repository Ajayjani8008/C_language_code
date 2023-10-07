
void main()
	{
	int a,b,division,mod,multi,sum,sub;

	clrscr();

	printf("enter two number...");

	scanf("%d %d",&a,&b);

	division=a/b;
	mod=a%b;
	sub=a-b;
	sum=a+b;
	multi=a*b;

	printf(" division of two number %d ",division);
	printf("\n mod of two number is %d ",mod);
	printf("\n sum of two number %d ",sum);
	printf("\n multiplicatoin of two number is %d ",multi);
	printf("\n substaction of two number %d ",sub);


	getch();
	}
