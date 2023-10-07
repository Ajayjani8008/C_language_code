void main()
{
	int i,j,arry[4][3];
	clrscr();
	printf("enter value:");
	for(i=0;i<4;i++)
	{
	for(j=0;j<3;j++)
	{
	scanf("%d",&arry[i][j]);
	}
	}
	for(i=0;i<4;i++)
	{
	printf("\n");
	for(j=0;j<3;j++)

	printf("\t%d",arry[i][j]);
	}
	getch();



}