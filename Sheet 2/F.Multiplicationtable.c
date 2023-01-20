
#include<stdio.h>
int main()
{
    int a, i, m;
    scanf("%d", &a);


    for(i = 1 ;i <= 12; i++)
    {
        m = a * i;
        printf("%d * %d = %d\n",a , i, m);

    }

    return 0;
}

