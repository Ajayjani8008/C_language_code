void main()
{       int ch1;
	char ch;
	clrscr();
	printf("enter your charator:");
	scanf("%c%d",&ch);
	if(ch>='a'||ch<='z'||ch>='A'||ch<='Z')
	{
	printf("%c is alphabet",ch);
	}
	printf("enter your charactor again");
	scanf("%d",&ch1);
	if(ch>=0||ch<0)
	{
	printf("%d is digit",ch1);


	}
	    else
	    {
	    printf("charater is special num.",ch);

	    }

	getch();
	}