#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1
#define M 2
//STRUCT YAPISI VE FONKSIYON ILE BIR MAGAZANIN, 2 URUNUN, 3 CALISANIN BILGISINI ALAN VE BASTIRAN PROGRAM
struct product
{
    char ref_code[10];
    int price;
};
struct employee
{
    char name[10];
    char surname[10];
    int age;
};

struct store_list
{
    char store_name[10];
    char street_name[10];
    char neighbourhood[10];
    int phone;
    float sales;
    struct employee e1;
    struct employee e2;
    struct employee e3;
    struct product p[M];


};

void create_product(struct product *p)
{
    printf("enter reference code: \n");
    scanf("%s",p->ref_code);
    printf("enter product price: \n");
    scanf("%d",&p->price);
}

void employee_create(struct employee *e)
{
    printf("enter employee name:\n");
    scanf("%s",e->name);
    printf("enter employee surname:\n");
    scanf("%s",e->surname);
    printf("enter employee age:\n");
    scanf("%d",&e->age);//yas girerken adres göstergesi & kullanýlýr.
}

void store_create(struct store_list *s)
{
    int i;
    printf("enter the store name: \n");
    scanf("%s",s->store_name);
    printf("enter the store street name: \n");
    scanf("%s",s->street_name);
    printf("enter the store neighbour name: \n");
    scanf("%s",s->neighbourhood);
    printf("enter the store phone number: \n");
    scanf("%d",&s->phone);
    printf("enter the store sales number: \n");
    scanf("%f",&s->sales);
    //isci olusturma
    printf("employee 1:\n");
    employee_create(&s->e1);
    printf("employee 2:\n");
    employee_create(&s->e2);
    printf("employee 3:\n");
    employee_create(&s->e3);
    //urunleri olusturma
    for(i=0;i<M;i++)
    {
       printf("enter the product: %d\n",i);
       create_product(&s->p[i]);//store adresindeki struct içinde bulunan struct dizisini temsil eder
    }

}
void product_print(struct product p)
{
    printf("ref_code: %s\n",p.ref_code);
    printf("product price: %d\n",p.price);
}

void employee_print(struct employee e)
{
    printf("employee name: %s\n",e.name);
    printf("employee surname: %s\n",e.surname);
    printf("employee age: %d\n",e.age);
}

void store_info(struct store_list s)
{
    int i;
    printf("store name: %s \n",s.store_name);
    printf("store street name: %s \n",s.street_name);
    printf("store neighbourhood name: %s \n",s.neighbourhood);
    printf("store phone number: %d \n",s.phone);
    printf("store sales amount: %f \n",s.sales);
    printf("employee 1: \n");
    employee_print(s.e1);
    printf("employee 2: \n");
    employee_print(s.e2);
    printf("employee 3: \n");
    employee_print(s.e3);
    for(i=0;i<M;i++)
    {
        printf("product: %d",i);
        product_print(s.p[i]);
    }

}

int main()
{
    int i;
    struct store_list s[N];

    for(i=0;i<N;i++)
    {
        printf("store %d: \n",i);
        store_create(&s[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("store %d",i);
        store_info(s[i]);
    }

    return 0;
}
