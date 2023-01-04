#include <stdio.h>
#include <stdlib.h>

//5 SORUDAN OLUSAN BÝR SINAVDA 3 OGRENCÝNÝN VERDÝGÝ CEVAPLARA GORE PUAN HESAPLAYAN PROGRAM
//TEKRAR BAK
struct studentType
{
    int no;
    char answer[5];
};

struct resultType
{
    int no;
    int point;
};

int main()
{
    struct studentType student[3];
    struct resultType result[3];
    char key[5];
    int i,j;
    //char satir;
    int dogru,yanlis;
    //yapilan sýnavdaki dogru cevaplar istenir
    printf("cevap anahtarini girin\n");
    for(i=0;i<5;i++)
    {
        scanf("%s",&key[i]);
    }
    //herbir ogrencinin cevaplari istenir
    //scanf("%c",&satir);
    printf("ogrenci bilgilerini girin\n");
    for(j=0;j<3;j++)
    {
        printf("\nogrenci numarasi girin\n");
        scanf("%d",&student[j].no);
        dogru=yanlis=0;
        printf("cevaplari asagiya yazin\n");
        for(i=0;i<5;i++)
        {
            scanf("%s",&student[j].answer[i]);
            if(key[i]== student[j].answer[i])
            {
                dogru++;
            }
            else if(student[j].answer[i] != ' ')
            {
                yanlis++;
            }
        }
        result[j].no=student[j].no;
        printf("Dogru :%d Yanlis:%d",dogru,yanlis);
        result[j].point=dogru-(yanlis/4);
    }
    for(j=0;j<3;j++)
    {
      printf("ogrenci no:%d  not:%d\n",student[j].no,result[j].point);
    }

    return 0;
}
