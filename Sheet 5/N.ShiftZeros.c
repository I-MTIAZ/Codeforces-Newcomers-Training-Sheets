#include<stdio.h>

void pass(int a[], int n)
{
    int i, c = 0, j, t;
    for(i = 1; i <= n; i++){
        if(a[i] == 0)
            c++;
    }
    for(j  =1; j <= c; j++)
    {
        for(i = 1; i <= n; i++)
        {
            if(i == n)
                break;
            else
            {
                if(a[i] == 0){
                    t = a[i];
                    a[i] = a[i+1];
                    a[i+1] = t;
                }
            }
        }
    }

}

int main()
{
    int a[10000],n , i , j, t;
    scanf("%d", &n);

    for(i = 1; i <= n ; i ++)
    scanf("%d", &a[i]);

    pass(a, n);
    for(i = 1; i <= n ; i ++)
    printf("%d ", a[i]);



}
