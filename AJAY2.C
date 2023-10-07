void main()
{	double I,P,R,N;
	clrscr();
	printf("enter amount:");
	scanf("%lf",&P);
	printf("\nenter rate:");
	scanf("%lf",&R);
	printf("\nenter the year:");
	scanf("%lf",&N);
	I=(P*R*N)/100;
	printf("your ans is:%lf",I);
	getch();
}