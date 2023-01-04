#include <stdio.h>
#include <stdlib.h>
//ENUMARATION ALIÞTIRMA aylarý yazma
typedef enum
{
ocak=1,
subat,
mart,
nisan,
mayis,
haziran,
temmuz,
agustos,
eylul,
ekim,
kasim,
aralik
}aylar;

void kacinciAy(aylar ay)
{
    switch(ay)
    {
    case ocak:
        printf("ocak");
        break;
    case subat:
        printf("subat");
        break;
    case mart:
        printf("mart");
        break;
    case nisan:
        printf("nisan");
        break;
    case mayis:
        printf("mayis");
        break;
    case haziran:
        printf("haziran");
        break;
    case temmuz:
        printf("temmuz");
        break;
    case agustos:
        printf("agustos");
        break;
    case eylul:
        printf("eylul");
        break;
    case ekim:
        printf("ekim");
        break;
    case kasim:
        printf("kasim");
        break;
    case aralik:
        printf("aralýk");
        break;
    default:
        printf("gecersiz sayi");
        break;
    }
}
int main()
{
    /*aylar ay=subat;
    printf("%d",ay);*/
    aylar ay=5;
    kacinciAy(ay);
    return 0;
}
