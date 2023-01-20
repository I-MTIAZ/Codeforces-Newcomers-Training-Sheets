#include<stdio.h>
int main()
{
    int n, s, i, j, k, l, p = 0;
    scanf("%d%d", &n, &s);

    for(i = 0; i <= n; i++)
    {
        //l = 0;
        for(j = 0; j <= n; j++)
        {
            for(k = 0; k <= n; k++)

                printf("%d %d %d\n", i,j,k);


        }
    }

    //printf("%d\n", p);
    return 0;

    //l = i + j ;
                //if(l == s)
                //p++;
}
