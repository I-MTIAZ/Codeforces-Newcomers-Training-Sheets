#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define ll long long
int main()
{
    ll a, i, f = 0;
    double m;
    scanf("%lld", &a);
    m = sqrt(a);
    if(a == 1)
    printf("NO\n");

    else
    {
        for(i = 2; i<=m ; i++){
        if(a % i == 0){ f = 1; break;}
        }
        if(f == 0)
        printf("YES\n");
        else
        printf("NO\n");
    }


}
