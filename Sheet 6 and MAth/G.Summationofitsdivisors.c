#include<stdio.h>

int main()
{
    int a, i;
    long double n = 0;
    scanf("%d" ,&a);

    for(i = 1; i <= a; i++){
        if(a % i == 0)
            n += i;
    }
    printf("%.0Lf\n",n);
}
