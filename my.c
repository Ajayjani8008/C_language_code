#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp1,*fp2;
    int num[10];
    int i=0;
    fp1 = fopen("D:\\AJAYJANI\\odd.txt", "w");
    fp2 = fopen("D:\\AJAYJANI\\even.txt", "w");

    if(fp1==NULL)
    {
        printf("Error!Could not create file1");
    }

    if(fp2==NULL)
    {
        printf("Error!Could not create file2");
    }

    printf("\n Enter the number:");
    for(i=0;i<10;i++)
    {
    scanf("%d",num[i]);
    }

    while(num[i]!='/0')
    {
    if(num[i]%2!=0)
    {
        fputc(num[i],fp1);
    }
    else if(num[i]%2==0)
    {
        fputc(num[i],fp2);
    }
    i++;
    }
    return 0;






}