void main()
{
	int age,per,sub1,sub2;
	char address[30],name[20];
	clrscr();
	printf("enter your name:");
	scanf("%s",&name);
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your address:");
	scanf("%s",&address);
	printf("enter your scinece marks:",sub1);
	scanf("%d",&sub1);
	printf("enter your maths marks:",sub2);
	scanf("%d",&sub2);
	per=(sub1+sub2)/2;


	printf("\n student details.: ");
	printf("\nstudent name is:%s",name);
	printf("\nstudent age is:%d",age);
	printf("\nstudent address is:%s",address);
	printf("\nstudent percentage marks  is:%d",per);
	getch();



}