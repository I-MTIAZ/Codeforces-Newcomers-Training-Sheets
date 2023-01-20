#include<stdio.h>

void fo(int n , int a[])
{
    int i;
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
}

int main()
{
    int n, a[100000], i;
    scanf("%d", &n);
    fo(n , a);

    for(i = 0; i < n; i++)
    {
        if(a[i] > 0)
            printf("1 ");
        else if (a[i] < 0)
            printf("2 ");
        else
            printf("0 ");
    }
    return 0;
}
