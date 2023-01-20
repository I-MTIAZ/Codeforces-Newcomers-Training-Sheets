#include<stdio.h>
int main()
{
    int n ,m ,i, j;
    char r;
    scanf("%c", &r);
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        for(j = 1; j <= m; j++)
            printf("%c",r);
        printf("\n");
    }
    return 0;
}

