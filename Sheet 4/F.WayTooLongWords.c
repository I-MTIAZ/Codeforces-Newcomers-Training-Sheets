#include<stdio.h>
#include<string.h>
int main()
{
    char a[110];
    int n, l, i, j, m;

    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        l = 0;

        scanf("%s",a);

        l = strlen(a);

        if(l <= 10)
            printf("%s\n",a);
        else{
            m = l-1;
            l -= 2;
            printf("%c%d%c\n",a[0], l, a[m]);
        }
    }
    return 0;
}
