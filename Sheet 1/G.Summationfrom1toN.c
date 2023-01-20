#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    n = n * (n + 1) / 2 ;

    printf("%lld\n", n);
    return 0;

}
