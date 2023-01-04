#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//STRUCTURE YAPISI DEGER ATAMA-1

struct student{
    char name[20];
    char surname[20];
    int age;
};

int main()
{
    /*
    struct student sinem;
    strcpy(sinem.name,"sinem");
    strcpy(sinem.surname,"alkan");
    sinem.age=24;
    */

    struct student sinem={"sinem","alkan",24};

    printf("name: %s \t surname: %s \t age: %d",sinem.name,sinem.surname,sinem.age);



    return 0;
}
