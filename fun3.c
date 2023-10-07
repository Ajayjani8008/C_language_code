#include<stdio.h>
void praime()
{
    int num,i,count=0;
    printf("\n enter the number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
       {
         count++;
       }
    
    }
    if(count==2)
    {
        printf("\n %d number is prime",num);
    }
    else
    {
        printf("\n %d number is not prime",num);
    }
}
void perfact()
{
        int i,num,a,sum=0;
        printf("\n enter the number:");
        scanf("%d",&num);
        for(i=1;i<num;i++)
        {
            if(num%i==0)
            {
                sum=sum+i;
            }
            
        }
        if(sum==num)
        {
            printf("\n %d is perfact number",num);
        }
        else
        {
            printf("\n %d is not perfact number ",num);
        }
    

}
int arm()
{
    int i,num,sum=0,ld,c,NUM=0;
    printf("\n enter the number:");
    scanf("%d",&num);
    NUM=num;
    for(i=1;i<=5;i++)
    {
        ld=NUM%10;
        c=ld*ld*ld;
        sum=sum+c;
        NUM=NUM/10;
    }
    if(sum==num)
    {
        printf("\n %d is armstrong number:",num);
    }
    else
    {
        printf("\n %d is not armstrong number:",num);
    }
}
void main()
{
    praime();
    perfact();
    arm();
}
