#include<stdio.h>
int main()
{
    long long int a[100010], i, j, n, mid, big, end, q, m;

    scanf("%lld", &n);
    for(i = 1; i <= n; i++)
         scanf("%lld", &a[i]);

         scanf("%lld", &q);

    for(j = 1; j <= q; j++)
    {
        scanf("%lld",m);
        big  = 1;
        end = n - 1;
        for(i = 1; i <= n; i++)
        {
            mid = (big + end) / 2;

                if(big > end)
                {
                    printf("not found\n");
                    break;
                }

                if(a[mid] == m)
                {
                    printf("found\n");
                }
                else
                {
                    if(a[mid] > m)
                    end = mid -1;

                    else
                        big = mid + 1;

                }
        }

    }

}
