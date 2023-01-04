#include <stdio.h>
#include <stdlib.h>
//IKI KARMASIK SAYININ TOPLAMINI VEREN PROGRAM
typedef struct complex_number
{
    float real;
    float imaginer;
}complex;

void submit(complex n1,complex n2)
{
    complex result;
    result.real=n1.real+n2.real;
    result.imaginer=n1.imaginer+n2.imaginer;

    printf("complex number1: %.2f + %.2f i\n",n1.real,n1.imaginer);
    printf("complex number2: %.2f + %.2f i\n",n2.real,n2.imaginer);
    printf("                +\n");
     printf("               --------------------\n");
    printf("complex result : %.2f + %.2f i\n",result.real,result.imaginer);
}

int main()
{
    complex n1,n2;

    printf("enter real and imaginer of complex number n1\n");
    scanf("%f %f",&n1.real,&n1.imaginer);

    printf("enter real and imaginer of complex number n2\n");
    scanf("%f %f",&n2.real,&n2.imaginer);

    submit(n1,n2);
    return 0;
}
