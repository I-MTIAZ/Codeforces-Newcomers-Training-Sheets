#include<stdio.h>
#include<math.h>
int main()
{
    int  a, n, i, s, g, j;
    scanf("%d", &a);
    for(j = 0; j < a; j++)
    {
        scanf("%d",&n);
        s = 0;
        while(n > 0)
        {
            i = n % 2;
                n /= 2;
            if(i == 1)
                s++;
        }
        g = pow(2, s);
        g -= 1;
        printf("%d\n", g);
    }



}
