#include<stdio.h>
int main()
{
    int a[100][100], i, j, n, m, e = 0, x;

    scanf("%d%d", &n ,&m);


    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);
    }

    scanf("%d", &x);

     for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
            {
                if(x == a[i][j])
                {
                    e = 1;
                    break;
                }

            }
    }

    if(e == 1)
        printf("will not take number\n");
    else
        printf("will take number\n");
        return 0;
}
