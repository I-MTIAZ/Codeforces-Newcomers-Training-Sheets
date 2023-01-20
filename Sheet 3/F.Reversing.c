#include<stdio.h>

void fo(int n , int a[])
{
    int i, b[100000], f = 0, j;
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);


    for(j = 0, i = n-1 ; j < n; j++, i--)
    {
        b[j] = a[i];
    }

    for(i = 0, j = 0; i < n; i++, j++)
    {
        if(b[j] != a[i])
        {
            f = 1;
        }
    }

    if(f == 0)
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{
    int a[100000],n , i;
    scanf("%d", &n);
    fo(n , a);
    return 0;

}

