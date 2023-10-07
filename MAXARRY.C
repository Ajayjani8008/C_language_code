void main()
{
	int i,num[5],max=0;
	clrscr();
	printf("enter your numbers...");
	for(i=0;i<5;i++)
	{
	scanf("%d",&num[i]);
	}
	printf("maximum no is...");
	for(i=0;i<5;i++)
	{
	if(max<num[i])
	{
	max=num[i];
	}
	}
	printf("%d",max);



       getch();
}