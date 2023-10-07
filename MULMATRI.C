void main()
{
    int i,j,k,arry1[2][2],arry2[2][2],arry3[2][2],sum;
    clrscr();
    printf("Enter your first arry:");
    for(i=0;i<2;i++)
    {

    for(j=0;j<2;j++)
    {
    scanf("%d",&arry1[i][j]);

    }
    }
    //first matrix____________
     for(i=0;i<2;i++)
    {

    for(j=0;j<2;j++)
    {
    scanf("%d",&arry2[i][j]);
    }
    }
  //second matrix____________
	for(i=0;i<2;i++)
	{

	for(j=0;j<2;j++)
	{
	sum=0;
	for(k=0;k<2;k++)

	{
	sum+=arry1[i][k]*arry2[k][j];

	}
	arry3[i][j]=sum;
	}
	}
	printf("arry3 is \n:");
	for(i=0;i<2;i++)
    {
	printf("\n");
    for(j=0;j<2;j++)
    {
    printf("%d\t",arry3[i][j]);

    }
    }





	getch();


}