#include<stdio.h>
int main()
{
    int n, i, f = 0;
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
    {
        if(i % 2 == 0)
            {
                printf("%d\n",i);
                f = 1;
            }
    }
    if (f == 0)
        printf("-1\n");
    return 0;
}
