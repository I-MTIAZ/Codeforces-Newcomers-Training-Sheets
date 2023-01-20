#include<stdio.h>
int main()
{
    char a;
    int c, b;
    scanf("%d%c%d", &c, &a, &b);
    if(a == 43)
        printf("%d\n", c + b);
    else if(a == 42)
        printf("%d\n", c * b);
    else if (a == 45)
        printf("%d\n", c - b);
    else if(a == 47)
        printf("%d\n", c / b);

    return 0;
}
