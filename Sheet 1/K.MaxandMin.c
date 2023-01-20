#include<stdio.h>
int main()
{
    int a[100] ,min, max ,i , mid;
    for(i = 1; i <= 3; i++)
        scanf("%d", &a[i]);

    //scanf("%d%d%d", &a, &b, &c);
    min = a[1];
    for(i = 1; i <= 3; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }

    max = a[1];
    for(i = 1; i <= 3; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }

    for(i = 1; i <= 3; i++)
    {
        if(a[i] != max && a[i] != min)
        mid = a[i];

    }
    printf("%d\n%d\n%d\n", min, mid, max);
    printf("\n");
    printf("%d\n%d\n%d\n", max, mid, min);




}
