#include<stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    a %= 10;
    b %= 10;
    printf("%lld", a + b);
}
