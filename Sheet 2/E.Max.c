
#include<stdio.h>
int main()
{
    int a, i, b, max;
    scanf("%d", &a);

    max = -100000;
    for(i = 0 ;i < a; i++)
    {
        scanf("%d", &b);
        if(b > max)
            max = b;


    }


    printf("%d\n",max);

    return 0;
}
