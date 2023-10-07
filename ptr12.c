#include<stdio.h>
const int max=3;
int main()
{
    int i,*ptr,n;
    int var[]={10,20,300};
    ptr=var;
    for(i=0;i<max;i++)
    {
    printf("adress of variable var[%d]=%x\n",i,ptr);
    printf("value of th evariable is var[%d]=%d\n",i,*ptr);
    ptr++;
    }
    

    return 0;


}