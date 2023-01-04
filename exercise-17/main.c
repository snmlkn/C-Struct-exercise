#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//STRUCT YAPISI KULLANARAK OGRENCI NUMARASI 2019 OLAN OGRENCININ BILGILERINI EKRANA BASTIRMA
typedef struct student
{
char name[10];
char surname[10];
int no;
int std_class;

};
int main()
{
    struct student x;
    int std_number;
    printf("enter student number:\n");
    scanf("%d",&x.no);

    if(x.no ==2019)
    {
        strcpy(x.name,"sinem");
        printf("student name: %s\n",x.name);
        strcpy(x.surname,"alkan");
        printf("student surname: %s\n",x.surname);
        x.no=2019;
        printf("student no: %d\n",x.no);
        x.std_class=123;
        printf("student class: %d",x.std_class);
    }
    else
    {
        printf("student not found");
    }


    return 0;
}
