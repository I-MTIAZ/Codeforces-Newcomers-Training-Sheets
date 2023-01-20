#include<stdio.h>
int main()
{
    char s[50];
    int a , b, i, t, j = 0, k = 0, c = 0;;

    scanf("%d%d",&a, &b);
    t = a + b + 1;

    for(i = 1; i <= t; i++)
    {

        scanf(" %c", &s[i]);

    }

    for(i = 1; i <= t; i++)
    {

        if(i == a + 1)
        {
            if(s[i] == '-')
            {
                j = 1;
            }

        }

        if(s[i] == '-')
            c++;

        if(s[i] >= '0' && s[i] <= '9')
            k = 1;
    }

    if(j == 1 && k == 1 && c == 1)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;

}
