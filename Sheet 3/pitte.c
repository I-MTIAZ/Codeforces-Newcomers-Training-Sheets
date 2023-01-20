#include<stdio.h>
int main()
{
    int i, n, t, a , b, s, f;
    while(1)
    {

        scanf("%d%d", &a, &b);

        if(a == 0 || a < 0 || b == 0 || b < 0)
            break;

        else if(a == b)
            {
            printf("%d sum =%d\n", a, b);
            }

        else
            {
            if(a > b)
            {
                s = 0;
            for(i = b; i <= a; i++)
                {
                printf("%d ",i);
                s += i;
                }
                printf("sum =%d\n",s);
            }


            else if(b > a)
            {
                s = 0;
            for(i = a; i <= b; i++)
            {
                printf("%d ",i);
                s += i;
            }
                printf("sum =%d",s);
            }
            }
   }

    return 0;

}
