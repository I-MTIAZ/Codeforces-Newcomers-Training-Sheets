#include<stdio.h>
int main()
{
    char a[100000]; int n, i, f = 0;
    gets(a);

    for(i = 0; a[i] != '\0'; i++)
        {
        if(a[i] == 97 || a[i] == 101 || a[i] == 105||
           a[i] == 111 || a[i] == 117 )
            {
            if(a[i+1] == 97 || a[i+1] == 101|| a[i+1] == 105||
               a[i+1] == 111|| a[i+1]  == 117)
                {
                if( a[i+2] == 97 || a[i+2] == 101|| a[i+2] == 105||
                            a[i+2] == 111|| a[i+2]  == 117)
                            {
                                 f = 1;
                                 printf("%d\n",f);
                            }


                }
            }
        }


        if(f == 1)
            printf("YES\n");
        else
            printf("NO\n");

    return 0;
}
