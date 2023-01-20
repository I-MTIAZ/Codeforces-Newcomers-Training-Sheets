#include<stdio.h>
#include<string.h>

int main()
{
    char a[100000], b[100000], s1[100000], s[100000];
    int i, l , f = 0;

    scanf("%s", a);
    scanf("%s", s);
    scanf("%s", b);
    scanf("%s", s1);
    l = strlen(s);

    for(i = 0 ; i <= l ; i++)
    {
        if(s[i] == s1[i])
            f = 0;
        else{
             f = 1;
             break;
        }

    }

    if(f == 0)
        printf("ARE Brothers\n");
        else
        printf("NOT\n");

        return 0;

}
