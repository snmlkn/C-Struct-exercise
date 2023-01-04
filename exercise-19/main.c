#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3
//ECZACI PROBLEMI STOK UYARI BILGISI PROGRAMI
typedef struct drug_list
{
    char drug_name[20];
    int drug_number;
    int price;
}data;
int main()
{
    data drug[N];
    int i;
    for(i=0;i<N;i++)
    {
       fflush(stdin);
       printf("enter the drug name:\n");
       scanf("%s",&drug[i].drug_name[20]);
       printf("enter the drug stock:\n");
       scanf("%d",&drug[i].drug_number);
       printf("enter the drug price:\n");
       scanf("%d",&drug[i].price);
    }
    printf("DRUG STOCKS WARNING\n");
    printf("============================\n");

    for(i=0;i<N;i++)
    {
       if(drug[i].drug_number<=20)
        {
            char medicine[10];
            strcpy(medicine,drug[i].drug_name);
            printf(" %s stock is %d please add new drugs\n",medicine,drug[i].drug_number);
        }
    }

        return 0;
}
