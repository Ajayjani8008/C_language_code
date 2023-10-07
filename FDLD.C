#include<math.h>
void main()
{
	int fd,ld,n,count,num;
	clrscr();
	printf("enter your number");
	scanf("%d",&num);
	n=num;
	ld=n%10;
	count=0;
	while(n!=0)
	{
	n/=10;
	count++;
	 }

	 fd=n/(pow(10,(count-1)));
	 printf("\nfrist digit is=%d",fd);

	 printf("\nlast digit is=%d",ld);
	 getch();



}