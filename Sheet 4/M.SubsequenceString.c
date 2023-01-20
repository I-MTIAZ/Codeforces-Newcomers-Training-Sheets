#include<stdio.h>
#include<string.h>

int main()
{
    char s[10010], h[10] = "hello";
    int i, j, l, m;

    gets(s);

     l = strlen (s);
     m = strlen (h);

    for(i = 0,j = 0; i < l && j < m; i++){
        {
            if(s[i] == h[j])
               j++;
        }
    }
    if(m == j)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

