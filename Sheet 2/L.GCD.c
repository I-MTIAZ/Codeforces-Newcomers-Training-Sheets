#include<stdio.h>
int main()
{
    int n , m, i , max , min, a;
    scanf("%d%d", &n, &m);

    if(n > m)
    {

        max = n;
        min = m;
    }
    else
    {
        max = m;
        min = n;
    }




    for(i = 1; i <= max; i++)
    {
        if(max % i == 0 && min % i == 0)
            a = i;
    }

    printf("%d\n", a);
    return 0;
}
