#include<stdio.h>

void moja(int a[], int n, int k)
{
    for(int j = 1; j <= k*3; j++)
    {
        for(int i = 1; i <= n ; i++)
        {
            if(i == n)
                break;
            else
            {
                int t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
                }
            }
    }
}

void na(int a[], int n, int k)
{
    for(int j = 1; j <= k*4; j++)
    {
        for(int i = 1; i <= n ; i++)
        {
            if(i == n)
                break;
            else
            {
                int t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
                }
            }
    }
}
int main()
{
    int a[11110], i, n, k;
    //scanf("%d", &n);
    //scanf("%d", &k);
    n = 10000;
    k = 100;

    for(i = 1; i<= n; i++)
        a[i] = i;

    if(n % 2 == 0)
        moja(a, n, k);
    else
        na(a, n, k);
    for(i = 1; i <=n; i++)
        printf("%d ",a[i]);
}
