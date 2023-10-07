#include<stdio.h>
#include<conio.h>
// data_type func_name(parameter_type){
//     return value_of_type_data_type
// }
int glo=3434;
void newPrint(char* char1){
    printf("the value  is %s\n",char1);

}
int sum(int a,int b){
    return a+b;
}
float avrage(float a ,float b){
    return (a+b)/2;
}
int main(){
    glo=3433434;
    newPrint("hellow world\n");
    printf("%d\n",sum(100,2000));
    printf("%f\n",avrage(100,2000));
    printf("glo is %d\n",glo);//local and globle varible prefarances

    return 0;
}