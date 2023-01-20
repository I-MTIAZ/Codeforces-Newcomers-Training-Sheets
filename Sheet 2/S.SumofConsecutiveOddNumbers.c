#include<stdio.h>
int main()
{
    int a, n , m , max, min, i, h, j ;

     scanf("%d", &a);

     for(j = 0; j < a; j++)
     {
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
            h = 0;
            for(i = min+1; i < max; i++)
                if(i % 2 != 0)
            {
                h += i;
            }
            printf("%d\n", h);


     }










    return 0;
}


