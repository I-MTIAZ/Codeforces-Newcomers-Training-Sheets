
#include<stdio.h>
int main()
{
     int a, i, b, m = 1, j = 0;
    scanf("%d", &a);
    i = a;


    for(;a > 0;)
    {
        j *= 10;
        b = a % 10;
        j = j + b;
        a /= 10;
    }
    if(j == i)
        printf("%d\nYES\n",j);
    else
        printf("%d\nNO\n", j);

    return 0;
}



