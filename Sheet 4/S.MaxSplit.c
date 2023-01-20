#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    int i,j = 0, l = 0, r = 0;

    scanf("%s",&a);

    for(i=0; a[i] != '\0'; i++)
    {
        if(a[i] == 'L')
           l++;
        else
            r++;
        if(l == r)
            j++;
    }

        printf("%d\n",j);
        l = 0;
        r = 0;
    for(i=0; a[i] != '\0'; i++)
    {
        if(a[i] == 'L')
        {
            printf("%c",a[i]);
            l++;
        }

        else if(a[i] == 'R')
        {
            printf("%c",a[i]);
            r++;
        }

        if(l == r)
            printf("\n");
    }

    return 0;
}
