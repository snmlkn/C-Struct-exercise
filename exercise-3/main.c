#include <stdio.h>
#include <stdlib.h>
//STRUCT TYPEDEF VE NORMAL TANIMLAMA
/*struct point
{
    float ABS;
    float ORD;

};
*/
typedef struct
{
    float ABS;
    float ORD;
}point;
int main()
{
    //struct point p={3,2};
    point p;
    p.ABS=3;
    p.ORD=2;
    printf("abs: %.2f \t ord: %.2f\n",p.ABS,p.ORD);
    return 0;
}
