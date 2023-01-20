#include<stdio.h>

void swe(int a[], int n)
{
    int i, j, f = 0, g;

    for(i = 0; i < n; i++){
        for(j = n -1; j > i; j--)
        {
            if(a[i] == a[j])
                break;
        }
        if(i == j)
            f++;
    }


    printf("%d\n", f);

}


int main()
{
    int a[100010], n, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);

    swe(a, n);



}
