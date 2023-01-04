#include <stdio.h>
#include <stdlib.h>
//STRUCT KULLANARAK KARMASIK SAYILARDA ISLEM YAPMA
struct complex_number
{
    float a,b;


};

int main()
{
   struct complex_number sayi1,sayi2,sonuc;
   char ope;

   printf("yapilacak islemi girin\n");
   scanf("%c",&ope);

   printf("birinci karmasik sayiyi girin\n");
   scanf("%f %f",&sayi1.a,&sayi1.b);

   printf("ikinci karmasik sayiyi girin\n");
   scanf("%f %f",&sayi2.a,&sayi2.b);

   if(ope=='+')
   {
       sonuc.a=sayi1.a+sayi2.a;
       sonuc.b=sayi1.b+sayi2.b;
   }
   else if(ope=='-')
   {
       sonuc.a=sayi1.a-sayi2.a;
       sonuc.b=sayi1.b-sayi2.b;
   }
   else
   {
       printf("yanlis sayi girdiniz\n");
   }

   //SONUCU BASTIRMA

   printf("%.2f",sonuc.a);

   if(sonuc.b>=0)
   {
       printf("+ %.2f i",sonuc.b);
   }
   else
   {
       printf("%.2f i",sonuc.b);
   }



    return 0;
}
