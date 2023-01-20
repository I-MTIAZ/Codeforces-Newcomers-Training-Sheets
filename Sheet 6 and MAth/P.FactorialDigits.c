#include<stdio.h>
#define  ll long long
int main()
{
    ll n, i, f = 1, s = 0, r;
    scanf("%lld", &n);

    for(i = 1; i <= n ; i++)
    {
        f = f * i;
    }

    while(f > 0)
    {
        r = f % 10;
        s++;
        f /= 10;
    }
    printf("Number of digits of %lld! is %lld",n,s);
}
