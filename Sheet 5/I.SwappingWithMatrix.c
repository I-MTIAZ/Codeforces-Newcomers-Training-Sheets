#include<stdio.h>
void swp(int a[][550], int n, int x, int y)
{
    int i, j, t= 0;

    for(i = 0; i < n; i++){
            t = a[x-1][i];
            a[x-1][i] = a[y-1][i];
            a[y-1][i] = t;

        }

        for(i = 0; i < n; i++){
            t = a[i][x-1];
            a[i][x-1] = a[i][y-1];
            a[i][y-1] = t;
        }


        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
}



int main()
{
    int a[550][550], i, j, n, x, y, t;
    scanf("%d%d%d",&n, &x, &y);

    for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                scanf("%d",&a[i][j]);
            }
        }
        swp(a,n,x,y);

        return 0;
}
