#include <stdio.h>
#include <stdlib.h>
#define PI 3
//UNION KULLANARAK DAIRENIN ALANI VE CEVRESINI HESAPLAMA
union calculate
{
    int area;
    int total_edge;
};
int main()
{
    union calculate calcul;

    int radius;
    printf("enter the radius\n");
    scanf("%d",&radius);

    calcul.area= PI*radius*radius;
    printf("circle area: %d\n",calcul.area);
    calcul.total_edge=2*PI*radius;
    printf("circle total edge: %d\n",calcul.total_edge);
    return 0;
}
