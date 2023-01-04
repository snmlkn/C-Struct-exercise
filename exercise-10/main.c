#include <stdio.h>
#include <stdlib.h>
//YARISMACI SAYISINI ALAN VE  PUANLAMADAN SONRA BÝRÝNCÝYÝ VERENPROGRAM
//STRÝNG KULLANIMINDA HATA OLUSTU:
//SOYISIM SON ASAMADAN BASILMIYO
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
    int i,j;
    int birinci;
    float max=0;
    int n;//yarisan yarismaci sayisi
    yarisan yarismaci[100];

    printf("yarismaci sayisini girin\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nyarismaci ismi girin\n");
        scanf("%s",&yarismaci[i].isim[10]);
        //gets(yarismaci[i].isim);

        printf("yarismaci soyismi girin\n");
        scanf("%s",&yarismaci[i].soyisim[10]);
        //gets( yarismaci[i].soyisim);

        printf("hakem puani:\n");

        for(j=0;j<10;j++)
        {
            scanf("%f",&yarismaci[i].puan[j]);
        }
        yarismaci[i].performans=puanHesap(yarismaci[i]);

        printf("yarisan puani: %.2f",yarismaci[i].performans);

        if(yarismaci[i].performans>max)
        {
            max=yarismaci[i].performans;
            birinci=i;
        }
    }

    printf("\nyarisma birincisi:");
    printf("Isim:%s Soyisim:%s Puan:%f\n",yarismaci[birinci].isim,yarismaci[birinci].soyisim,max);

    //printf("Isim: %s soyisim: %s Puan:%f",yarismaci[birinci].isim,yarismaci[birinci].soyisim,max);

    return 0;
}
