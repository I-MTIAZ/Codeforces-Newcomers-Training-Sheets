#include<stdio.h>
void max(int a[],int n)
{
    int m = 0, i;
    for(i = 1; i <= n; i++){
        if(a[i] > m)
            m = a[i];
    }
    printf("The maximum number : %d\n", m);
}

void min(int a[],int n)
{
    int m = 1000, i;
    for(i = 1; i <= n; i++){
        if(a[i] < m)
            m = a[i];
    }
    printf("The minimum number : %d\n", m);
}


void prime(int a[],int n)
{
    int m = 0, i, j;
    for(i = 1; i <= n; i++){

        if(a[i] == 1) m++;

        else{
            for(j = 2; j < a[i]; j++){
                if(a[i] % j == 0){
                    m++;
                    break;}
            }
        }
    }
    printf("The number of prime numbers : %d\n", n-m);
}

void pal(int a[],int n)
{
    int m = 0, i, j, s, r;

    for(i = 1; i <= n; i++){
         r = a[i];
         s = 0;
        while(r > 0){
            s = s * 10;
            s = s + r % 10;
            r /= 10;
        }
       if(s == a[i]) m++;
    }
    printf("The number of palindrome numbers : %d\n", m);
}

void gcd(int a[], int n)
{
    int i, m , j, b[110], c[110]={0}, g, r;
    for(i = 1; i <= n; i++){
            m = 0;
            for(j = 1; j <= a[i]; j++)
            {
                 if(a[i] % j == 0){
                    m++;
                }
            }
            b[i] = m;
    }
        g = 0;
        for(i = 1; i <=n ; i++)
        {
            if(b[i] > g)
                g = b[i];
        }

        for(i = 1; i <=n ; i++)
        {
            if(b[i] == g)
                c[i] = a[i];
        }
        r = 0;

        for(i = 1; i <=n ; i++)
        {
            if(c[i] > r)
                r = c[i];
        }
        printf("The number that has the maximum number of divisors : %d",r);

}



int main()
{
    int a[120],i, n;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    max(a, n);
    min(a, n);
    prime(a, n);
    pal(a, n);
    gcd(a, n);
}
