
#include<stdio.h>
int main()
{
    long long int a, i, b, m, j;
    scanf("%lld", &a);


    for(i = 0 ;i < a; i++)
    {
        scanf("%lld", &b);
        m = 1;

        for(j = 1; j <= b; j++)
        {
            m *= j;
        }
        printf("%lld\n",m);
    }




    return 0;
}

