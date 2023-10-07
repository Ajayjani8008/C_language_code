void main()
{
	int i,num[5],min=0;
	clrscr();
	printf("enter your numbers...");
	for(i=0;i<5;i++)
	{
	scanf("%d",&num[i]);
	}
	min=num[0];
	printf("minimum no is...");
	for(i=0;i<5;i++)
	{
	if(min>num[i])
	{
	min=num[i];
	}
	}
	printf("%d",min);



       getch();
}