#include<stdio.h>
int main()
{
    int n, a, b, i, s, m, t, h = 0;

    scanf("%d", &n);
    scanf("%d%d", &a, &b);

    for(i = 1; i <= n; i++)
    {
        m = i;
        s = 0;
        while(m > 0)
        {
            t = m % 10;
            s += t;
            m /= 10;
        }

        if(s >= a && s <= b)
            h += i;

    }
    printf("%d",h);
    return 0;
}
