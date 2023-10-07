#include<math.h>
void main()
{
	int a,b,c;
	double x,D,root1,root2,root;
	char i;
	clrscr();
	printf("enter your coefficients:");
	scanf("%d%d%d",&a,&b,&c);
	D=(b*b)-(4*a*c);
	if (D==0)
	{
	root=(-b/(2*a));
	printf("\nequation have one real solution root=.2%lf",root);

	}
	else if (D>0)
	{
	root1=(-b+sqrt(D))/(2*a);
	root2=(-b-sqrt(D))/(2*a);
	printf("\nequation have two real solutoin are=.2%lf and %.2lf",root1,root2);
	}
	else if (D<0)
	{
	root1=root2=-b/(2*a);
	i=sqrt(-D)/(2*a);


	printf("\nequation have complex solution are=root1%lf+i%lf",root1,i);

	}

	getch();
 }