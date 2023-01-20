#include<stdio.h>
void day(int x)
{
    int y , m , d, t;
    y = x /365;
    t = x % 365;
    m = t / 30;
    d = t % 30;
    printf("%d years\n%d months\n%d days\n", y, m, d);

}

int main()
{
    int n;
    scanf("%d", &n);
    day(n);
    return 0;
}
