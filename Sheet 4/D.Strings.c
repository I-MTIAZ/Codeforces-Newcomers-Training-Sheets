#include<stdio.h>
#include<string.h>
int main()
{
    char a[22], b[22], c[22];
    int l, l1, t = 0;
    scanf("%s",a);
    scanf("%s",b);
    l = strlen(a);
    l1 = strlen(b);
    printf("%d %d\n", l , l1);

    strcpy(c, a);


    strcat(c , b);
    printf("%s\n",c);

    t = a[0];
    a[0] = b[0];
    b[0] = t;

    printf("%s ",a);
    printf("%s\n",b);
    return 0;

}





