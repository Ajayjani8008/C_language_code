
#define MAX_SIZE 100
void main()
{
	int arr[MAX_SIZE];
	int i,size,pos;
	clrscr();
	printf("enter  size of the arr:");
	scanf("%d",&size);
	printf("ente element of array:");
	for(i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("enter number position");
	scanf("%d",&pos);
	if(pos<0||pos>size)
	{
	printf("enter valid details");

	}
	else
	{
	for(i=pos-1;i<size-1;i++)
	{
	arr[i]=arr[i+1];
	}
	size--;
	printf("arry element after  insertion");
	for(i=0;i<size;i++)
	{
	printf("%d\t",arr[i]);
	}

	}
	getch();

}
