#include<stdio.h>
int main()
{
    int n , m , t, f;

     scanf("%d", &n);

    for(f = 0; f < n; f++)
    {
        scanf("%d", &m);

        if(m == 0)
        {
            printf("%d\n", m);
        }
        else
        {
            while(m > 0)
            {
                t = m % 10;
                printf("%d ", t);
                m /= 10;
            }
            printf("\n");
        }

    }



    return 0;
}

