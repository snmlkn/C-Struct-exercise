#include <stdio.h>
#include <stdlib.h>
//KULLANICI TARAFINDAN GÝRÝLEN IKI ZAMAN ARASINDAKI FARKIN BULAN PROGRAM

struct time
{
    int hour;
    int minute;
    int second;
};

time_diff(struct time t1,struct time t2,struct time *diff)
{
    if(t2.second>t1.second)
    {
        --t1.minute;
        t1.second+=60;
    }
    diff->second=t1.second-t2.second;
    if(t2.minute>t1.minute)
    {
        --t1.hour;
        t1.minute+=60;
    }
    diff->minute=t1.minute-t2.minute;
    diff->hour=t1.hour-t2.hour;
}

int main()
{
    struct time t1,t2,diff;

    printf("enter start time:\n");
    scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);

    printf("enter stop time:\n");
    scanf("%d%d%d",&t2.hour,&t2.minute,&t2.second);

    time_diff(t1,t2,&diff);//yapýlacak iþlemlerde sonucun tutulduðu adresin deðiþmemesi için zaman farkýnýn adresi fomksiyona yollanýr

    printf("timing difference:");
    printf("%d %d %d - ",t1.hour,t1.minute,t1.second);
    printf("%d %d %d = ",t2.hour,t2.minute,t2.second);
    printf("%d %d %d",diff.hour,diff.minute,diff.second);


    return 0;
}
