#include<math.h>
#include<stdio.h>
void main()
{
	float math,che,phy,bio,comp,per;
	clrscr();
	printf("enter all subject marks:");
	scanf("%f%f%f%f%f",&math,&che,&bio,&phy,&comp);
	per=(math+che+phy+bio+comp)/5;
	if(per>=90)
	printf("gread  A with%f percentage",per);
	else if(per>=80)
	printf("gread  B with%f percentage",per);
	else if(per>=70)
	printf("gread  C with%f percentage",per);
	else if(per>=60)
	printf("gread  D with%f percentage",per);
	else if(per>=40)
	printf("pass with %fpercentage",per);
	else if(per<40)
	printf("sorry your failed !!!!!!!!!!!!!",per);
	else
	printf("please enter valied deatail");
	getch();

}


