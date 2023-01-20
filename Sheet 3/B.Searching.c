#include<stdio.h>

void fo(int n , int a[])
{
    int i;
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
}




int main()
{
    int a[100000], n, x, i, f = 0;
    scanf("%d", &n);
    fo(n, a);

    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(x == a[i])
        {
            f = 0;
            x = i;
            break;
        }
        else
            f = 1;

    }

    if(f == 0)
        printf("%d\n",x);
    else
        printf("-1\n");

        return 0;
}
