#include<stdio.h>
#include<string.h>

struct student
{
    char name [100];
    int roll ;
    float cgpa;
};

typedef struct cmputerenginearingstudent{
    int roll;
    float cgpa;
    char name[100];

}coe;
void printinfo(struct student s1);
int main(){
    struct student s1;
    // s1.name="ajay" is not a modifier value
    strcpy(s1.name,"ajay");
    s1.roll=64;
    s1.cgpa=9.2;

    printf("student info : \n");
    printf("name =%s \n" , s1.name);
    printf("roll no. =%d\n",s1.roll);
    printf("cgpa =%f\n",s1.cgpa);




// Array of a structure
struct student IT[60];
struct student COE[60];
struct student ECE[60];

// Decleration

struct student s2={"ajay jani",1223,5.7};
//struct student //deta type

//struct student s1//oject datatype withn name

struct student s3={0};

printf(" roll no : of s2:%d\n ",s2.roll);
printf("roll no of s3 %d \n",s3.roll);


//pointer to structure

struct student *ptr = &s1;
printf("student.name=%s\n",(*ptr).name);
printf("student.roll%d\n",(*ptr).roll);
printf("student.cgpa%f\n",(*ptr).cgpa);


// arrow oprator
printf("student-> name=%s\n",ptr->name);
printf("student-> roll=%d\n",ptr->roll);
printf("student-> cgpa=%f\n",ptr->cgpa);

printinfo(s1);

//typedef keyword

coe student1;

student1.roll=1338;
student1.cgpa=6.7;

strcpy(student1.name,"jay swaminarayan");



return 0;


}


void printfInfo(struct student s1)
{
  printf("student info :\n");
  printf("name=")   
};




