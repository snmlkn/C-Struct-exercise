#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//STRUCT ���NDE UNION KULLANIMI EGZERS�Z
struct araba
{
    int satis;//satildi:1 satilmadi:0

    union//satildi ise fiyat satilmadi ,ise marka bilgisi
    {
    double fiyat;
    char marka[20];
    }bilgi;
};
int main()
{
    //satilmamis anadol markali araba A tanimlama
    struct araba araba_A;
    araba_A.satis=0;
    strcpy(araba_A.bilgi.marka,"Anadol");//araba A i�indeki bilgi isimli unionun marka ad�ndaki veri tipine "Anadol" ismi atand�.

    printf("satis durumu: %d ve marka,fiyat durumu: %s\n",araba_A.satis,araba_A.bilgi.marka);

    printf("guncellemeden sonra\n");

    araba_A.satis=1;
    araba_A.bilgi.fiyat=20000;

    printf("satis durumu: %d ve marka,fiyat durumu: %.2lf\n",araba_A.satis,araba_A.bilgi.fiyat);
    return 0;
}
