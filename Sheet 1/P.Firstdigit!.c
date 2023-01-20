#include<stdio.h>
int main()
{
     int a, t;
     scanf("%d", &a);

    while(a > 0)
    {
        t = a % 10;
        a /= 10;
        if( a < 10)
        {
            break;
        }
    }

    if(a % 2 == 0)
        printf("EVEN\n");
    else
        printf("ODD\n");

    return 0;
}
