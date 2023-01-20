#include<stdio.h>
#include<string.h>
void rev (char a[], int l, int k)
{int i;
    for(i = l ;i >= k ; i--)
        printf("%c",a[i]);

}
int main()
{
    char a[1000101];
    scanf("%[^\n]",a);
    int start, end;
    int i, m, n = 0;
    m = strlen(a);
    for(i = 0; i <= m; i++)
    {
        if(a[i] == ' ' || a[i] == '\0')
        {
            start = n;
            end = i - 1;
            rev(a,end,start);
            if(i < m)
                printf(" ");
            n = i+1;
        }

    }
    printf("\n");
    return 0;
}
