#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,n,num,count;
    printf("\nenter number:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("\nenter the element of the arry:");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("\nenter the which you are serch:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==*ptr+i);
        {
            count++;
        }
    }
    if(count>0)
    {
         printf("\n ha %d  hajar se:",num);
    }
    else
    {
        printf("\n ha %d  hajar nathi:",num);
    }
    return 0;
}