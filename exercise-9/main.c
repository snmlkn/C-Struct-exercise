#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//STRUCT YAPISI KULLANARAK BÝR YARÝSMACÝNÝN 10 HAKEM TARAFINDAN BELÝRLENEN PERFORMANS PUANINI BULMA
// PUANLAMA 0-6 ARASINDA
typedef struct yarismaci_kriter
{
    float performans;
    float puan[10];
    char isim[10];
    char soyisim[10];
}yarisan;

float puanHesap(yarisan sinem)
{
    int i;
    float sonuc;
    float max=0.0;
    float min=6.0;
    for(i=0;i<10;i++)
    {
        if(sinem.puan[i]>max)
        {
            max= sinem.puan[i];
        }
        if(sinem.puan[i]<min)
        {
            min= sinem.puan[i];
        }
        sonuc += sinem.puan[i];
    }

    sonuc=(sonuc-min-max)/8;
    return(sonuc);
}


int main()
{
    yarisan sinem;
    printf("yarismaci bilgileri\n");

    printf("yarismaci ismi: ");
    scanf("%s",&sinem.isim[10]);

    printf("yarismaci soyismi: ");
    scanf("%s",&sinem.soyisim[10]);

    printf("\nyarismaci puanlari\n");
    for(int i=0;i<10;i++)
    {
       scanf("%f",&sinem.puan[i]);
    }

    sinem.performans=puanHesap(sinem);

    printf("yarismaci performansi: %2.f",sinem.performans);

    return 0;
}
