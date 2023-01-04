#include <stdio.h>
#include <stdlib.h>
//UNION KULLANIM ÖRNEÐÝ(BELLEK BOLGELERININ ADRESLERI)

union paylas
{
    int sayi1;
    double sayi2;
}sayilar;
int main()
{
    //pointer ile adres atamasý
    int *sayi1_ptr;
    double *sayi2_ptr;

    sayilar.sayi1=100;
    sayilar.sayi2=100000000;

    sayi1_ptr=&sayilar.sayi1;
    sayi2_ptr=&sayilar.sayi2;

    //sayilar için ayýtýlan alan
    printf("integer sayi1 icin tutulan alan %ul\n",sizeof(sayilar.sayi1));
    printf("double sayi2 icin tutulan alan %d\n",sizeof(sayilar.sayi2));
    printf("kullanilan toplam alan %l \n",sizeof(sayilar));
    //sayilarin adreslerini bastýrma

    printf("sayi1 bellek adresi %d\n",sayi1_ptr);
    printf("sayi2 bellek adresi %d",sayi2_ptr);

    return 0;
}
