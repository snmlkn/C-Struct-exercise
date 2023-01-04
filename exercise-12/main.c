#include <stdio.h>
#include <stdlib.h>
//STRUCT YAPISINDA UNION VE KOSULLU IFADELER ICEREN EGZERSIZ
/*
-Birinci eleman� tamsayi ikinci eleman� bir birle�im olan yap� dizisi tan�mlay�n
-Birle�im tipindeki eleman karakter ve reel sayidan olussun
-Programda bir tamsayi de�erine g�re karakter veya reel say�y� girdi olarak al�n
-Girile tam sayi 1 ise karakter 0 ise reel sayi girilmeli
-Girilen tam saylar� ve tamsayilara ba�l� olan reel sayi ve karakterleri bir yap� dizisinde ssklay�n
-Girilen tamsayi 0 ve 1 den farkl� ise program sonlans�n
-Girilen yap� dizisinde ise reel say�lar�n ortalamas� program sonunda bast�r�ls�n.

*/
struct degerTip
{
    int tip;
    union{
    char kar;
    int reel;
    }bir;
};
int main()
{


struct degerTip degerler[20];
int i=-1;
char satir;
int j;
int n;
float ortalama;
    do
    {
        i++;
        printf("bir tamsayi degeri girin\n");
        scanf("%d",&degerler[i].tip);
        scanf("%c",&satir);
        if(degerler[i].tip==1)
        {
            printf("bir karakter girin\n");
            scanf("%c",&degerler[i].bir.kar);
            scanf("%c",&satir);
        }
        else if(degerler[i].tip==0)
        {
            printf("bir reel sayi girin\n");
            scanf("%d",&degerler[i].bir.reel);
        }


    }while(degerler[i].tip==0 || degerler[i].tip==1);

        for(j=0;j<=i;j++)
        {
            if(degerler[j].tip==0)
            {
                ortalama += degerler[j].bir.reel;
                    n++;
            }
        }
        ortalama=ortalama/n;

        printf("ortalama: %.2f",ortalama);

    return 0;
}
