#include<stdio.h>
#include<string.h>
int main()
{
    char a[110][110];
    int i, j, n,m, x, y, f = 0;
    scanf("%d%d\n", &n, &m);

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf(" %c",&a[i][j]);
        }
    }

    scanf("%d%d", &x, &y);
    x -= 1;
    y -= 1;


            if(a[x-1][y-1] == '.' || a[x-1][y] == '.' ||
               a[x-1][y+1] == '.' || a[x][y-1] == '.' ||
               a[x][y+1] == '.' || a[x+1][y-1] == '.' ||
               a[x+1][y] == '.' || a[x+1][y+1] == '.')
               {
                   f = 1;
                   break;
               }
        }
    if(f == 0){printf("yes\n");}
    else printf("no\n");

}
