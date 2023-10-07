void main()
{
	int i,sum=0,num[5];
	clrscr();
	printf("enter your number....");
	for(i=0;i<5;i++)
	{
	scanf("%d",&num[i]);
	}
	printf("your sum of all number is...");
	for(i=0;i<5;i++)
	{
	sum=sum+num[i];
	}
	printf("\n%d",sum);
	getch();
}