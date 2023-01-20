#include<stdio.h>

void fo(int n , int a[])
{
    int i;
    for(i = 0; i < n; i++)
        scanf("%1d",&a[i]);
}

int main()
{
     int a[100000], n , i; long long int s = 0;
    scanf("%d", &n);
    fo(n , a);
    for(i = 0; i < n; i++)
    {
        s = s + a[i];

    }

     printf("%d\n", s);

    return 0;

}

