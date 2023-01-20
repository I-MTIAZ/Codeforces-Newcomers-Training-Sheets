#include<stdio.h.>
#include<string.h>


int main()
{
    long long int n, g[10010]= {0}, i, j;
    char t;

    scanf("%lld", &n);

    for(i = 1; i<= n; i++)
    {
        scanf(" %c",&t);
        g[t] = g[t] + 1;
    }

     for(i = 'a'; i<= 'z'; i++)
    {
        if(g[i] != 0){
            for(j = 1; j <= g[i]; j++)
                printf("%c",i);
        }


    }

}
