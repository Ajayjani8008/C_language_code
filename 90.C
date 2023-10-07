void main()
{
	int num1, num2;
	int sum,sub,mult,mod;
	float div;
	clrscr();
	printf("enter any two numbers:");
	scanf("%d%d", &num1, &num2);
	sum = num1+num2;
	sub = num1-num2;
	mult= num1*num2;
	div =(float)num1/num2;
	mod =num1%num2;
	printf("sum = %d\n",sum);
	printf("difference = %d\n",sub);
	printf("product = %d\n",mult);
	printf("quotient = %f\n",div);
	printf("modulus = %d",mod);
	getch();

}