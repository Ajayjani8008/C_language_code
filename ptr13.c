#include <stdio.h>
const int max=3;
int main()
{
    int i,*ptr;
    int var[]={10,20,5000};
    ptr=&var[max-1];
    for(i=max;i>0;i--)
    {
        printf("adress of the varible is var[%d]=%x\n",i-1,ptr);
        printf("value of the varible is var[%d]=%d\n",i-1,*ptr);
        ptr--;
    }

 
   return 0;
}