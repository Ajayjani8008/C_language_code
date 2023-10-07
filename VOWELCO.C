void main()
{
	char ch;
	clrscr();
	printf("enter your charactor:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='o'||ch=='i'||ch=='e'||ch=='u'||ch=='A'||ch=='O'||ch=='I'||ch=='E'||ch=='U')
	{printf("%c is vowel",ch);

	}
	else
	{
	printf("%c is consonant!!!!!",ch);

	}
	getch();
	}