#include<stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = n -i; j > 0; j--)
            printf(" ");
        for(k = 1; k <= 2*i-1; k++)
            printf("*");

        printf("\n");

    }

    for(i = n; i > 0; i--)
    {


       for(j = 1 ; j <= n - i; j++)
            printf(" ");

       for(j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");

    }
    return 0;
}

