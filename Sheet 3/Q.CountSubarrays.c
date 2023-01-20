#include<stdio.h>
int main()
{
    int t, n, a[100010], i, j, k, f, mx, T, ct;

    scanf("%d", &t);


    for(T = 1; T <= t; T++)
     {
        scanf("%d", &n);
        for(i = 1; i <= n; i++)
            scanf("%d", &a[i]);

            ct = 0;

                for(i = 1; i <= n; i++)
                {
                    for(j = i; j <= n; j++)
                    {
                        mx = -1000000;
                        f = 0;
                        for(k = i; k <= j; k++)
                        {
                                if(mx < a[k])
                                {
                                    mx = a[k];
                                    f = 1;
                                }
                                else
                                {
                                    f = 0;
                                    break;
                                }
                        }
                            if(f == 1)
                                ct++;

                    }
                }
                printf("%d\n", ct);
    }

    return 0;
}
