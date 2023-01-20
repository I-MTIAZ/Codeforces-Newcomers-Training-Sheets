#include<stdio.h>

void fo(int n , int a[])
{
    int i;
    for(i = 1; i <= n; i++)
        scanf("%d",&a[i]);
}

int main()
{

    int a[100000], n , i, j, s, m, t, l;

    scanf("%d",&t);

    for(l = 0; l < t; l++)
    {
        scanf("%d", &n);
    for(i = 1; i <= n; i++)
        scanf("%d",&a[i]);


    m = 1000000000;
    for(i = 1; i <= n; i++)
    {
        for(j = i + 1; j <= n; j++)
        {
            s = a[i] + a[j] + j - i;
            if(m > s)
            {
                m = s;
            }
        }

    }

    printf("%d\n", m);

    }





  return 0;

}

