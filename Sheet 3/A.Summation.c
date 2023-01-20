#include<stdio.h>
#include<stdlib.h>

void fo(int n , int a[])
{
    int i;
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
}

int main()
{
    int a[1000000], i, s = 0 , n;
    scanf("%d", &n);

    fo(n , a);
    for(i = 0; i < n; i++)
        s = a[i] + s;

        printf("%d\n",abs(s));

        return 0;
}
