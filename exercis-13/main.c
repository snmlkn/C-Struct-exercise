#include <stdio.h>
#include <stdlib.h>
//STRUCT YAPISI KULLANARAK TELEFON DEFTERI OLUSTURMA VE HAFIZADA TUTMA
struct adres_defteri
{
    char ad[10];
    char soyad[10];
    int tel;
    char adres[20];
    int posta_kodu;
};
int main()
{
    int n;
    int i;
    char satir;
    struct adres_defteri kisiler[20];
    printf("adres defteri bilgileri\n");

    printf("adres defterine eklenecek kisi sayisini girin\n");
    scanf("%d",&n);
    scanf("%c",&satir);
    for(i=0;i<n;i++)
    {

        printf("kisi ismini girin\n");
        gets(kisiler[i].ad);


        printf("kisi soyismini girin\n");
        gets(kisiler[i].soyad);


        printf("kisi telefonunu girin\n");
        scanf("%d",&kisiler[i].tel);

        scanf("%c",&satir);
        printf("kisi adresini girin\n");
        gets(kisiler[i].adres);

        printf("kisi posta kodunu girin\n");
        scanf("%d",&kisiler[i].posta_kodu);
    }
    printf("------TELEFON DEFTERÝ--------\n");
    printf("------------------------------------------------------------\n");
    printf("AD\tSOYAD\tTELEFON\tADRES\tPOSTAKODU\n");
    for(i=0;i<n;i++)

    {
        printf("%s \t %s \t %d \t %s \t %d \n",kisiler[i].ad,kisiler[i].soyad,kisiler[i].tel,kisiler[i].adres,kisiler[i].posta_kodu);
    }


    return 0;
}
