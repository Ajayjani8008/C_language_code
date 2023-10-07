void main()
{
	int i,num[7];
	clrscr();
	printf("enter integer rendom no.::");
	for(i=0;i<7;i++)
	{
	scanf("%d",&num[i]);
	}
	printf("your nregative number is....");
	for(i=0;i<7;i++)
	{
	if(num[i]<0)
	 {
	 printf("\t%d",num[i]);
	 }

	}
  getch();
}