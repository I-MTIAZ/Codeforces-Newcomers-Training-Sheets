#include<stdio.h>
#include<math.h>
int main()
{
    int long long i, a[100], s = 1;

    for(i = 0; i <= 3; i++)
    {
        scanf("%lld", &a[i]);
        s *=  a[i];
    }
     printf("%d\n", s);

    s %= 100;
    if(s == 0)
     printf("%lld%lld", s,s);
    else
        printf("%lld", s);
}
