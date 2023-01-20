/*#include<stdio.h>
int main()
{
    int n , x, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if(x < 0 && x % 2 == 0)
            printf("EVEN NEGATIVE\n");

        else if(x < 0 && x % 2 != 0)
            printf("ODD NEGATIVE\n");

        else if(x > 0 && x % 2 == 0)
            printf("EVEN POSITIVE\n");

        else if(x > 0 && x % 2 != 0)
            printf("ODD POSITIVE\n");

        else if(x == 0)
            printf("NULL\n");
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int i, n;
    double a, b, c, avg, t;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%lf%lf%lf", &a, &b, &c);
        a *= 2;
        b *= 3;
        c *= 5;
        a = a + b + c;
        t = 2 + 3 + 5;
        avg = a / t;

        printf("%.1lf\n", avg);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int i,  a[110], max, p;


    for(i = 0; i <= 5; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    for(i = 0; i <= 5; i++)
    {
        if(max < a[i])
        {
            max = a[i];
            p = i + 1;
        }

    }
    printf("%d\n%d\n",max, p);
    return 0;
}



