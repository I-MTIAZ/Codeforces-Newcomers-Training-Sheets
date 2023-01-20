#include<stdio.h>
int main()
{
    long long int n, a, b, t, i ,f;
    scanf("%lld", &n);
    a = 0;
    b = 1;


    for(i = 0 ; i < n; i++)
    {
        if(i == 0)
            f = a;
        else if(i == 1)
            f = b;
        else
        {
            f = a + b;
            a = b;
            b = f;
        }

    }
    printf("%lld", f);
    return 0;
}
