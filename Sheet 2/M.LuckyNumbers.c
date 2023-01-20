#include<stdio.h>
int main()
{
    int n , m , max, min, i, t, f, g, h = 0 ;

     scanf("%d%d", &n, &m);



    if(n > m)
    {

        max = n;
        min = m;
    }
    else
    {
        max = m;
        min = n;
    }


    for(i = min; i <= max; i++)
    {
        f = 0;
        g = i;

        while(g > 0)
        {
            t = g % 10;
            if(t != 4 && t != 7)
            {
                f = 1;
                break;
            }

            g /= 10;
        }

        if(f == 0)
        {
            h = 1;
            printf("%d ", i);
        }


    }

    if(h == 0)
        printf("-1\n");
    return 0;
}
