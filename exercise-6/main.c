#include <stdio.h>
#include <stdlib.h>
// UNION VE STRUCT EGZERSÝZÝ HAFIZA KULLANIMI

/*
"struct durumunda, üyelerinin tümüne her an eriþilebilir.

Ancak, union durumunda, bir kerede yalnýzca üyelerinden birine eriþilebilir ve diðer tüm üyeler çöp deðerleri içerir."
*/

union ortak_hafiza
{
    int x;//4 byte
    float h;//4 byte
};

struct ayri_hafiza
{
    int z;
    float t;
};
int main()
{
    union ortak_hafiza A;

    A.h =10;
    A.x=5;

    printf("x: %d ve y: %f hafiza alani: %ld\n", A.x , A.h ,sizeof(A));

    struct ayri_hafiza B;
    B.t=15;
    B.z=20;

    printf("z: %d ve t: %f hafiza alani: %ld",B.z,B.t,sizeof(B));

    return 0;
}
