#include<stdio.h>
int odd(int n)
    {
        if(n % 2 != 0)
            return 1;
        else
            return 0;
    }
int pal(int n)
    {
        int a[100],b[100],i, r, c = 0, j, f = 0;
        for(i = 1; n > 0; i++){
            r = n%2;
            a[i] = r;
            n /= 2;
        }
        c = i - 1;

        for(i = c, j = 1; j <= c; i--, j++){
                b[j] = a[i];
        }

        for(i = 1, j = 1; i <= c; i++, j++){
            if(a[i] != b[j]){
                return 0;
            }
        }
        return 1;
    }

int main()
{
    int n, f, c;
    scanf("%d", &n);
    f = pal(n);
    c = odd(n);
    if(f == 1 && c == 1)
        printf("YES\n");
    else
        printf("NO\n");

}
