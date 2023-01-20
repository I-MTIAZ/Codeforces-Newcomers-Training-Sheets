/*#include<stdio.h.>
#include<string.h>


int main()
{
    char a[1000010];
    int c = 0, i, f ;
    gets(a);
///33 - 63
   f = strlen(a);
    for(i = 0;i < f; i++)
    {
        if(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z'){

            if(a[i+1] == ' '|| a[i+1] == '?'||
               a[i+1] == '!'||
               a[i+1] == '.'|| a[i+1] == ',')
                c++;
        }
    }
            printf("%d\n",c+1)

}
*/
#include<stdio.h>
int main()
{
    int a[100], b[100], i, m, s, n, r = 0, o;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=1; i<=n; i++)
    {
        s = 0;
        r = a[i];
        while(r > 0){
            s = s * 10;
            o = r %10;
            s = s + o;
            r /= 10;
        printf("%d\n",s);
        }
        if(s == a[i])
         printf("boom%d\n",s);
    }

}
