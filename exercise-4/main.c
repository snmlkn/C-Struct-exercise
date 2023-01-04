#include <stdio.h>
#include <stdlib.h>
//5 NOKTA TUTAN BÝR DÝZÝYÝ FONKSÝYON ÝLE EKRANA BASTIRMA
typedef struct
{
char name[10];
float x_axis;
float y_ordinate;
}point;

void show_screen(point p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s : %.2f ,%.2f\n",p[i].name,p[i].x_axis,p[i].y_ordinate);
    }
}
int main()
{
    point p[5]={{"name1",1,2},{"name2",3,4},{"name3",5,6},{"name4",7,8},{"name5",9,10}};
    show_screen(p,5);


    return 0;
}
