#include <stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);

    char a[100], b[100];

    int i, l, l1, m, j;

    for(j = 1; j <= n; j++){
       l = 0;
       l1 = 0;

       scanf("%s",a);
       scanf("%s",b);

        l = strlen(a);
        l1 = strlen(b);

        l -= 1;
        l1 -= 1;

        if(l > l1)
        m = l;
        else
        m = l1;

        for(i = 0;i <= m; i++){
            if(i<= l)
            printf("%c",a[i]);

            if(i <= l1)
            printf("%c",b[i]);
        }
                printf("\n");


    }
    return 0;
}

