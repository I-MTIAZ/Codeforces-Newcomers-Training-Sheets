#include<stdio.h>

void qor(double x ,double y)
{
    if(x  == 0 && y == 0)
        printf("Origem\n");


    else if(x > 0 && y == 0)
        printf("Eixo X");

    else if(x < 0 && y == 0)
        printf("Eixo X");


    else if(x == 0 && y > 0)
        printf("Eixo Y");

    else if(x == 0 && y < 0)
        printf("Eixo Y");



    else if(x < 0 && y > 0)
        printf("Q2\n");

    else if(x > 0 && y > 0)
        printf("Q1\n");

    else if(x < 0 && y < 0)
        printf("Q3\n");

    else if(x > 0 && y < 0 )
       printf("Q4\n");
}

int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    qor(a, b);

    return 0;
}
