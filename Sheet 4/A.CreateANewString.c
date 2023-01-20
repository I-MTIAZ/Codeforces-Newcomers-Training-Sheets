#include<stdio.h>
#include<string.h>

void lent(char a[], char b[], int l1, int l2)
{
    l1 = strlen(a);
    l2 = strlen(b);
    printf("%d %d\n%s %s", l1, l2, a, b);

}

int main()
{
    char a[1010], b[1010], l = 0, m = 0;
    gets(a);
    gets(b);
    lent(a,b, l, m);
    return 0;
}
