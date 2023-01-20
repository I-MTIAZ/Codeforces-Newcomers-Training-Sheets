#include<stdio.h>
int main()
{
    int a, i, p = 0 , n = 0, e = 0, o = 0, b;

    scanf("%d", &a);

    for(i = 0; i < a; i++)
    {
        scanf("%d", &b);
        if(b < 0)
            n++;
         if(b > 0)
            p++;
         if(b % 2 == 0)
            e++;
         if(b % 2 != 0)
            o++;
    }
    printf("Even: %d\n",e);
    printf("Odd: %d\n",o);
    printf("Positive: %d\n",p);
    printf("Negative: %d\n",n);

    return 0;
}
