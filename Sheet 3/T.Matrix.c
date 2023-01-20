#include<stdio.h>
int main()
{
    int a[110][110], i, j, s1, s2, n;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    }

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++){
            if(a[i] == a[j])
                printf("%d ",a[i][j]);
                printf("\n");
        }

    }


    for(i = 1; i <= n; i++)
    {
        for(j = n; j < n; j--){
            if(a[i] == a[j])
                printf("%d ",a[i][j]);
                printf("\n");
        }

    }










    /*for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);
            printf("\n");
    }*/
}
