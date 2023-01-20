/*#include<stdio.h>
#include<string.h>
int main()
{
    char a[22], b[22];
    int l, r;
    gets(a);
    gets(b);

    l = strlen(a);
    r = strlen(b);

    if(l == r)
        printf("%s\n",a);
    else if(l > r)
        printf("%s\n",b);
    else
        printf("%s\n",a);
    return 0;
}*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[22], b[22];
    int i, m1, m2;
    gets(a);
    gets(b);
    m1 = -100;
    for(i = 0; a[i] != '\0'; i++){
        if(m1 < a[i]){
                m1 = a[i];
        }
    }
    printf("%c \n", a[m1]);


    m2 = -100;
    for(i = 0;b[i] != '\0'; i++){
        if(m2 < a[i])
            m2 = b[i];
    }
     printf("%c ", b[m2]);



    /*if(m1 == m2)
        printf("%s\n", b);
    else if(m2 > m1)
        printf("%s\n", a);
    else
        printf("%s\n", b);

    return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[22], b[22];
    int m1, m2, l = 0, i;
    gets(a);
    gets(b);



    m1 = strcmp(a, b);
    m2 = strcmp(b, a);


    if(m1 == m2)
        printf("%s\n", b);
    else if(m1 == 1 && m2 == -1)
        printf("%s\n", b);
    else if(m1 == -1 && m2 == 1)
        printf("%s\n", a);

    return 0;
}

