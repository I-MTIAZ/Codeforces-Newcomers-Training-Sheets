#include<stdio.h>

void fo(int n , int a[])
{
    int i;
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
}

int main()
{
    int a[100000], n , i;
    scanf("%d", &n);
    fo(n , a);
    for(i = 0; i < n; i++)
    {
        if(a[i] <= 10)
            printf("A[%d] = %d\n", i, a[i]);
    }

    return 0;

}
