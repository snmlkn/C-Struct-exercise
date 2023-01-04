#include <stdio.h>
#include <stdlib.h>
//OTEL MUSTERILERINE YAPILAN HARCAMA VE FATURA BULAN PROGRAM
struct participant
{
    char surname[10];
    char name[10];
    int breakfast;//0-kahvaltýsýz 1-kahvaltýlý
    int dinner; //0-yemeksiz 1-yemekli
    int hotel; // 1-ootel yok 2- 2 yýldýz 3-3 yýldýz
    int alone;// 0-arkadasýyla 1-yalnýz

};
void hotel_2star(struct participant table[4])
{
    printf("participant of 2 star hotel\n");
    int i;
    for(i=0;i<4;i++)
    {
       if(table[i].hotel==2)
       {
           printf("Surname: %s, Name: %s \n",table[i].surname,table[i].name);
       }
    }
}

void hotel_breakfast(struct participant table[4],int *n)//kac kisi kahvalti yapiyo
{
    printf("Breakfast service:\n");
    int i;
    *n=0;
    for(i=0;i<4;i++)
    {
        if(table[i].breakfast==1)
        {
            *n=*n+1;
            if(table[i].alone==0)//iki kisilik kahvalti
            {
                *n=*n+1;
            }
        }

    }


}
void bill(struct participant p,int *total)//fatura hesaplama
{
    *total=0;
    if(p.breakfast==1)
        *total+=15;//kahvalti fiyati
    if(p.dinner==1)
        *total+=35;//aksam yemegi fiyati
    if(p.alone==0)
        *total*=2;//2kisi konaklama
    if(p.hotel==2)
        *total+=75;//2yildizli konaklama
    if(p.hotel==3)
        *total+=100;//3yildizli konaklama
}
int main()
{
    int n,m;
    struct participant chart[4]={{"alkan","sinem",0,1,2,1},{"alkan","necla",0,0,1,0},{"aydin","aydin",1,0,2,1},{"abc","def",0,1,1,0}};
    hotel_2star(chart);
    hotel_breakfast(chart,&n);
    bill(chart[2],&m);//3.müsteri faturası hesaplanır
    printf("Breakfast participant: %d \n",n);
    printf("surname %s participant bill :%d",chart[2].surname,m);
    return 0;
}
