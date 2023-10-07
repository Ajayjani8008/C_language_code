
void main()
{
	int i,arry1[3][3],arry2[3][3],arry3[3][3],j;
	clrscr();
	printf("Enter the number:");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	scanf("%d",&arry1[i][j]);

	}
	}
	printf("enter arry 2:");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	scanf("%d",&arry2[i][j]);

	}
	}
	for(i=0;i<3;i++)
	{
	printf("\n");
	for(j=0;j<3;j++)
	{
	arry3[i][j]=arry1[i][j]+arry2[i][j];

	printf("%d\t",arry3[i][j]);
	}

	}




    getch();
}