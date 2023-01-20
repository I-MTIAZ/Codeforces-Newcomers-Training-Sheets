#include<stdio.h>
int main()
{
    long long int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    a = a * b;
    c = c * d;
    a = (a - c);

    printf("Difference = %d", a);
}
