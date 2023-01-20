#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, f, c, r;
    scanf("%lf%lf", &a, &b);
    f = floor(a / b);
    c = ceil (a / b);
    r = round(a / b);
    printf("floor %.0lf / %.0lf = %.0lf\n",a ,b ,f);
    printf("ceil %.0lf / %.0lf = %.0lf\n",a ,b ,c);
    printf("round %.0lf / %.0lf = %.0lf\n",a ,b ,r);

    return 0;
}
