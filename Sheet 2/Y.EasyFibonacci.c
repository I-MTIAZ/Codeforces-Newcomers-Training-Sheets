#include<stdio.h>
int main()
{
    int t;
    int i, n, f, c, b;
    c = 0;
    b = 1;

    scanf("%d", &n);



    for(i = 0; i < n; i++)
    {
        if(i == 0)
            printf("%d ",c);
        else if(i == 1)
            printf("%d ",b);
        else
        {
            f = c + b;
            printf("%d ", f);

            t = b;
            c = b;
            b = f;
        }
    }

}
