#include <stdio.h>
#include <stdlib.h>
//BIR DIZININ SIMETRIK OLUP OLMADIGINI BULAN PROGRAM
/*
tek boyutlu bir dizinin simetrik olup olmadýgýný kontrol eden program
*/
void simetrik(int matris[10])
{
    int n=0;
    int *ptr;
    int *ptr_son;

    ptr_son=matris+9;
    for(ptr=matris,ptr_son=matris+9;ptr<matris+5;ptr++,ptr_son--)
    {
       if(*ptr==*ptr_son)
       {
           n+=1;
       }

    }
    printf("n: %d\n",n);
    if(n==5)
    {
        printf("simetrik\n");
    }
    else
    {
        printf("simetrik degil\n");
    }
}

int main()
{
    int matris[10];
    int i;
    printf("matrisin elemanlarini girin\n");
    for(i=0;i<10;i++)
    {
        printf("matrisin %d. elemani: \n",i+1);
        scanf("%d",&matris[i]);
    }

    simetrik(matris);
    return 0;
}
