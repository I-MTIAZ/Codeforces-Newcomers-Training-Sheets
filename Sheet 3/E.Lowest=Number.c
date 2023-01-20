
#include<stdio.h>

void fo(int n , int a[])
{
    int i;
    for(i = 1; i <= n; i++)
        scanf("%d",&a[i]);
}

int main()
{
    int a[100000], n , i, m;
    scanf("%d", &n);
    fo(n , a);
    m = a[1];
    for(i = 1; i <= n; i++)
    {
        if(a[i] < m)
            {
                m = a[i];
            }
    }

    for(i = 1; i <= n; i++)
    {
        if(a[i] == m)
            {
                printf("%d %d\n", m, i);
                break;
            }
    }



    return 0;

}
