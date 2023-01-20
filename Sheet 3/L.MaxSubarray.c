/// L sheet 3 max sub array
#include<stdio.h>

int main()
{
    int a[100000], t, i, j, k, n, max, cmax, l, m;
    scanf("%d", &t);

    for(l = 0 ; l < t; l++)
    {
        scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);


    for(i = 0; i < n; i++)
    {
        for(j = i ; j < n; j++)
        {
            max = -1000000;
            for(k = i; k <= j; k++)
            {
                if(max < a[k])
                    max = a[k];

            }
            printf("%d ",max);



        }
    }
    printf ("\n");

    }

}
