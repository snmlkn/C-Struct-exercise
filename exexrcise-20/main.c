#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//BIR TOPUN HAREKETI SIRASINDA X VE Y KORDINAT BILGILERINI VEREN PROGRAM
struct coordinate
{
    float x,y;
};
int main()
{
    struct coordinate A;
    float t=0.0;

    do
    {
        A.x=20-6*cos(t);
        A.y=15+2*sin(t);
        t+=0.1;
        printf("x:%f \t y:%f\n",A.x,A.y);
    }while(t<10.0 && t>=0.0);


    return 0;
}
