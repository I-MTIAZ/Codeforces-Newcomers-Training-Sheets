#include<stdio.h>
int main()
{
   long long  int n , m , max, min, i, h ;

     while(1)
     {
         scanf("%lld%lld", &n, &m);



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

        if(max <= 0 || min <= 0)
           break;

        else
        {
            h = 0;
            for(i = min; i <= max; i++)
                {

                    printf("%lld ", i);
                    h += i;
                }
                    printf("sum =%lld\n", h);

        }


     }



    return 0;
}

