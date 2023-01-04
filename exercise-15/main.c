#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//STRUCTURE KULLANARAK PERSONAL BÝLGÝLERÝNÝ ALFABETÝK LÝSTELEME
typedef struct personals//personel bilgileri baþlýklarý
{
    int pasword;
    char name[10];
    char surname[10];
    int age;
    float salary;
    char gender[10];
}person;
void sort(person x[],int m)//alfabetik sýralama fonksiyonu
{
    int i,j;
    person t;

    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(strcmp(x[i].name,x[j].name)>0)
            {
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }

}


void list(person x[],int m)//alýnan bilgileri bastýrma fonksiyonu
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("%d %s %s %d %f %s\n",x[i].pasword,x[i].name,x[i].surname,x[i].age,x[i].salary,x[i].gender);
    }
}
int main()
{
    int n;
    int i;
    char satir;
    printf("how many person saved\n");
    scanf("%d",&n);
    person p[n];

    printf("personal informations\n");
    printf("------------------------\n");
    for(i=0;i<n;i++)
    {
        scanf("%c",&satir);
        printf("password:\n");
        scanf("%d",&p[i].pasword);
        scanf("%c",&satir);
        printf("name:\n");
        scanf("%s",&p[i].name[10]);
        scanf("%c",&satir);
        printf("surname:\n");
        scanf("%s",&p[i].surname[10]);
        printf("age:\n");
        scanf("%d",&p[i].age);
        printf("salary:\n");
        scanf("%f",&p[i].salary);
        printf("gender:\n");
        scanf("%s",&p[i].gender[10]);

    }

     sort(p,n);
    list(p,n);
    return 0;
}
