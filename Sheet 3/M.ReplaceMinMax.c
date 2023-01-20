#include<stdio.h>
int main()
{
    int a[100000], min, max, i, n;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

     min = a[0];
     for(i = 0; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

     max = a[0];
     for(i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] == max)
        printf("%d ", min);

        else if(a[i] == min)
        printf("%d ", max);
        else
        printf("%d ", a[i]);
    }

}

