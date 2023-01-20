#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000];
    int n, i, f , l ,r ,j, k;
    gets(a);
    scanf("%d%d", &l, &r);
    for(j = l; j <= r; j++)
        {
            if(a[j] == 97|| a[j] == 101||
               a[j] == 105 || a[j] == 111 ||
               a[j] == 117)

                f++;
                printf("%d\n", f);
        }

    /*scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d%d", &l, &r);
       f = 0;
        for(j = l; j <= r; j++)
        {
            if(a[j] == 97|| a[j] == 101||
               a[j] == 105 || a[j] == 111 ||
               a[j] == 117)

                f++;
        }

            printf("%d\n", f);

    }*/


    return 0;
}
