void main()
{	int n,count;
	clrscr();
	printf("enter your number:::");
	scanf("%d",&n);
	count=0;
	while(n!=0)
	{
	n/=10;
	count++;

	}
	printf("number of digit====== %d ",count);
	getch();




}



