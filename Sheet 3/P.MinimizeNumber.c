#include<stdio.h>
int main()
{
    int a[220], n, i, f,j, c;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);

    }

    c = 0;
    for(;;)
    {
        f = 0;
        for(j = 1; j <= n; j++)
        {
            if(a[j] % 2 == 0)
            {
                a[j] /= 2;
                a[i] = a[j];
                f = 1;
            }
            else
            {
                f = 0;
                break;
            }

        }

        if(f == 1)
            c++;
        else
        {
            f = 0;
            break;
        }

    }

    printf("%d\n", c);
    return 0;
}
