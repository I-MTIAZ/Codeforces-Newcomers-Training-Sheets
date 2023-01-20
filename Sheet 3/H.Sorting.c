#include<stdio.h>
/// dhin foejheu
void fo(int n , int a[])
{
    int i;
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
}

int main()
{
    int a[100000], n , i, j, m, t;
    n = 3;
    fo(n , a);

    for(i = 0; i < n; i++)
    {
       for(j = i + 1; j < n; j++)
       {
           if(a[i] > a[j])
           {
               t = a[j];
               a[j] = a[i];
               a[i] = t;
           }
       }
    }

    for(i = 0; i < n; i++)
        printf("%d\n",a[i]);

        printf("\n");

     for(i = n-1; i >= 0; i--)
        printf("%d\n",a[i]);
    return 0;

}

