#include<stdio.h>
#define ll long long
ll a[1110],n;

ll y(ll i)
{
    ll s;
    if(i == n)  return a[i];

    s = y(i + 1) + a[i];
    return s;
}

int main()
{
    ll i, m;
    scanf("%lld", &n);

    for(i = 1; i <= n; i++)
    scanf("%lld", &a[i]);
    m = y(0);
    printf("%lld\n",m);
}
