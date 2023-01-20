#include<stdio.h>
#define ll long long
ll n, s = 1;
ll fun(ll i)
{

    if (i == n) return i;
    s = fun(i+1);
    printf("i = %d s = %d\n",i , s);
    s *= i;

   return s;
}
int main()
{
    ll m;
    scanf("%lld", &n);
    m = fun(1);
    //printf("%lld\n",m);
}
