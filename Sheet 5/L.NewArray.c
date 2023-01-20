#include<stdio.h>
void poka(int a[],int n, int b[], long long int c[],long long int m)
{
    int k,i ,j;
    for(k = 1, j = 1;k <= m, j <= n; k++, j++)
    {
        c[k] = b[j];
    }

    for(k = j, i = 1;k <= m, i <= n; k++, i++)
    {
        c[k] = a[i];
    }

    for(k = 1;k <= m; k++)
    {
        printf("%lld ",c[k]);
    }

}



int main()
{
    int a[10000], b[10000] , i , j, n;
    long long int c[10000], m;

    scanf("%d",&n);
    m = n+n;
    for(i = 1; i <= n; i++)
        scanf("%d",&a[i]);


    for(j = 1; j <= n; j++)
        scanf("%d",&b[j]);

    poka(a,n, b, c, m);


}
