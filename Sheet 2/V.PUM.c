#include<stdio.h>
int main()
{
    int n , i , j;
    scanf("%d", &n);
    n *= 4;

    for(i = 1; i <= n; i++)
    {
        if(i % 4 == 0)
            printf("PUM\n");
        else
            printf("%d ", i);
    }
}
