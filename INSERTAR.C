#define MAX_SIZE 100
void main()
{
	int arr[MAX_SIZE];
	int i,size,num,pos;
	clrscr();
	printf("enter  size of the arr:");
	scanf("%d",&size);
	printf("ente element of array:");
	for(i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("enter the new element");
	scanf("%d",&num);
	printf("enter it's position");
	scanf("%d",&pos);
	if(pos>size+1||pos<=0)
	{
	printf("enter valid details");

	}
	else
	{
	for(i=size;i>=pos;i--)
	{
	arr[i]=arr[i-1];
	}
	arr[pos-1]=num;
	size++;
	printf("arry element after  insertion");
	for(i=0;i<size;i++)
	{
	printf("%d\t",arr[i]);
	}

	}
	getch();

}