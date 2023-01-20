#include<stdio.h>
#include<string.h>

int main()
{
    char a[10000];
    int i, j, l;
    gets(a);
    l = strlen(a);

    for(i = 0; a[i]!= '\0'; i++)

    {
        if(a[i] == 'a' && a[i+1] == 'm'
           && a[i+2] == 'e' && a[i+3] == '=')
        {
             printf("username: ");
            for(j = i+4 ; j < l; j++)
            {
                if(a[j] == '&')
                    break;
                else
                    printf("%c",a[j]);
            }
            printf("\n");
        }
        /// 2
        if(a[i] == 'p' && a[i+1] == 'w'
           && a[i+2] == 'd' && a[i+3] == '=')
        {
             printf("pwd: ");
            for(j = i+4 ; j < l; j++)
            {
                if(a[j] == '&')
                    break;
                else
                    printf("%c",a[j]);
            }
            printf("\n");
        }
        /// 3
         if(a[i] == 'i' && a[i+1] == 'l'
           && a[i+2] == 'e' && a[i+3] == '=')
        {
             printf("profile: ");
            for(j = i+4 ; j < l; j++)
            {
                if(a[j] == '&')
                    break;
                else
                    printf("%c",a[j]);
            }
            printf("\n");
        }
        ///4
        if(a[i] == 'o' && a[i+1] == 'l'
           && a[i+2] == 'e' && a[i+3] == '=')
        {
             printf("role: ");
            for(j = i+4 ; j < l; j++)
            {
                if(a[j] == '&')
                    break;
                else
                    printf("%c",a[j]);
            }
            printf("\n");
        }
        ///5
        if(a[i] == 'k' && a[i+1] == 'e'
           && a[i+2] == 'y' && a[i+3] == '=')
        {
             printf("key: ");
            for(j = i+4 ; j <= l; j++)
            {
                if(a[j] == '&' || a[j] == '\0')
                    break;
                else
                    printf("%c",a[j]);
            }
            printf("\n");
        }
}
