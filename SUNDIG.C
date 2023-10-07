void main()
{
	int a,sum=0,n;
	clrscr();
	printf("enter the number=");
	scanf("%d",&n);
	while(n>0)
	{
	a=n%10;
	sum=sum+a;
	n=n/10;




	}
	printf("sum of all digit is %d",sum);
	getch();





}


