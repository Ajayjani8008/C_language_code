#include<stdio.h>
#include<string.h>
void main()
{
  char str1[20],str[20];printf("enter the 1st string");
gets(str1);
printf("enter 2nd string");
gets(str);
if(strcmp(str1,str)==0);
printf("string are equl:");
else
printf("string are not equal");
getch();
}