#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//STRUCT YAPISINDA BÝR YAPIDAN DÝÐERÝNE DEÐER ATAMA
struct student_info
{
    int school_number;
    char name[20];
    char surname[20];
    int age;

};
int main()
{
    /*
    struct student_info student1={1,"name1","surname1",10};
    struct student_info student2;
    */
    //STUDENT IDENTITY
    struct student_info student1,student2;
    //STRUCT VALUE DEFINITION
    student1.school_number=1;
    strcpy(student1.name,"name1");
    strcpy(student1.surname,"surname1");
    student1.age=10;
    student2=student1;

    printf("number: %d, name: %s, surname: %s, age: %d\n",student1.school_number,student1.name,student1.surname,student1.age);
    printf("number: %d, name: %s, surname: %s, age: %d",student2.school_number,student2.name,student2.surname,student2.age);

    return 0;
}
