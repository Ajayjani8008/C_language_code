#include <stdio.h>
const int max=3;
int main()
{
    int i,*ptr;
    int var[]={10,20,5000};
    ptr=var;
    for(i=0;ptr<=&var[max-1];i++)
    {
        printf("adress of the varible is var[%d]=%x\n",i,ptr);
        printf("value of the varible is var[%d]=%d\n",i,*ptr);
        ptr++;
    }

 
   return 0;
}