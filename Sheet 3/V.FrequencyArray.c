#include<stdio.h>
int main()
{
    int ar[100010]={0}, i, c, a, b;
    scanf("%d%d", &a, &b);
    for(i = 1; i <= a; i++)
    {
        scanf("%d", &c);
        ar[c] = ar[c] + 1;
    }

    for(i = 1; i <= b; i++)
    {
        printf("%d \n",ar[i]);
    }

}
