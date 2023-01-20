#include<stdio.h>

void fo(int n , int a[])
{
    int i;
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
}

int main()
{
    int a[100000], n , i, m , f = 0 ;
    scanf("%d", &n);
    fo(n , a);
    m = 100000000;
    for(i = 0; i < n; i++)
    {
        if(a[i] < m)
            m = a[i];
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] == m)
            f++;
    }

    if(f % 2 == 0)
            printf("Unlucky\n");
        else
            printf("Lucky\n");


    return 0;

}

